#ifndef SHADERS_H
#define SHADERS_H


static const char *vertexShaderSource =
    "attribute highp vec4 posAttr;\n"
    "attribute lowp vec4 colAttr;\n"
    "varying lowp vec4 col;\n"
    "uniform highp mat4 matrix;\n"
    "void main() {\n"
    "   col = colAttr;\n"
    "   gl_Position = matrix * posAttr;\n"
    "}\n";

static const char *fragmentShaderSource =
    "varying lowp vec4 col;\n"
    "void main() {\n"
    "   gl_FragColor = col;\n"
    "}\n";



static const char *vertexShaderSource2 =
    "attribute highp vec4 posAttr2;\n"
    "attribute lowp vec4 colAttr2;\n"
    "varying lowp vec4 col;\n"
    "uniform highp mat4 matrix2;\n"
    "void main() {\n"
    "   col = colAttr2;\n"
    "   gl_Position = matrix2 * posAttr2;\n"
    "}\n";

static const char *fragmentShaderSource2 =
    "varying lowp vec4 col;\n"
    "void main() {\n"
    "   gl_FragColor = col;\n"
    "}\n";


#endif // SHADERS_H
