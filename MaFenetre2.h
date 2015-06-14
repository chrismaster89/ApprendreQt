#ifndef MAFENETRE2_H
#define MAFENETRE2_H

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>

class MaFenetre2 : public QWidget
{
public:
    MaFenetre2();

private:
    QLCDNumber *m_lcd;
    QSlider *m_slider;
};

#endif // MAFENETRE2_H
