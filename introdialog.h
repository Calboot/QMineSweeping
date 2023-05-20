#ifndef INTRODIALOG_H
#define INTRODIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class IntroDialog; }
QT_END_NAMESPACE

class IntroDialog : public QDialog
{
    Q_OBJECT

public:
    IntroDialog(QWidget *parent = nullptr);
    ~IntroDialog();

private slots:
    void on_exitButton_clicked();

    void on_historyButton_clicked();

    void on_startGameButton_clicked();

private:
    Ui::IntroDialog *ui;
};
#endif // INTRODIALOG_H
