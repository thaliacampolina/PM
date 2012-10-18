#include <QtGui/QApplication>
#include "crud.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CRUD w;
    w.show();
    
    return a.exec();
}
