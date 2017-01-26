#ifndef SERIALISIMO_H
#define SERIALISIMO_H

#include <QObject>
#include <QDebug>
#include <QtSerialPort/QSerialPort>

class Serialisimo : public QObject
{
    Q_OBJECT
    //Q_PROPERTY(qreal valor READ  valor WRITE setvalor NOTIFY valuechanged)
    //Q_PROPERTY(qreal value READ value WRITE setValue NOTIFY valueChanged)
    //Q_PROPERTY(qreal valordimmer READ valordimmer WRITE setvalor)
public:
    explicit Serialisimo(QObject *parent = 0);

    Q_INVOKABLE void test();
    Q_INVOKABLE void iniciarSerial();
    Q_INVOKABLE void azulRGB();
    Q_INVOKABLE void rojoRGB();
    Q_INVOKABLE void apagartodo();
    Q_INVOKABLE void proyeccion();
    Q_INVOKABLE void escenaclases();
    //Q_INVOKABLE int valordimmer();

    Q_INVOKABLE double valordimmer(int numero);
    Q_INVOKABLE void enviardimmer(int numero);

   signals:
       qreal valueChanged(int valor);

};

#endif // SERIALISIMO_H
