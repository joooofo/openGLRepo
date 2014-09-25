
#include "include/openglwindow.h"

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
/*
static void qNormalizeAngle(int &angle)
{
    while (angle < 0)
        angle += 360 * 16;
    while (angle > 360 * 16)
        angle -= 360 * 16;
}

//! [5]
void Changer::setXRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != xRot) {
        xRot = angle;
        emit xRotationChanged(angle);
        updateGL();
    }
}
//! [5]

void Changer::setYRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != yRot) {
        yRot = angle;
        emit yRotationChanged(angle);
        updateGL();
    }
}

void Changer::setZRotation(int angle)
{
    qNormalizeAngle(angle);
    if (angle != zRot) {
        zRot = angle;
        emit zRotationChanged(angle);
        updateGL();
    }
}

void Changer::mousePressEvent(QMouseEvent *event)
{
    lastPos = event->pos();
}
void Changer::mouseMoveEvent(QMouseEvent *event)
{
    int dx = event->x() - lastPos.x();
    int dy = event->y() - lastPos.y();

    if (event->buttons() & Qt::LeftButton) {
        setXRotation(xRot + 8 * dy);
        setYRotation(yRot + 8 * dx);
    } else if (event->buttons() & Qt::RightButton) {
        setXRotation(xRot + 8 * dy);
        setZRotation(zRot + 8 * dx);
    }
    lastPos = event->pos();
}


*/
void Changer::setSize(GLfloat a, GLfloat b, GLfloat c, GLfloat d, GLfloat e, GLfloat f)
  {

    sizing[0] = a;
    sizing[1] = b;
    sizing[2] = c;
    sizing[3] = d;
    sizing[4] = e;
    sizing[5] = f;

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
