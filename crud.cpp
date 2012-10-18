#include "crud.h"
#include "ui_crud.h"

CRUD::CRUD(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CRUD)
{
    ui->setupUi(this);
}

CRUD::~CRUD()
{
    delete ui;
}
