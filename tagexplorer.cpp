#include "tagexplorer.h"
#include "ui_tagexplorer.h"

TagExplorer::TagExplorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TagExplorer)
{
    ui->setupUi(this);
}

TagExplorer::~TagExplorer()
{
    delete ui;
}
