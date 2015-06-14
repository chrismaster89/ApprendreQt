#ifndef MAFENETRE4_H
#define MAFENETRE4_H

#include <QApplication>
#include <QWidget>
#include <QSlider>

class MaFenetre4 : public QWidget
{
    Q_OBJECT

public:
    MaFenetre4();

private:
    QSlider *m_slider_l;
    QSlider *m_slider_h;

public slots:
    void changerLargeur(int largeur);
    void changerHauteur(int hauteur);

signals:
    void largeurMax();
};

#endif // MAFENETRE4_H
