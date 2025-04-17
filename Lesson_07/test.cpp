//
// Created by consent_ on 17/04/25.
//

#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
	qInfo() << this << "Constructed" << parent;
}

Test::~Test()
{
	qInfo() << this << "Destructed" << parent();
}
