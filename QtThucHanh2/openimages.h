#ifndef OPENIMAGES_H
#define OPENIMAGES_H

#include <QDialog>
#include <QString>

namespace Ui {
class OpenImages;
}

class OpenImages : public QDialog
{
    Q_OBJECT

public:
    explicit OpenImages(QWidget *parent = 0);
    ~OpenImages();
    QString path1;
    QString path2;
    QString path3;
    bool ok;


private slots:
    void on_btnImage1_clicked();

    void on_btnImage2_clicked();

    void on_btnImage3_clicked();


    void on_btnOK_clicked();

    void on_btnCancel_clicked();

private:
    Ui::OpenImages *ui;
};


#endif // OPENIMAGES_H
