#include "Calculator.h"
#include "ui_Calculator.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int num1;
char act;
bool f=false;

void MainWindow::on_pushButton_1_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(1));
    a=a*10+1;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_2_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(2));
    a=a*10+2;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_3_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(3));
    a=a*10+3;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_4_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(4));
    a=a*10+4;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_5_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(5));
    a=a*10+5;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_6_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(6));
    a=a*10+6;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_7_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(7));
    a=a*10+7;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_8_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(8));
    a=a*10+8;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_9_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    if(a==0) ui->lineEdit_res->setText(QString::number(9));
    a=a*10+9;
    ui->lineEdit_res->setText(QString::number(a));
}


void MainWindow::on_pushButton_0_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    a=a*10;
    ui->lineEdit_res->setText(QString::number(a));
}

void MainWindow::on_pushButton_plus_clicked()
{
    if(f==false){
        act='+';
        num1=ui->lineEdit_res->text().toInt();
        ui->lineEdit_res->clear();
    }
    f=true;
}


void MainWindow::on_pushButton_minus_clicked()
{
    if(f==false){
        act='-';
        num1=ui->lineEdit_res->text().toInt();
        ui->lineEdit_res->clear();
    }
    f=true;
}


void MainWindow::on_pushButton_mutliply_clicked()
{
    if(f==false){
        act='*';
        num1=ui->lineEdit_res->text().toInt();
        ui->lineEdit_res->clear();
    }
    f=true;
}


void MainWindow::on_pushButton_15_clicked()
{
    if(f==false){
        act='/';
        num1=ui->lineEdit_res->text().toInt();
        ui->lineEdit_res->clear();
    }
    f=true;
}


void MainWindow::on_pushButton_equal_clicked()
{
    long long int num2=ui->lineEdit_res->text().toInt();
    long long int res;
    if(act=='+'){
        res=num1+num2;
    }
    if(act=='-'){
        res=num1-num2;
    }
    if(act=='*'){
        res=num1*num2;
    }
    if(act=='/'){
        res=num1/num2;
    }

    ui->lineEdit_res->setText(QString::number(res));
    f=false;
}


void MainWindow::on_pushButton_clicked()
{
    ui->lineEdit_res->clear();
}


void MainWindow::on_pushButton_10_clicked()
{
    long long int a = ui->lineEdit_res->text().toInt();
    a=a/10;
    ui->lineEdit_res->setText(QString::number(a));
}

