//
// Created by consent_ on 09-Apr-25.
//

#include <QCoreApplication>
#include <iostream>
#include <string>

#include <QTextStream>
#include <QDebug>

void do_cpp()
{
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Hello, " << name << std::endl;
}

void do_mixed()
{
    QTextStream qout(stdout);
    QTextStream qin(stdin);

    qInfo() << "Please enter your name: ";
    QString name = qin.readLine();
    qInfo() << "Hello" << name;
}

void do_qt()
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Please enter your name: " << Qt::endl;

    QString name = qin.readLine();


    qout << "Hello, " << name << Qt::endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    do_qt();
    return app.exec();
}
