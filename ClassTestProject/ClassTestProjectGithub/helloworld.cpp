#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button ("Hello everyone !");
 button.show();

 //comment test
 //comment from class on 3-23
 return app.exec();
}
