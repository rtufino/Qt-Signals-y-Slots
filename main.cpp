#include <QCoreApplication>
#include <QDebug>
#include "contador.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Contador contadorA, contadorB;
    QObject::connect(&contadorA, &Contador::valorCambiado,
                     &contadorB, &Contador::setValor);

    int valor = 15;
    qDebug() << "Contador A:" << valor;
    contadorA.setValor(15);
    qDebug() << "Contador B:" << contadorB.valor();

    return 0;
}
