//
// Created by consent_ on 17/04/25.
//

#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>


class Test : public QObject
{
	Q_OBJECT
public:
	explicit Test(QObject *parent = nullptr);
	~Test();

signals:
};



#endif //TEST_H
