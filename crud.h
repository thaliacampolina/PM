#ifndef CRUD_H
#define CRUD_H

#include <QMainWindow>

namespace Ui {
class CRUD;
}

class CRUD : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CRUD(QWidget *parent = 0);
    ~CRUD();
    
private:
    Ui::CRUD *ui;
};

#endif // CRUD_H
