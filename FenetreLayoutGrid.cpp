#include "FenetreLayoutGrid.h"

FenetreLayoutGrid::FenetreLayoutGrid(): QWidget()
{
    bouton1 = new QPushButton("Bonjour");
    bouton2 = new QPushButton("les");
    bouton3 = new QPushButton("amis");

    layout = new QGridLayout();
    layout->addWidget(bouton1, 0, 0);
    layout->addWidget(bouton2, 0, 1);
    layout->addWidget(bouton3, 1, 0, 1, 2);

    setLayout(layout);
}

