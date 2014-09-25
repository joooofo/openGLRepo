

#include "include/trianglewindow.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QMatrix4x4>
#include <QtGui/QOpenGLShaderProgram>
#include <QtGui/QScreen>

#include "shaders.h"


#include <QtCore/qmath.h>

// KEYBOARD
#include "QKeyEvent"



TriangleWindow::TriangleWindow()

    : m_frame(0)


{

}

GLuint TriangleWindow::loadShader(GLenum type, const char *source)
{
    GLuint shader = glCreateShader(type);
    glShaderSource(shader, 1, &source, 0);
    glCompileShader(shader);
    return shader;
}

void TriangleWindow::initialize()
{
    m_program = new QOpenGLShaderProgram(this);
    m_program2 = new QOpenGLShaderProgram(this);


    /*
    for(int i = 1; i < 2; i++)
   {
  */
    m_program->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource);
    m_program->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource);
    m_program->link();

    m_posAttr = m_program->attributeLocation("posAttr");
    m_colAttr = m_program->attributeLocation("colAttr");

    m_matrixUniform = m_program->uniformLocation("matrix");

    m_program2->addShaderFromSourceCode(QOpenGLShader::Vertex, vertexShaderSource2);
    m_program2->addShaderFromSourceCode(QOpenGLShader::Fragment, fragmentShaderSource2);
    m_program2->link();

    m_posAttr2 = m_program2->attributeLocation("posAttr2");
    m_colAttr2 = m_program2->attributeLocation("colAttr2");

    m_matrixUniform2 = m_program2->uniformLocation("matrix2");


}

void TriangleWindow::render()
{
    const qreal retinaScale = devicePixelRatio();
    glViewport(0, 0, width() * retinaScale, height() * retinaScale);

    glClear(GL_COLOR_BUFFER_BIT);
   Changer *changer = new Changer;

for (int i = 0; i < 2; i++)
{

    for (int y = 0; y < 2; y++)
    {

   // glemte av å legge denne innenfor for løkken, og da ble det kun 1 kvit trekant //
   m_program->bind();
    QMatrix4x4 matrix;
    //perspective
    matrix.perspective(100, 4.0/3.0-y, 0.1, 100.0);
    // Translation
   // matrix.translate(i-0.5, y-0.5, -2);
      matrix.translate(i-0.5, y-0.5, -2);
    // Rotation
      matrix.rotate(100.0f * m_frame / screen()->refreshRate(), 0, 1, 0);

    m_program->setUniformValue(m_matrixUniform, matrix);

    glVertexAttribPointer(m_posAttr, 2, GL_FLOAT, GL_FALSE, 0, changer->sizing);
    glVertexAttribPointer(m_colAttr, 3, GL_FLOAT, GL_FALSE, 0, changer->coloring);

    glEnableVertexAttribArray(0);
    glEnableVertexAttribArray(1);

    glDrawArrays(GL_TRIANGLES, 0, 3);

    glDisableVertexAttribArray(1);
    glDisableVertexAttribArray(0);

    m_program2->bind();
     QMatrix4x4 matrix2;
     //perspective
     matrix2.perspective(100, 4.0/3.0-y, 0.1, 100.0);
     // Translation
       matrix2.translate(i-0.5+m_xtrans, y-0.5+m_ytrans, -2);
     // Rotation
       matrix2.rotate(100.0f * m_frame / screen()->refreshRate(), 0, 1, 0);
     m_program2->setUniformValue(m_matrixUniform, matrix2);

     glVertexAttribPointer(m_posAttr2, 2, GL_FLOAT, GL_FALSE, 0, changer->sizing);
     glVertexAttribPointer(m_colAttr2, 3, GL_FLOAT, GL_FALSE, 0, changer->coloring);

     glEnableVertexAttribArray(0);
     glEnableVertexAttribArray(1);

     glDrawArrays(GL_TRIANGLES, 0, 3);

     glDisableVertexAttribArray(1);
     glDisableVertexAttribArray(0);

    m_program2->release();

    ++m_frame;
}
}
}

void TriangleWindow::keyPressed(QKeyEvent *e)
{
 if (e->key()==Qt::Key_W)
 {
     m_ytrans+=2;
 }
  if(e->key()==Qt::Key_S){
     m_ytrans--;
  }
 }



