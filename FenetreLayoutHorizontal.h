#ifndef FENETRELAYOUTHORIZONTAL_H
#define FENETRELAYOUTHORIZONTAL_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>

class FenetreLayoutHorizontal : public QWidget
{
public:
    FenetreLayoutHorizontal();

private:
    QHBoxLayout *m_layout; //QVBoxLayout
    QPushButton *bouton1, *bouton2, *bouton3;
};

#endif // FENETRELAYOUTHORIZONTAL_H
