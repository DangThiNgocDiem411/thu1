#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QString>
#include <QDebug>
#include <QtAndroidExtras/QAndroidJniObject>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QString path1;
    QString path2;
    QString path3;
    bool ok;

    void buscaImagem();

    virtual void handleActivityResult(int receiverRequestCode, int resultCode, const QAndroidJniObject & data);




private slots:

    void on_btn1_clicked();

    void on_btn2_clicked();

    void on_btn3_clicked();

    void on_btnOk_clicked();

    void on_btnCancel_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
