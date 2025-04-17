//
// Created by consent_ on 17/04/25.
//

#include <QCoreApplication>
#include "test.h"

//typedef QList<Test*> TestList;

auto getList() -> QList<Test*>
{
	QList<Test*> list;

	for (int i = 0; i < 10; i++) {

		list.append(new Test());
		list.last()->setObjectName("Testlist" + QString::number(i));
		list.last()->setParent(nullptr);
	}

	return list;
}

void displayList(const QList<Test*>& list)
{
	foreach(Test* obj, list)
	{
		qInfo() << obj;
	}
	qDeleteAll(list);
}

int main (int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	displayList(getList());


	return a.exec();
}