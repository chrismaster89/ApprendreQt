#include "MaFenetre1.h"

MaFenetre1::MaFenetre1(const int &largeur, const int &hauteur): QWidget()
{
    setFixedSize(largeur, hauteur);

    //Bouton
    m_bouton = new QPushButton("Mon bouton", this);
    m_bouton->setFont(QFont("Comic Sans MS", 14));
    m_bouton->setCursor(Qt::PointingHandCursor);
    m_bouton->move(60, 50);

    QObject::connect(m_bouton, SIGNAL(clicked(bool)), qApp, SLOT(quit()));
}

