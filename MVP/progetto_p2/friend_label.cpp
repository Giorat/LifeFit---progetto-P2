#include "friend_label.h"

int friend_label::count = 0;

friend_label::friend_label(const QString & text, QWidget * parent):QLabel(text,parent)
{
    int larghezza = 250 - count*10;
    this->setStyleSheet("border-width: 1px;border-style: solid;border-radius: 20px;border-color: rgb(53,64,82);background: white;padding-left: 10px;");
    this->setMinimumWidth(larghezza);
    this->setMaximumWidth(larghezza);
    this->setMinimumHeight(75);
    count++;
}


friend_label::~friend_label()
{
 count--;
}

int friend_label::GetCount(){
   return count;
}
