#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private:
        Ui::MainWindow *ui;

    private slots:
        void newFile();
        void openFile();
        void saveFile();
        void exitApp();
        void chooseFont();
        void setBold();
        void setItalic();
        void setUnderline();
        void zoomIn();
        void zoomOut();
        void resetZoom();
        void toggleDarkMode();
        void toggleWordWrap();
};
#endif // MAINWINDOW_H
