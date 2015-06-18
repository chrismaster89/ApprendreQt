#include "FenetreLayoutHorizontal.h"

FenetreLayoutHorizontal::FenetreLayoutHorizontal() : QWidget()
{
    m_layout = new QHBoxLayout;

    bouton1 = new QPushButton("Bonjour");
    bouton2 = new QPushButton("les");
    bouton3 = new QPushButton("connard !!!");

    m_layout->addWidget(bouton1);
    m_layout->addWidget(bouton2);
    m_layout->addWidget(bouton3);

    setLayout(m_layout);
}

