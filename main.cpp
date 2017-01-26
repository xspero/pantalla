#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QQmlContext>
#include <QQmlEngine>
#include <QtQml>
#include <serialisimo.h>
//#include <QtQml/QQmlContext>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);


    QScopedPointer<Serialisimo> serialon(new Serialisimo);



    QQmlApplicationEngine engine;


    //creando  un objeto en serialisimo y registrandolo para qml
    Serialisimo myObject;
    qmlRegisterType<Serialisimo>("QMyObject", 1, 0, "QMyObject");
    engine.rootContext()->setContextProperty("myObject", &myObject);


    //int valor();
    //engine.rootContext()->setContextProperty("objetito",&valor);

    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    Serialisimo miSerial;
    engine.rootContext()->setContextProperty("serialito",&miSerial);
    //connect(dial, SIGNAL(valueChanged(int)), SLOT(onSliderValueChanged(int)));




    return app.exec();
}
