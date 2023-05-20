#ifndef CHOOSEGAMEMODEDIALOG_H
#define CHOOSEGAMEMODEDIALOG_H

#include <QDialog>

namespace Ui {
class ChooseGameModeDialog;
}

class ChooseGameModeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChooseGameModeDialog(QWidget *parent = nullptr);
    ~ChooseGameModeDialog();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::ChooseGameModeDialog *ui;
};

#endif // CHOOSEGAMEMODEDIALOG_H
