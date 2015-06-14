#include "MaFenetre1.h"
#include "MaFenetre2.h"
#include "MaFenetre3.h"
#include "MaFenetre4.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    /*
    MaFenetre1 fenetre(600, 300);
    MaFenetre2 fenetre;
    MaFenetre3 fenetre;
    */

    MaFenetre4 fenetre;
    fenetre.show();

    return app.exec();
}

