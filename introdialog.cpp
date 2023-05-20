#include "introdialog.h"
#include "ui_introdialog.h"
#include "choosegamemodedialog.h"

IntroDialog::IntroDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IntroDialog)
{
    ui->setupUi(this);
}

IntroDialog::~IntroDialog()
{
    delete ui;
}

void IntroDialog::on_exitButton_clicked()
{
    exit(0);
}


void IntroDialog::on_historyButton_clicked()
{

}


void IntroDialog::on_startGameButton_clicked()
{
    ChooseGameModeDialog m(this);
    m.show();
    //this->hide();
}

