// License: MIT. Please Check the license file in root directory
// Copyright (c) (2018) Lester Lo 

#include "KITTI_Viewer.h"
#include <QApplication>
#include <QMainWindow>

int main (int argc, char *argv[])
{
  QApplication a (argc, argv);
  KITTI_Viewer w;


  w.show ();

  return a.exec ();
}
