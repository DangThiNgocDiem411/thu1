#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QMessageBox>
#include <string.h>
#include <qpixmap.h>
#include <QtAndroidExtras/QAndroidJniObject>
#include <QtAndroidExtras/QtAndroid>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //cv::Mat im = cv::imread("D:/Images/dam_hoi_che_kieu va ta la/01d1b0cbc4b2341b75bbb965614c0c60.jpg");

   // cv::imshow("ngoc diem",im);



}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow:: buscaImagem(){
    QAndroidJniObject ACTION_PICK = QAndroidJniObject::fromString("android.intent.action.GET_CONTENT");
       QAndroidJniObject intent("android/content/Intent");
       if (ACTION_PICK.isValid() && intent.isValid())
       {
           intent.callObjectMethod("setAction", "(Ljava/lang/String;)Landroid/content/Intent;", ACTION_PICK.object<jstring>());
           intent.callObjectMethod("setType", "(Ljava/lang/String;)Landroid/content/Intent;", QAndroidJniObject::fromString("image/*").object<jstring>());
           QtAndroid::startActivity(intent.object<jobject>(), 101, this);
           qDebug() << "OK";
       }
       else
       {
           qDebug() << "ERRO";
       }

}//buscaimage

void MainWindow::handleActivityResult(int receiverRequestCode, int resultCode, const QAndroidJniObject &data)
{
    qDebug() << "Trabalha com os dados";

    jint RESULT_OK = QAndroidJniObject::getStaticField<jint>("android/app/Activity", "RESULT_OK");
    if (receiverRequestCode == 101 && resultCode == RESULT_OK) {
         path1 = data.callObjectMethod("getData", "()Landroid/net/Uri;").callObjectMethod("getPath", "()Ljava/lang/String;").toString();
        emit on_btn1_clicked(path1);

        qDebug() << path1;
    }
    else
    {
        qDebug() << "Caminho errado";
    }
}



void MainWindow::on_btn1_clicked()
{
    path1 = QFileDialog::getOpenFileName(this,"select image",QDir::currentPath(),tr("Image fie (*.jpeg *.png *.bmp *.jpg *.png *.gif);; All files(*.*)"));
    if(!path1.isEmpty())
    {
        ui->txtPath1->setText(path1);
    }
}

void MainWindow::on_btn2_clicked()
{
    path2 = QFileDialog::getOpenFileName(this,"select image",QDir::currentPath(),tr("Image fie (*.jpeg *.png *.bmp *.jpg *.png *.gif);; All files(*.*)"));
    if(!path2.isEmpty())
    {
        ui->txtPath2->setText(path1);
    }
}

void MainWindow::on_btn3_clicked()
{
    path3 = QFileDialog::getOpenFileName(this,"select image",QDir::currentPath(),tr("Image fie (*.jpeg *.png *.bmp *.jpg *.png *.gif);; All files(*.*)"));
    if(!path3.isEmpty())
    {
        ui->txtPath3->setText(path1);
    }
}

void MainWindow::on_btnOk_clicked()
{
    ok =true;
    this->close();
}

void MainWindow::on_btnCancel_clicked()
{
    ok = false;
    this->close();
}
