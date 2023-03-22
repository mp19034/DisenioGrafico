#include <stdio.h>
#include <stdlib.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>

#include "escudosv.h"

int main(int argc, char** argv) {

    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutInitWindowPosition(50, 50);

    glutInitWindowSize(700, 700);

    glutCreateWindow("Hola mundo 2.0");

    glClearColor(1, 1, 1, 1); //color al limpiar buffer

    glMatrixMode(GL_PROJECTION);

    gluOrtho2D(0, 700, 0, 700);


    glutDisplayFunc(dibujar);
    
/*
    glutMouseFunc(click);
*/


    glutMainLoop();

    return (EXIT_SUCCESS);
}

