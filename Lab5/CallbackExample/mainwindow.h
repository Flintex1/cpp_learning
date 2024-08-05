ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QGraphicsScene>
#include <QLineEdit>
#include <square.h>
namespace Ui {
class MainWindow;
}
class MainWindow : public QMainWindow
{
Q_OBJECT
public:
explicit MainWindow(QWidget *parent = 0);
~MainWindow();
private:
Ui::MainWindow *ui;
QGraphicsScene *scene; // ���塞 ������� �業�
Square *square; // ���塞 ������, � ����� �㤥� ��।����� callback �㭪��
static QLineEdit *line1; // ���塞 static QLineEdit, � ����� �㤥� ࠡ���� callback �㭪��
static QLineEdit *line2; // ���塞 static QLineEdit, � ����� �㤥� ࠡ���� callback �㭪��
private:
// ���塞 callback �㭪��
static void getPosition(QPointF point);
};
#endif // MAINWINDOW_H
