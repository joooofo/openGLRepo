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

private:
    GLuint loadShader(GLenum type, const char *source);

    GLuint m_posAttr;
    GLuint m_colAttr;
    GLuint m_matrixUniform;

    // std::vector<std::vector<GLuint> > m_matrixUniform;
    //Changer *m_Changer;

    GLuint m_posAttr2;
    GLuint m_colAttr2;
    GLuint m_matrixUniform2;

    QOpenGLShaderProgram *m_program;
    int m_frame;

};


#endif // TRIANGLEWINDOW_H
