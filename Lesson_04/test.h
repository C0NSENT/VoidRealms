//
// Created by consent_ on 16/04/25.
//

#ifndef TEST_H
#define TEST_H

#include <QDebug>
#include <QObject>

class Test : public QObject
{
	Q_OBJECT
public:
	explicit Test(QObject *parent = nullptr);

signals:
	void close();

public slots:
	void do_stuff();
};


#endif //TEST_H
