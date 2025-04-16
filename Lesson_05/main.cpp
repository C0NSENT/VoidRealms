//
// Created by consent_ on 16/04/25.
//

#include <QCoreApplication>

#include "cat.h"

class QInfoTest
{
	int a;
public:
	QInfoTest() : a{1} {}
};

/*void test( Cat cat)
{

}*/

void test2(Cat *cat)
{
	qInfo() << "Брааат за 69 руб.";
}

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);

	Cat kitty;
	kitty.setObjectName("Blue Oyster Cult");
	//test(kitty);

	qInfo()<<&kitty;

	QInfoTest test;

	qInfo() << &test;

	test2(&kitty);

	app.exec();
}