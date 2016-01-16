#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QVector>
#include <QTcpSocket>
#include <QDebug>
class client : public QObject
{
private:
    static QVector<client> vector;
    const QString splitstring = ",,,,";
    QString cname;
    QString caller_name;
public:
   explicit client(QObject *parent = 0);
    void SetSocket(int Descriptor);
     QTcpSocket *socket;

public slots:

     void disconnected();
     void readyRead();

};

#endif // CLIENT_H
