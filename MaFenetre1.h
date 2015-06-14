#ifndef MAFENETRE1_H
#define MAFENETRE1_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>

class MaFenetre1: public QWidget
{
public:
    MaFenetre1(const int &largeur = 300, const int &hauteur = 150);

private:
    QPushButton *m_bouton;
};

#endif // MAFENETRE1_H
