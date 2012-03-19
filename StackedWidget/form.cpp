#include <QtGui>

#include "form.h"

Form::Form(QWidget *parent)  : QMainWindow(parent)
{
  setupUi(this);
  this->pushButton->setText("Hello");

  connect(comboBox,SIGNAL(currentIndexChanged (int)),stackedWidget,SLOT(setCurrentIndex (int)));
}
