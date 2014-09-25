#ifndef CHANGER_H
#define CHANGER_H

#include <QtGui/QOpenGLShaderProgram>
#include <QMouseEvent>


class Changer : public OpenGLWindow

{
public:
    Changer();
    void color();

   // GLfloat size(GLfloat vertices[]);

   void setSize(GLfloat a, GLfloat b, GLfloat c, GLfloat d, GLfloat e, GLfloat f);
   void setColor(GLfloat a, GLfloat b, GLfloat c, GLfloat d, GLfloat e, GLfloat f, GLfloat g, GLfloat h, GLfloat i );
   GLfloat getSize();
   void makeTriangle();
   GLfloat getColor();


 // currently used
   GLfloat sizing[6] = {
      0.0f, 0.507f,
      -0.3f, -0.3f,
       0.3f, -0.3f
   };
 // currently used
   GLfloat coloring[9] = {

           1.0f, 0.0f, 0.0f,
           0.0f, 1.0f, 0.0f,
           0.0f, 0.0f, 1.0f


};
   // TEST
   /*
public slots:
    void setXRotation(int angle);
    void setYRotation(int angle);
    void setZRotation(int angle);

signals:
    void xRotationChanged(int angle);
    void yRotationChanged(int angle);
    void zRotationChanged(int angle);

protected:
   void mousePressEvent(QMouseEvent *event);
   void mouseMoveEvent(QMouseEvent *event);
private:
   int xRot;
   int yRot;
   int zRot;
QPoint lastPos;
*/

};

#endif // CHANGER_H
