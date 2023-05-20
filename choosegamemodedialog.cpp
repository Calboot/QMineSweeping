#include "choosegamemodedialog.h"
#include "ui_choosegamemodedialog.h"

ChooseGameModeDialog::ChooseGameModeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChooseGameModeDialog)
{
    ui->setupUi(this);
}

ChooseGameModeDialog::~ChooseGameModeDialog()
{
    delete ui;
}

void ChooseGameModeDialog::on_buttonBox_accepted()
{

}


void ChooseGameModeDialog::on_buttonBox_rejected()
{
    close();
    parentWidget()->show();
}

