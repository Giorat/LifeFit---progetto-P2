#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QDialog>

namespace Ui {
class UiAdmin;
}

class UiAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit UiAdmin(QDialog *parent = 0);
    ~UiAdmin();

private:
    Ui::UiAdmin *ui;
};

#endif // UI_ADMIN_H
