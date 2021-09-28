#ifndef CRICKET_H
#define CRICKET_H

#include <QDialog>

namespace Ui {
class Cricket;
}

class Cricket : public QDialog
{
    Q_OBJECT

public:
    explicit Cricket(QWidget *parent = nullptr);
    ~Cricket();
    void updateTarget(int target);

private:
    Ui::Cricket *ui;

};

#endif // CRICKET_H
