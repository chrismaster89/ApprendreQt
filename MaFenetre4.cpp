#include "MaFenetre4.h"

MaFenetre4::MaFenetre4() : QWidget()
{
    setFixedSize(200, 200);

    m_slider_l = new QSlider(Qt::Horizontal, this);
    m_slider_l->setRange(200, 600);
    m_slider_l->setGeometry(10, 60, 150, 20);

    m_slider_h = new QSlider(Qt::Vertical, this);
    m_slider_h->setRange(200, 600);
    m_slider_h->setGeometry(180, 10, 20, 150);

    QObject::connect(m_slider_l, SIGNAL(valueChanged(int)), this, SLOT(changerLargeur(int)));
    QObject::connect(m_slider_h, SIGNAL(valueChanged(int)), this, SLOT(changerHauteur(int)));

    QObject::connect(this, SIGNAL(largeurMax()), qApp, SLOT(quit()));
}

void MaFenetre4::changerLargeur(int largeur)
{
    setFixedSize(largeur, height());

    if (largeur == 600)
        emit largeurMax();
}

void MaFenetre4::changerHauteur(int hauteur)
{
    setFixedSize(width(), hauteur);
}
