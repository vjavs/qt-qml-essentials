//! [0]
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include "myobject.h"
#include "mydialog.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MyObject obj;
    MyDialog dialog;

    dialog.connect(dialog.aButton, SIGNAL(clicked()), SLOT(close()));
    dialog.show();

    return app.exec();
}
//! [0]
