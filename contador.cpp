#include "contador.h"

Contador::Contador(QObject *parent) : QObject(parent)
{
    this->m_valor = 0;
}

int Contador::valor(){
    return m_valor;
}

void Contador::setValor(int valor){
    if (valor != m_valor){
        m_valor = valor;
        emit valorCambiado(valor);
    }
}
