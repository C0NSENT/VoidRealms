//
// Created by consent_ on 16/04/25.
//

#include "test.h"

Test::Test(QObject *parent) : QObject(parent)
{
	qInfo() << this << "Constructed " << parent;
}

Test::~Test()
{
	foreach(QObject* child, children())
	{
		qInfo() << this << "-child - " << child;
	}
	qInfo() << this << "Destructed " << this->parent();
}
