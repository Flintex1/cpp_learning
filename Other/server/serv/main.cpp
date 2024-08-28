#include <QCoreApplication>
#include <QTcpServer>
#include <QTcpSocket>
#include <QThread>
#include <QTextStream>

class Server : public QTcpServer {
    Q_OBJECT
public:
    Server(QObject* parent = nullptr) : QTcpServer(parent) {}

protected:
    void incomingConnection(qintptr socketDescriptor) override {
        QThread* thread = new QThread;
        QTcpSocket* socket = new QTcpSocket;
        socket->setSocketDescriptor(socketDescriptor);
        socket->moveToThread(thread);

        connect(thread, &QThread::started, [socket]() {
            QTextStream(stdout) << "New connection\n";
            QObject::connect(socket, &QTcpSocket::readyRead, [socket]() {
                QTextStream(stdout) << "Message received: " << socket->readAll() << "\n";
            });
            QObject::connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
        });

        connect(socket, &QTcpSocket::disconnected, thread, &QThread::quit);
        connect(thread, &QThread::finished, thread, &QThread::deleteLater);

        thread->start();
    }
};

int main(int argc, char* argv[]) {
    QCoreApplication a(argc, argv);

    Server server;
    if (!server.listen(QHostAddress::Any, 1234)) {
        QTextStream(stderr) << "Server could not start!\n";
        return 1;
    }

    QTextStream(stdout) << "Server started...\n";
    return a.exec();
}

#include "main.moc"
