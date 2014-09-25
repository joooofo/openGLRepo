#ifndef TRIANGLEWINDOW_H
#define TRIANGLEWINDOW_H

#include <QtGui/QOpenGLShaderProgram>
#include "openglwindow.h"
#include "changer.h"





class TriangleWindow : public OpenGLWindow
{
public:
    TriangleWindow();

    void initialize();
    void render();
    void keyPressed(QKeyEvent *k);

private:
    GLuint loadShader(GLenum type, const char *source);

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;


    //
    float m_xrot = 0;
    float m_ytrans = 1;
    float m_xtrans = 1;
    float m_yrot = 2;

    GLuint m_posAttr2;
    GLuint m_colAttr2;
    GLuint m_matrixUniform2;

    QOpenGLShaderProgram *m_program;
    QOpenGLShaderProgram *m_program2;
    int m_frame;

};


#endif // TRIANGLEWINDOW_H
