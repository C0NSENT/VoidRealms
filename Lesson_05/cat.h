//
// Created by consent_ on 16/04/25.
//

#ifndef CAT_H
#define CAT_H

#include <QObject>
#include <QDebug>

class Cat : public QObject
{
	Q_OBJECT
public:
	explicit Cat(QObject *parent = nullptr);

signals:
};



#endif //CAT_H
