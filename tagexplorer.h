#ifndef TAGEXPLORER_H
#define TAGEXPLORER_H

#include <QMainWindow>

namespace Ui {
class TagExplorer;
}

class TagExplorer : public QMainWindow
{
    Q_OBJECT

public:
    explicit TagExplorer(QWidget *parent = 0);
    ~TagExplorer();

private:
    Ui::TagExplorer *ui;
};

#endif // TAGEXPLORER_H
