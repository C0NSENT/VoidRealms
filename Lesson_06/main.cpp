//
// Created by consent_ on 16/04/25.
//

#include "test.h"

#include <QCoreApplication>
#include <QTimer>
#include <QDebug>

Test* getTest(QObject* parent)
{
	return new Test(parent);
}

Test* getTest2()
{
	return new Test();
}


class Oleg
{
	int a;
public:
	Oleg() : a{1}
	{
		qInfo() << "Хуйню сморозил";
	}
	~Oleg()
	{
		qInfo() << "Хуйню разморозил";
	}
	void yeahMemoryLeak()
	{
		new Oleg();
	}
};

int main(int argc, char *argv[])
{
	QCoreApplication app(argc, argv);
	app.setObjectName("Прибалт");
	QTimer timer;
	timer.singleShot(3000, &app, &QCoreApplication::quit);

	Test* dog = getTest(&app);
	dog->setObjectName("Шарик");

	Test* dog2 = getTest2();
	dog2->setObjectName("Мухтар");
	dog2->setParent(dog);

	//ДАААААААААААААААААААААААААААААААААААААААААААААААААААААААААА
	//Утечка памяти
	Oleg oleg;
	oleg.yeahMemoryLeak();

	int value = app.exec();
	qInfo() << "Exit code:" << value;
	return value;
}
