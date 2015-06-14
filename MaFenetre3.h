#ifndef MAFENETRE3_H
#define MAFENETRE3_H

#include <QApplication>
#include <QWidget>
#include <QProgressBar>
#include <QSlider>

class MaFenetre3 : public QWidget
{
public:
    MaFenetre3();

private:
    QProgressBar *m_progressBar;
    QSlider *m_slider;
};

#endif // MAFENETRE3_H
