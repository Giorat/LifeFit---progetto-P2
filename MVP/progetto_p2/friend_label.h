#ifndef FRIEND_LABEL_H
#define FRIEND_LABEL_H
#include <QLabel>

class friend_label : public QLabel
{
    Q_OBJECT
private:
    static int count;
public:
    friend_label(const QString & text, QWidget *parent =0);


    ~friend_label();

    static int GetCount();

};
//int friend_label::count = 0;
#endif // FRIEND_LABEL_H


