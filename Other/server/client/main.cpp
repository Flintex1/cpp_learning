#include <QCoreApplication>
#include <QTcpSocket>
#include <QTextStream>
#include <QThread>

class Client : public QObject {
    Q_OBJECT
public:
    Client(QObject* parent = nullptr) : QObject(parent) {
        socket = new QTcpSocket(this);
    }

    void connectToServer(const QString& host, quint16 port) {
        socket->connectToHost(host, port);
        connect(socket, SIGNAL(connected()), this, SLOT(onConnected()));
        connect(socket, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
    }

public slots:
    void onConnected() {
        QTextStream(stdout) << "Connected to server\n";
        QTextStream(stdout) << "Enter message: ";
        QTextStream s(stdin);
        QString message = s.readLine();
        socket->write(message.toUtf8());
    }

    void onReadyRead() {
        QTextStream(stdout) << "Server response: " << socket->readAll() << "\n";
    }

private:
    QTcpSocket* socket;
};

int main(int argc, char* argv[]) {
    QCoreApplication a(argc, argv);

    Client client;
    client.connectToServer("127.0.0.1", 1234);

    return a.exec();
}

#include "main.moc"
