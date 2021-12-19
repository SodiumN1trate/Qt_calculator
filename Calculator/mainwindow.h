#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <iostream>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_button_clicked();
    void operations();

    void on_buttonEqual_clicked();

    void on_buttonClear_clicked();

    void on_buttonClearEntry_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
