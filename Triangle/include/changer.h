#ifndef CHANGER_H
#define CHANGER_H

#include <QtGui/QOpenGLShaderProgram>

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



   GLfloat sizing[6] = {
      0.0f, 0.507f,
      -0.3f, -0.3f,
       0.3f, -0.3f
   };

   GLfloat coloring[9] = {

           1.0f, 0.0f, 0.0f,
           0.0f, 1.0f, 0.0f,
           0.0f, 0.0f, 1.0f

   };

private:



};

#endif // CHANGER_H
