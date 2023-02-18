#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    /**
     * This wont automatically turned off by default.
     */
    QCoreApplication a(argc, argv);

    QString mstr = "hello world";

    qDebug() << mstr;
    return a.exec();
}
