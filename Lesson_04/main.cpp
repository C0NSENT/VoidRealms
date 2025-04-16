//
// Created by consent_ on 16/04/25.
//
#include <QCoreApplication>

#include "test.h"

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);

	Test obj;

	//Connect the signal and the slot

	QObject::connect(&obj, &Test::close, &app, &QCoreApplication::quit, Qt::QueuedConnection);

	obj.do_stuff();

	int value = app.exec();

	qInfo() << "Exit value:" << value;

	return value;
}