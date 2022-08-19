#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QWebView>
#include <QMainWindow>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;
    
    QMainWindow window;
    QWebView view(&window);
    view.setGeometry(0, 0, 600, 400);
    view.setUrl(QUrl("https://github.com/Mr-Phoebe"));
    window.show();

    return app.exec();
}
