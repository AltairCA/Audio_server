#include "myserver.h"

myServer::myServer(QObject *parent) :
    QTcpServer(parent)
{
}

void myServer::StartServer(){

     if(listen(QHostAddress::Any,1235)){
         qDebug()<<"server Started";
     }else{
         qDebug()<<"server not Started";
     }
 }

void myServer::incomingConnection(qintptr handle){
    client *Myclient = new client(this);

    Myclient->SetSocket(handle);
}


