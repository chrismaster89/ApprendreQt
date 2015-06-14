#include "MaFenetre3.h"

MaFenetre3::MaFenetre3() : QWidget()
{
    setFixedSize(200, 100);

    m_progressBar = new QProgressBar(this);
    m_progressBar->setGeometry(10, 20, 150, 20);

    m_slider = new QSlider(Qt::Horizontal, this);
    m_slider->setGeometry(10, 60, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_progressBar, SLOT(setValue(int)));
}

