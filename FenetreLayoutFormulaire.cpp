#include "FenetreLayoutFormulaire.h"

FenetreLayoutFormulaire::FenetreLayoutFormulaire() : QWidget()
{
    nom = new QLineEdit;
    prenom = new QLineEdit;
    age = new QLineEdit;

    layout = new QFormLayout;
    //On peut définir un raccourcis clavier en placant & devant la lettre du libellé
    //Il faut appuyer sur ALT + touche
    layout->addRow("Votre &nom:", nom);
    layout->addRow("Votre prénom:", prenom);
    layout->addRow("Votre âge:", age);

    setLayout(layout);
}

