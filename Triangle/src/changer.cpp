
#include "include/openglwindow.h"
//#include "trianglewindow.h"
#include "include/changer.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QMatrix4x4>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QScreen>

#include <QtCore/qmath.h>

Changer::Changer()
{

}

void Changer::color()
{

}


void Changer::setSize(GLfloat a, GLfloat b, GLfloat c, GLfloat d, GLfloat e, GLfloat f)
  {
    // Jeg prøvde først med et array, og returne det med en pointer men klarte da kun å plukke ut 1.
    // variabel, og var usikker på hvordan jeg skulle fortsette.
    // Mulig å lage forløkke
    sizing[0] = a;
    sizing[1] = b;
    sizing[2] = c;
    sizing[3] = d;
    sizing[4] = e;
    sizing[5] = f;

/*
    GLfloat size[] = {
     0.0f, 0.907f,
     -0.5f, -0.5f,
     0.5f, -0.5f
    };

      GLfloat a[] = {
          0.0f, 0.907f,
           -0.5f, -0.5f,
           0.5f, -0.5f
      };
      t = a;
      return *t;
      qDebug() << *t;
  }
  */

// qDebug() << a;
 //return sizeof(a);
 //return sizeof(GLfloat) * 6;
}

GLfloat Changer::getSize()
{

}

void Changer::setColor(GLfloat a, GLfloat b, GLfloat c, GLfloat d, GLfloat e, GLfloat f, GLfloat g, GLfloat h, GLfloat i)
{

    coloring[0] = a;
    coloring[1] = b;
    coloring[2] = c;
    coloring[3] = d;
    coloring[4] = e;
    coloring[5] = f;
    coloring[6] = g;
    coloring[7] = h;
    coloring[8] = i;
}
GLfloat Changer::getColor()
{

}
void Changer::makeTriangle()
{


}
