#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include <QTimer>
#include <QSharedPointer>
#include <random>

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
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QVector<double> x1, y1, y2;

    void allRuntime(QVector<double> &yAxis, double &maxY); // Добавлен второй параметр
    void MNK(QVector<double> &yAxis2);
};

#endif // MAINWINDOW_H
