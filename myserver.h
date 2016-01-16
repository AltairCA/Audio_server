#ifndef MYSERVER_H
#define MYSERVER_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QAbstractSocket>
#include "client.h"
class myServer :  public QTcpServer
{
    Q_OBJECT
public:
    explicit myServer(QObject *parent = 0);

    void StartServer();
    QStringList user_list;
protected:
    void incomingConnection(qintptr handle);
};

#endif // MYSERVER_H
