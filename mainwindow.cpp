#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("Probando el cambio en c++");
    ui->pushButton->setText("Ayuda");

    //Agregamos 3 opciones al QcomboBox
    ui->comboBox->addItem("1. QLabel");
    ui->comboBox->addItem("2. QPushButton");
    ui->comboBox->addItem("3. QLineEdit");
}

MainWindow::~MainWindow()
{
    delete ui;
}

