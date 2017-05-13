#include "openimages.h"
#include "ui_openimages.h"
#include <QFileDialog>
#include <QMessageBox>
#include <string.h>
#include <qpixmap.h>



OpenImages::OpenImages(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::OpenImages)
{
    ok = false;
    ui->setupUi(this);

}

OpenImages::~OpenImages()
{
    delete ui;
}

void OpenImages::on_btnImage1_clicked()
{
    path1 = QFileDialog::getOpenFileName(this,"select image",QDir::currentPath(),tr("Image fie (*.jpeg *.png *.bmp *.jpg *.png *.gif);; All files(*.*)"));
    if(!path1.isEmpty())
    {
        ui->txtPath1->setText(path1);
    }

}

void OpenImages::on_btnImage2_clicked()
{
    path2 = QFileDialog::getOpenFileName(this,"select image",QDir::currentPath(),tr("Image fie (*.jpeg *.png *.bmp *.jpg *.png *.gif);; All files(*.*)"));
    if(!path2.isEmpty())
    {
        ui->txtPath2->setText(path2);
    }
}

void OpenImages::on_btnImage3_clicked()
{
    path3 = QFileDialog::getOpenFileName(this,"select image",QDir::currentPath(),tr("Image fie (*.jpeg *.png *.bmp *.jpg *.png *.gif);; All files(*.*)"));
    if(!path3.isEmpty())
    {
        ui->txtPath3->setText(path3);
    }
}

void OpenImages::on_btnOk_clicked()
{
    ok =true;
    this->close();
}

void OpenImages::on_btnCancel_clicked()
{
    ok = false;
    this->close();
}
