#ifndef FENETRELAYOUTGRID_H
#define FENETRELAYOUTGRID_H

#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

class FenetreLayoutGrid: public QWidget
{
public:
    FenetreLayoutGrid();

private:
    QPushButton *bouton1;
    QPushButton *bouton2;
    QPushButton *bouton3;

    QGridLayout *layout;
};

#endif // FENETRELAYOUTGRID_H
