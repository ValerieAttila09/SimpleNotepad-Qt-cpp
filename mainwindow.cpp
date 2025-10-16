#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <QFontDialog>
#include <QTextCharFormat>

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->actionNew, &QAction::triggered, this, &MainWindow::newFile);
    connect(ui->actionOpen, &QAction::triggered, this, &MainWindow::openFile);
    connect(ui->actionSave, &QAction::triggered, this, &MainWindow::saveFile);
    connect(ui->actionExit, &QAction::triggered, this, &MainWindow::exitApp);
    connect(ui->actionUndo, &QAction::triggered, ui->textEdit, &QTextEdit::undo);
    connect(ui->actionRedo, &QAction::triggered, ui->textEdit, &QTextEdit::redo);
    connect(ui->actionCut, &QAction::triggered, ui->textEdit, &QTextEdit::cut);
    connect(ui->actionCopy, &QAction::triggered, ui->textEdit, &QTextEdit::copy);
    connect(ui->actionPaste, &QAction::triggered, ui->textEdit, &QTextEdit::paste);
    connect(ui->actionSelect_All, &QAction::triggered, ui->textEdit, &QTextEdit::selectAll);
    connect(ui->actionFont, &QAction::triggered, this, &MainWindow::chooseFont);
    connect(ui->actionBold, &QAction::triggered, this, &MainWindow::setBold);
    connect(ui->actionItalic, &QAction::triggered, this, &MainWindow::setItalic);
    connect(ui->actionUnderline, &QAction::triggered, this, &MainWindow::setUnderline);

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::newFile() {
    ui->textEdit->clear();
}

void MainWindow::openFile() {
    QString fileName = QFileDialog::getOpenFileName(this, "Buka File", "", "Text Files (*.txt);;All Files (*)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Tidak bisa membuka file!");
        return;
    }

    QTextStream in(&file);
    ui->textEdit->setPlainText(in.readAll());
    file.close();
}

void MainWindow::saveFile() {
    QString fileName = QFileDialog::getSaveFileName(this, "Simpan File", "", "Text Files (*.txt);;All Files (*)");
    if (fileName.isEmpty()) return;

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Error", "Tidak bisa menyimpan file");
        return;
    }

    QTextStream out(&file);
    out << ui->textEdit->toPlainText();
    file.close();
}

void MainWindow::chooseFont() {
    bool ok;
    QFont font = QFontDialog::getFont(&ok, ui->textEdit->font(), this, "Pilih Font");
    if (ok) {
        ui->textEdit->setFont(font);
    }
}

void MainWindow::setBold() {
    QTextCharFormat format;
    bool isBold = ui->textEdit->fontWeight() == QFont::Bold;
    format.setFontWeight(isBold ? QFont::Normal : QFont::Bold);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::setItalic() {
    QTextCharFormat format;
    bool isItalic = ui->textEdit->fontItalic();
    format.setFontItalic(!isItalic);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::setUnderline() {
    QTextCharFormat format;
    bool isUnderline = ui->textEdit->fontUnderline();
    format.setFontUnderline(!isUnderline);
    ui->textEdit->mergeCurrentCharFormat(format);
}

void MainWindow::exitApp() {
    QApplication::quit();
}
