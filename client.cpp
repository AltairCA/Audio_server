#include "client.h"

client::client(QObject *parent) :
    QObject(parent)
{
    //splitstring = ",,,,";
}

void client::SetSocket(int Descriptor){

    this->socket = new QTcpSocket(this);

    connect(this->socket,SIGNAL(disconnected()),this,SLOT(disconnected()));

    connect(this->socket,SIGNAL(readyRead()),this,SLOT(readyRead()));

    if (!this->socket->setSocketDescriptor(Descriptor)) {
          qWarning("couldn't set socket descriptor");
           qDebug()<<"Client Connected";
          this->socket->close();
          //delete socket;
    }


}


void client::disconnected(){

}

void client::readyRead(){
    try{

                QStringList list;

                QByteArray temp=this->socket->readAll();
                qDebug()<<temp;


                list = QString(temp).split(this->splitstring);





                for(int x=0;(list.length()/3)>x;x++){
                    if(list[0+x*3]=="1"){
                        //task1(list[1+x*3],list[2+x*3]);
                        cname = list[1+x*3];


                    }else if(list[0+x*3]=="2"){


                        caller_name = list[1+x*3];


                    }
                }

    }catch(...){

    }
}
