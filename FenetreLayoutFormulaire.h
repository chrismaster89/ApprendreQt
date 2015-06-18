#ifndef FENETRELAYOUTFORMULAIRE_H
#define FENETRELAYOUTFORMULAIRE_H

#include <QWidget>
#include <QLineEdit>
#include <QFormLayout>

class FenetreLayoutFormulaire : public QWidget
{
public:
    FenetreLayoutFormulaire();

private:
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *age;

    QFormLayout *layout;
};

#endif // FENETRELAYOUTFORMULAIRE_H
