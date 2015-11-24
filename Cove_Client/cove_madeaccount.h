#ifndef COVE_MADEACCOUNT_H
#define COVE_MADEACCOUNT_H

#include <QWidget>

class cove_login;

namespace Ui{
    class cove_madeaccount;
}

class cove_madeaccount : public QWidget
{
    Q_OBJECT

public:
    explicit cove_madeaccount(QWidget *parent = 0);
    ~cove_madeaccount();

private slots:
    void on_pushButton_Continue_clicked();

private:
    Ui::cove_madeaccount *ui;

    //Pointers for Made Account Window Buttons.
    cove_login *newCoveLoginWindow;
};

#endif // COVE_MADEACCOUNT_H
