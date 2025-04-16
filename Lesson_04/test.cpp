//
// Created by consent_ on 16/04/25.
//

#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{

}

void Test::do_stuff()
{
	qInfo() << "Doing stuff";
	emit close();
}
