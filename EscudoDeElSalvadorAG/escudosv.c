#include <stdio.h>
#include <stdlib.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>

float radio = 2, calx, caly;

void dibujar() {
    glClear(GL_COLOR_BUFFER_BIT); //limpiamos con el nuevo color   

    //glColor3f(0.211, 0.211, 0.211);\

    //triangulo del escudo


    glColor3f(252, 227, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(200, 200); //este lo ocupamos para mandar un vertice donde tomaremos un punto 
    //base
    glVertex2f(500, 200);
    //alto
    glVertex2f(350, 500);
    glEnd();

    //blanco
    glColor3f(1, 1, 1);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(210, 205); //este lo ocupamos para mandar un vertice donde tomaremos un punto 
    //base
    glVertex2f(490, 205);
    //alto
    glVertex2f(350, 490);
    glEnd();


    //mar
    glColor3f(0, 71, 171);

    glBegin(GL_POLYGON); //dibujaremos lineas

    glVertex2i(211, 206); //abajo

    glVertex2i(489, 206); //abajo al final

    glVertex2i(447, 290); //arriba al final

    glVertex2i(253, 290); //arriba inicio

    glEnd();
    glFlush();
    //-------------------------------------------------------------------------------------------------------------

    //montanias 1

    //m5
    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(350, 262); //este lo ocupamos para mandar un vertice donde tomaremos un punto //base
    glVertex2f(450, 262); //alto
    glVertex2f(410, 315);
    glEnd();


    //m4
    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(310, 259); //este lo ocupamos para mandar un vertice donde tomaremos un punto //base
    glVertex2f(430, 259); //alto
    glVertex2f(380, 320);
    glEnd();



    //m3
    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(290, 256); //este lo ocupamos para mandar un vertice donde tomaremos un punto 50+
    //base
    glVertex2f(410, 256);
    //alto
    glVertex2f(355, 325);
    glEnd();



    //m2
    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(260, 253); //este lo ocupamos para mandar un vertice donde tomaremos un punto 50+
    //base
    glVertex2f(390, 253);
    //alto
    glVertex2f(320, 330);
    glEnd();



    //m1
    glColor3f(0, 153, 0);
    glBegin(GL_TRIANGLES); //en el begin agregamos el modo en este caso agg un primitivo llamado GL_TRIANGLES
    glVertex2f(232, 250); //este lo ocupamos para mandar un vertice donde tomaremos un punto 
    //base
    glVertex2f(370, 250);
    //alto
    glVertex2f(290, 335); //335
    glEnd();


    //-------------------------------------------------------------------------------------------------------------
    //interlineado
    glLineWidth(2);
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(210, 205);
    glVertex2f(490, 205);
    glVertex2f(490, 205);
    glVertex2f(350, 490);
    glVertex2f(210, 205);
    glVertex2f(350, 490);
    glEnd();

    glColor3f(0, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(200, 200);
    glVertex2f(500, 200);
    glVertex2f(500, 200);
    glVertex2f(350, 500);
    glVertex2f(200, 200);
    glVertex2f(350, 500);
    glEnd();

    //interlineado montanias
    glLineWidth(0.5);
    glColor3f(0, 0, 0);

    glBegin(GL_LINES);
    glVertex2f(233, 250);
    glVertex2f(370, 250);
    //linea 2
    glVertex2f(230, 250);
    glVertex2f(290, 335);
    //linea 3
    glVertex2f(370, 250);
    glVertex2f(290, 335);

    //m2
    glBegin(GL_LINES);
    glVertex2f(368, 253);
    glVertex2f(390, 253);
    //linea 2
    glVertex2f(308, 315);
    glVertex2f(320, 330);
    //linea 3
    glVertex2f(390, 253);
    glVertex2f(320, 330);
    glEnd();
    glFlush();

    //m3
    glBegin(GL_LINES);
    glVertex2f(390, 256);
    glVertex2f(410, 256);
    //linea 2
    glVertex2f(340, 310);
    glVertex2f(355, 325);
    //linea 3
    glVertex2f(410, 256);
    glVertex2f(355, 325);

    //m4
    glVertex2f(410, 259);
    glVertex2f(430, 259);
    //linea 2
    glVertex2f(365, 305);
    glVertex2f(380, 320);
    //linea 3
    glVertex2f(430, 259);
    glVertex2f(380, 320);


    //m5
    glVertex2f(430, 262);
    glVertex2f(450, 262);
    //linea 2
    glVertex2f(394, 300);
    glVertex2f(410, 315);
    //linea 3
    glVertex2f(450, 262);
    glVertex2f(410, 315);
    glEnd();

    //-------------------------------------------------------------------------------------------------------------
    //gorrito
    glColor3f(252, 227, 0);
    //PALO 
    glBegin(GL_POLYGON);

    glVertex2i(348, 380); //alto
    glVertex2i(352, 380);
    glVertex2i(352, 321); //ancho abajo
    glVertex2i(348, 317);
    glEnd();

    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    radio = 10;
    for (float j = 0; j < 9; j++) {
        for (float i = 0; i < 15; i += 0.5) {
            calx = radio * cos(i) + 350;
            caly = radio * sin(i) + 380;
            glVertex2f(calx, caly);
        }
        radio++;
    }
    radio = 15;
    glEnd();

    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);

    for (float j = 0; j < 9; j++) {
        for (float i = 0; i < 10; i += 0.5) {
            calx = radio * cos(i) + 350;
            caly = radio * sin(i) + 380;
            glVertex2f(calx, caly);
        }
        radio++;
    }

    glEnd();
    radio = 20;
    glBegin(GL_POINTS);
    glColor3f(1, 1, 1);

    for (float j = 0; j < 9; j++) {
        for (float i = 0; i < 15; i += 0.5) {
            calx = radio * cos(i) + 350;
            caly = radio * sin(i) + 380;
            glVertex2f(calx, caly);
        }
        radio++;
    }
    glEnd();


    //relleno
    radio = 25;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);

    for (float j = 0; j < 9; j++) {
        for (float i = 6; i > 3.5; i -= 0.1) {
            calx = radio * cos(i) + 350;
            caly = radio * sin(i) + 380;
            glVertex2f(calx, caly);
        }
        radio++;
    }
    glEnd();

    radio = 35;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);

    for (float j = 0; j < 15; j++) {
        for (float i = 0; i < 25; i += 1) {
            calx = radio * cos(i) + 350;
            caly = radio * sin(i) + 380;
            glVertex2f(calx, caly);
        }
        radio++;
    }
    glEnd();

    radio = 35;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);

    for (float j = 0; j < 9; j++) {
        for (float i = 6; i > 3.5; i -= 0.1) {
            calx = radio * cos(i) + 350;
            caly = radio * sin(i) + 380;
            glVertex2f(calx, caly);
        }
        radio++;
    }
    glEnd();

    //afuera
    radio = 230;
    glBegin(GL_POINTS);
    glPointSize(5);
    glColor3f(0, 153, 0);

    for (float i = 6.92; i > 2.5; i -= 0.001) {
        calx = radio * cos(i) + 350;
        caly = radio * sin(i) + 319;
        glVertex2f(calx, caly);
    }
    glEnd();

    //-------------------------------------------------------------------------------------------------------------hojas 1
    //Hoja 1 izquierda
    //arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(320, 90); //00
    glVertex2f(300, 115); //01 ancho abajo
    glVertex2f(280, 140); //p alto+40
    glVertex2f(310, 120); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(320, 90);
    glVertex2f(300, 115);
    glVertex2f(300, 115);
    glVertex2f(280, 140);
    glVertex2f(280, 140);
    glVertex2f(310, 120);
    glVertex2f(310, 120);
    glVertex2f(320, 90);
    glEnd();


    //litle arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(300, 115); //00
    glVertex2f(289, 129); //01 ancho abajo
    glVertex2f(270, 130); //p alto+40
    glVertex2f(285, 115); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(289, 129);
    glVertex2f(270, 129); //abajo completo
    glVertex2f(270, 130);
    glVertex2f(285, 115);
    glEnd();


    //medio arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(320, 90); //00
    glVertex2f(300, 115); //01 ancho arr
    glVertex2f(270, 115); //p alto+40
    glVertex2f(290, 95); //ancho ab  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(320, 90);
    glVertex2f(300, 115); //abajo completo
    glVertex2f(300, 115);
    glVertex2f(270, 115);
    glVertex2f(270, 115);
    glVertex2f(290, 95);
    glVertex2f(290, 95);
    glVertex2f(320, 90);
    glEnd();
    //-------------------------------------------------------------------------------------------------------------  

    //abajo 
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(320, 90); //00
    glVertex2f(300, 80); //01 ancho arriba
    glVertex2f(260, 65); //p alto+40
    glVertex2f(300, 70); //  ancho abajo
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(320, 90);
    glVertex2f(300, 80);
    glVertex2f(300, 80);
    glVertex2f(260, 65);
    glVertex2f(260, 65);
    glVertex2f(300, 70);
    glVertex2f(300, 70);
    glVertex2f(320, 90);
    glEnd();

    //litle
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(300, 80); //00
    glVertex2f(280, 73); //01 ancho abajo
    glVertex2f(260, 80); //p alto+40
    glVertex2f(280, 90); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(280, 73);
    glVertex2f(260, 80); //abajo completo
    glVertex2f(260, 80);
    glVertex2f(280, 90);
    glEnd();




    //medio ab
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(320, 90); //00
    glVertex2f(300, 80); //01 ancho ab
    glVertex2f(260, 95); //p alto+40
    glVertex2f(290, 95); //ancho arr 
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(320, 90);
    glVertex2f(300, 80); //abajo completo
    glVertex2f(300, 80);
    glVertex2f(260, 95);
    glVertex2f(260, 95);
    glVertex2f(290, 95);
    glVertex2f(290, 95);
    glVertex2f(320, 90);
    glEnd();


    //-------------------------------------------------------------------------------------------------------------HOJAS 2

    //Hoja 2 izquierda
    //arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(260, 108); //00
    glVertex2f(250, 125); //01 ancho abajo
    glVertex2f(220, 165); //p alto
    glVertex2f(250, 140); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(260, 108);
    glVertex2f(250, 125); //abajo completo
    glVertex2f(250, 125);
    glVertex2f(220, 165);
    glVertex2f(220, 165);
    glVertex2f(250, 140);
    glVertex2f(250, 140);
    glVertex2f(260, 108);
    glEnd();
    //termina

    //medio arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(260, 108); //00
    glVertex2f(240, 116); //01 ancho abajo
    glVertex2f(210, 150); //p alto
    glVertex2f(240, 138); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(260, 108);
    glVertex2f(240, 116); //abajo completo
    glVertex2f(240, 116);
    glVertex2f(210, 150);
    glVertex2f(210, 150);
    glVertex2f(240, 138);
    glVertex2f(240, 138);
    glVertex2f(260, 108);
    glEnd();
    //termina


    //medio abajo    
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(260, 108); //00
    glVertex2f(235, 100); //01 ancho ab
    glVertex2f(200, 110); //p alto
    glVertex2f(240, 116); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(260, 108);
    glVertex2f(235, 100); //abajo completo
    glVertex2f(235, 100);
    glVertex2f(200, 110);
    glVertex2f(200, 110);
    glVertex2f(240, 116);
    glVertex2f(240, 116);
    glVertex2f(260, 108);
    glEnd();
    //termina

    //litle
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(240, 116); //00
    glVertex2f(220, 112); //01 ancho ab
    glVertex2f(200, 125); //p alto
    glVertex2f(230, 128); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(240, 116);
    glVertex2f(220, 112); //abajo completo
    glVertex2f(220, 112);
    glVertex2f(200, 125);
    glVertex2f(200, 125);
    glVertex2f(230, 128);
    glVertex2f(230, 128);
    glVertex2f(240, 116);
    glEnd();
    //termina little


    //Hoja 2 izquierda
    //abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(260, 108); //00
    glVertex2f(235, 95); //01 ancho ab
    glVertex2f(200, 100); //p alto
    glVertex2f(210, 100); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(260, 108);
    glVertex2f(235, 95); //abajo completo
    glVertex2f(235, 95);
    glVertex2f(200, 100);
    glVertex2f(200, 100);
    glVertex2f(210, 100);
    glVertex2f(210, 100);
    glVertex2f(260, 108);
    glEnd();

    //-------------------------------------------------------------------------------------------------------------HOJAS 3
    //Hoja 3 izquierda
    //arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(195, 147); //00
    glVertex2f(190, 180); //01 ancho abajo
    glVertex2f(180, 220); //p alto
    glVertex2f(200, 190); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(195, 147);
    glVertex2f(190, 180); //abajo completo
    glVertex2f(190, 180);
    glVertex2f(180, 220);
    glVertex2f(180, 220);
    glVertex2f(200, 190);
    glVertex2f(200, 190);
    glVertex2f(195, 147);
    glEnd();
    //termina

    //medio arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(195, 147); //00
    glVertex2f(170, 177); //01 ancho abajo
    glVertex2f(170, 210); //p alto
    glVertex2f(188, 185); //ancho arriba  
    glEnd();
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(195, 147);
    glVertex2f(170, 177); //abajo completo
    glVertex2f(170, 177);
    glVertex2f(170, 210);
    glVertex2f(170, 210);
    glVertex2f(188, 185);
    glVertex2f(188, 185);
    glVertex2f(195, 147);
    glEnd();
    //termina

    //medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(195, 147); //00
    glVertex2f(170, 177); //01 ancho arr
    glVertex2f(140, 190); //p alto
    glVertex2f(160, 160); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(195, 147);
    glVertex2f(170, 177); //abajo completo
    glVertex2f(170, 177);
    glVertex2f(140, 190);
    glVertex2f(140, 190);
    glVertex2f(160, 160);
    glVertex2f(160, 160);
    glVertex2f(195, 147);
    glEnd(); //termina

    //abajo 
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(195, 147); //00
    glVertex2f(170, 155); //01 ancho arr
    glVertex2f(125, 170); //p alto
    glVertex2f(160, 145); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(195, 147);
    glVertex2f(170, 155); //abajo completo
    glVertex2f(170, 155);
    glVertex2f(125, 170);
    glVertex2f(125, 170);
    glVertex2f(160, 145);
    glVertex2f(160, 145);
    glVertex2f(195, 147);
    glEnd(); //termina
    
    //-------------------------------------------------------------------------------------------------------------HOJAS 4
    //Hoja 4 izquierda
    //arriba
     glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 205); //00
    glVertex2f(165, 240); //01 ancho arr
    glVertex2f(150, 280); //p alto
    glVertex2f(150, 250); //ancho ab
    glEnd();
    
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 205);
    glVertex2f(165, 240); //abajo completo
    glVertex2f(165, 240);
    glVertex2f(150, 280);
    glVertex2f(150, 280);
    glVertex2f(150, 250);
    glVertex2f(150, 250);
    glVertex2f(150, 205);
    glEnd(); //termina
    
    //medio arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 205); //00
    glVertex2f(150, 250); //01 ancho arr
    glVertex2f(135, 270); //p alto
    glVertex2f(133, 243); //ancho ab
    glEnd();
    
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 205);
    glVertex2f(150, 250); //abajo completo
    glVertex2f(150, 250);
    glVertex2f(135, 270);
    glVertex2f(135, 270);
    glVertex2f(133, 243);
    glVertex2f(133, 243);
    glVertex2f(150, 205);
    glEnd(); //termina
    
     //medio abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 205); //00
    glVertex2f(133, 243); //01 ancho arr
    glVertex2f(115, 260); //p alto
    glVertex2f(120, 232); //ancho ab
    glEnd();
    
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 205);
    glVertex2f(133, 243); //abajo completo
    glVertex2f(133, 243);
    glVertex2f(115, 260);
    glVertex2f(115, 260);
    glVertex2f(120, 232);
    glVertex2f(120, 232);
    glVertex2f(150, 205);
    glEnd(); //termina
    
    //abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 205); //00
    glVertex2f(125, 225); //01 ancho arr
    glVertex2f(90, 260); //p alto
    glVertex2f(110, 220); //ancho ab
    glEnd();
    
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 205);
    glVertex2f(125, 226); //abajo completo
    glVertex2f(125, 226);
    glVertex2f(90, 260);
    glVertex2f(90, 260);
    glVertex2f(110, 220);
    glVertex2f(110, 220);
    glVertex2f(150, 205);
    glEnd(); //termina
    
     //-------------------------------------------------------------------------------------------------------------HOJAS 5
    //Hoja 5 izquierda
    //ab
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(122, 285); //00
    glVertex2f(145, 305); //01 ancho arr
    glVertex2f(150, 350); //p alto
    glVertex2f(135, 310); //ancho ab
    glEnd();
    
     glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(122, 285);
    glVertex2f(145, 305); //abajo completo
    glVertex2f(145, 305);
    glVertex2f(150, 350);
    glVertex2f(150, 350);
    glVertex2f(135, 310);
    glVertex2f(135, 310);
    glVertex2f(122, 285);
    glEnd(); //termina
    
      //arriba medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(122, 285); //00
    glVertex2f(140, 320); //01 ancho arr
    glVertex2f(135, 355); //p alto
    glVertex2f(120, 320); //ancho ab
    glEnd();
    
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(122, 285);
    glVertex2f(140, 320); //abajo completo
    glVertex2f(140, 320);
    glVertex2f(135, 355);
    glVertex2f(135, 355);
    glVertex2f(120, 320);
    glVertex2f(120, 320);
    glVertex2f(122, 285);
    glEnd(); //termina
    
      //abajo medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(122, 285); //00
    glVertex2f(120, 320); //01 ancho arr
    glVertex2f(110, 355); //p alto
    glVertex2f(100, 315); //ancho ab
    glEnd();
    
     glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(122, 285);
    glVertex2f(120, 320); 
    glVertex2f(120, 320);
    glVertex2f(110, 355);
    glVertex2f(110, 355);
    glVertex2f(100, 315);
    glVertex2f(100, 315);
    glVertex2f(122, 285);
    glEnd(); //termina
    
    //arr
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(122, 285); //00
    glVertex2f(105, 315); //01 ancho ab
    glVertex2f(90, 350); //p alto
    glVertex2f(100, 300); //ancho arr
    glEnd();
    
     glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(122, 285);
    glVertex2f(105, 315); 
    glVertex2f(105, 315);
    glVertex2f(90, 350);
    glVertex2f(90, 350);
    glVertex2f(100, 300);
    glVertex2f(100, 300);
    glVertex2f(122, 285);
    glEnd(); //termina
    
      //-------------------------------------------------------------------------------------------------------------HOJAS 6
    //Hoja 6 izquierda
    //arriba
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(125, 365); //00
    glVertex2f(145, 380); //01 ancho ab
    glVertex2f(143, 420); //p alto
    glVertex2f(120, 390); //ancho arr
    glEnd();\

         glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(125, 365);
    glVertex2f(145, 380); 
    glVertex2f(145, 380);
    glVertex2f(143, 420);
    glVertex2f(143, 420);
    glVertex2f(120, 390);
    glVertex2f(120, 390);
    glVertex2f(125, 365);
    glEnd(); //termina
    
   
     //izquierda
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(125, 365); //00
    glVertex2f(110, 385); //01 ancho ab
    glVertex2f(120, 425); //p alto
    glVertex2f(120, 390); //ancho arr
    glEnd();
    
           glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(125, 365);
    glVertex2f(110, 385); 
    glVertex2f(110, 385);
    glVertex2f(120, 425);
    glVertex2f(120, 425);
    glVertex2f(120, 390);
    glVertex2f(120, 390);
    glVertex2f(125, 365);
    glEnd(); //termina
    
      //derecha
    
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(125, 365); //00
    glVertex2f(140, 380); //01 ancho ab
    glVertex2f(160, 410); //p alto
    glVertex2f(150, 375); //ancho arr
    glEnd();
    
         glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(125, 365);
    glVertex2f(140, 380); 
    glVertex2f(140, 380);
    glVertex2f(160, 410);
    glVertex2f(160, 410);
    glVertex2f(150, 375);
    glVertex2f(150, 375);
    glVertex2f(125, 365);
    glEnd(); //termina
    


    //-------------------------------------------------------------------------------------------------------------DERECHA




    //arriba derecha
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(380, 90); //00
    glVertex2f(400, 115); //01 ancho abajo
    glVertex2f(420, 140); //p alto+40
    glVertex2f(390, 120); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(380, 90);
    glVertex2f(400, 115); //abajo completo
    glVertex2f(400, 115);
    glVertex2f(420, 140);
    glVertex2f(420, 140);
    glVertex2f(390, 120);
    glVertex2f(390, 120);
    glVertex2f(380, 90);

    glVertex2f(350, 350);
    glVertex2f(350, 0);
    glEnd();


    //litle arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(400, 115); //00
    glVertex2f(411, 129); //01 ancho abajo
    glVertex2f(430, 130); //p alto+40
    glVertex2f(415, 115); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(411, 129);
    glVertex2f(430, 129); //abajo completo
    glVertex2f(430, 130);
    glVertex2f(415, 115);
    glEnd();


    //medio arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(380, 90); //00
    glVertex2f(400, 115); //01 ancho arr
    glVertex2f(430, 115); //p alto+40
    glVertex2f(410, 95); //ancho ab  
    glEnd();


    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(380, 90);
    glVertex2f(400, 115); //abajo completo
    glVertex2f(400, 115);
    glVertex2f(430, 115);
    glVertex2f(430, 115);
    glVertex2f(410, 95);
    glVertex2f(410, 95);
    glVertex2f(380, 90);
    glEnd();

    //-------------------------------------------------------------------------------------------------------------
    //abajo arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(380, 90); //00
    glVertex2f(400, 80); //01 ancho arriba
    glVertex2f(440, 65); //p alto+40
    glVertex2f(400, 70); //  ancho abajo
    glEnd();



    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(380, 90);
    glVertex2f(400, 80);
    glVertex2f(400, 80);
    glVertex2f(445, 65);
    glVertex2f(445, 65);
    glVertex2f(400, 70);
    glVertex2f(400, 70);
    glVertex2f(380, 90);
    glEnd();

    //litle
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(400, 80); //00
    glVertex2f(420, 73); //01 ancho abajo
    glVertex2f(440, 80); //p alto+40
    glVertex2f(420, 90); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(420, 73);
    glVertex2f(440, 80); //abajo completo
    glVertex2f(440, 80);
    glVertex2f(420, 90);
    glEnd();

    //medio ab
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(380, 90); //00
    glVertex2f(400, 80); //01 ancho ab
    glVertex2f(440, 95); //p alto+40
    glVertex2f(410, 95); //ancho arr 
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(380, 90);
    glVertex2f(400, 80); //abajo completo
    glVertex2f(400, 80);
    glVertex2f(440, 95);
    glVertex2f(440, 95);
    glVertex2f(410, 95);
    glVertex2f(410, 95);
    glVertex2f(380, 90);
    glEnd();




    //-------------------------------------------------------------------------------------------------------------HOJAS 2

    //Hoja 2 derecha
    //arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(440, 108); //00
    glVertex2f(450, 125); //01 ancho abajo
    glVertex2f(480, 165); //p alto
    glVertex2f(450, 140); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(440, 108);
    glVertex2f(450, 125); //abajo completo
    glVertex2f(450, 125);
    glVertex2f(480, 165);
    glVertex2f(480, 165);
    glVertex2f(450, 140);
    glVertex2f(450, 140);
    glVertex2f(440, 108);
    glEnd();


    //medio arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(440, 108); //00
    glVertex2f(460, 116); //01 ancho abajo
    glVertex2f(490, 150); //p alto
    glVertex2f(460, 138); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(440, 108);
    glVertex2f(460, 116); //abajo completo
    glVertex2f(460, 116);
    glVertex2f(490, 150);
    glVertex2f(490, 150);
    glVertex2f(460, 138);
    glVertex2f(460, 138);
    glVertex2f(440, 108);
    glEnd();
    //termina

    //medio abajo    
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(440, 108); //00
    glVertex2f(465, 100); //01 ancho ab
    glVertex2f(500, 110); //p alto
    glVertex2f(460, 116); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(440, 108);
    glVertex2f(465, 100); //abajo completo
    glVertex2f(465, 100);
    glVertex2f(500, 110);
    glVertex2f(500, 110);
    glVertex2f(460, 116);
    glVertex2f(460, 116);
    glVertex2f(440, 108);
    glEnd();
    //termina

    //litle
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(460, 116); //00
    glVertex2f(480, 112); //01 ancho ab
    glVertex2f(500, 125); //p alto
    glVertex2f(470, 128); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(460, 116);
    glVertex2f(480, 112); //abajo completo
    glVertex2f(480, 112);
    glVertex2f(500, 125);
    glVertex2f(500, 125);
    glVertex2f(470, 128);
    glVertex2f(470, 128);
    glVertex2f(460, 116);
    glEnd();
    //termina little

    //Hoja 2 derecha
    //abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(440, 108); //00
    glVertex2f(465, 95); //01 ancho ab
    glVertex2f(500, 100); //p alto
    glVertex2f(490, 100); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(440, 108);
    glVertex2f(465, 95); //abajo completo
    glVertex2f(465, 95);
    glVertex2f(500, 100);
    glVertex2f(500, 100);
    glVertex2f(490, 100);
    glVertex2f(490, 100);
    glVertex2f(440, 108);
    glEnd();

    //-------------------------------------------------------------------------------------------------------------HOJAS 3
    //Hoja 3 derecha
    //arriba

    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(505, 147); //00
    glVertex2f(510, 180); //01 ancho abajo
    glVertex2f(520, 220); //p alto
    glVertex2f(500, 190); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(505, 147);
    glVertex2f(510, 180); //abajo completo
    glVertex2f(510, 180);
    glVertex2f(520, 220);
    glVertex2f(520, 220);
    glVertex2f(500, 190);
    glVertex2f(500, 190);
    glVertex2f(505, 147);
    glEnd(); //termina


    //medio arr
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(505, 147); //00
    glVertex2f(530, 177); //01 ancho abajo
    glVertex2f(530, 210); //p alto
    glVertex2f(512, 185); //ancho arriba  
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(505, 147);
    glVertex2f(530, 177); //abajo completo
    glVertex2f(530, 177);
    glVertex2f(530, 210);
    glVertex2f(530, 210);
    glVertex2f(512, 185);
    glVertex2f(512, 185);
    glVertex2f(505, 147);
    glEnd(); //termina


    //medio abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(505, 147); //00
    glVertex2f(530, 177); //01 ancho arr
    glVertex2f(560, 190); //p alto
    glVertex2f(540, 160); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(505, 147);
    glVertex2f(530, 177); //abajo completo
    glVertex2f(530, 177);
    glVertex2f(560, 190);
    glVertex2f(560, 190);
    glVertex2f(540, 160);
    glVertex2f(540, 160);
    glVertex2f(505, 147);
    glEnd(); //termina


    //abajo 
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(505, 147); //00
    glVertex2f(530, 155); //01 ancho arr
    glVertex2f(575, 175); //p alto
    glVertex2f(540, 145); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(505, 147);
    glVertex2f(530, 155); //abajo completo
    glVertex2f(530, 155);
    glVertex2f(575, 175);
    glVertex2f(575, 175);
    glVertex2f(540, 145);
    glVertex2f(540, 145);
    glVertex2f(505, 147);
    glEnd(); //termina



    //-------------------------------------------------------------------------------------------------------------HOJAS 4
    //Hoja 4 derecha
    //arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 205); //00
    glVertex2f(535, 240); //01 ancho arr
    glVertex2f(550, 280); //p alto
    glVertex2f(550, 250); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 205);
    glVertex2f(535, 240); //abajo completo
    glVertex2f(535, 240);
    glVertex2f(550, 280);
    glVertex2f(550, 280);
    glVertex2f(550, 250);
    glVertex2f(550, 250);
    glVertex2f(550, 205);
    glEnd(); //termina


    //medio arriba
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 205); //00
    glVertex2f(550, 250); //01 ancho arr
    glVertex2f(565, 270); //p alto
    glVertex2f(567, 243); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 205);
    glVertex2f(550, 250); //abajo completo
    glVertex2f(550, 250);
    glVertex2f(565, 270);
    glVertex2f(565, 270);
    glVertex2f(567, 243);
    glVertex2f(567, 243);
    glVertex2f(550, 205);
    glEnd(); //termina

     //medio abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 205); //00
    glVertex2f(567, 243); //01 ancho arr
    glVertex2f(585, 260); //p alto
    glVertex2f(580, 232); //ancho ab
    glEnd();
    
        glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 205);
    glVertex2f(567, 243); //abajo completo
    glVertex2f(567, 243);
    glVertex2f(585, 260);
    glVertex2f(585, 260);
    glVertex2f(580, 232);
    glVertex2f(580, 232);
    glVertex2f(550, 205);
    glEnd(); //termina


    //abajo
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 205); //00
    glVertex2f(575, 225); //01 ancho arr
    glVertex2f(610, 260); //p alto
    glVertex2f(590, 220); //ancho ab
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 205);
    glVertex2f(575, 226); //abajo completo
    glVertex2f(575, 226);
    glVertex2f(610, 260);
    glVertex2f(610, 260);
    glVertex2f(590, 220);
    glVertex2f(590, 220);
    glVertex2f(550, 205);
    glEnd(); //termina

    
    //-------------------------------------------------------------------------------------------------------------HOJAS 6
    //Hoja 6 derecha
    //arriba
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(578, 285); //00
    glVertex2f(555, 305); //01 ancho arr
    glVertex2f(550, 350); //p alto
    glVertex2f(565, 310); //ancho ab
    glEnd();
    
     glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(578, 285);
    glVertex2f(555, 305); //abajo completo
    glVertex2f(555, 305);
    glVertex2f(550, 350);
    glVertex2f(550, 350);
    glVertex2f(565, 310);
    glVertex2f(565, 310);
    glVertex2f(578, 285);
    glEnd(); //termina

    
      //arriba medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(578, 285); //00
    glVertex2f(560, 320); //01 ancho arr
    glVertex2f(565, 355); //p alto
    glVertex2f(580, 320); //ancho ab
    glEnd();
    
     glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(578, 285);
    glVertex2f(560, 320); //abajo completo
    glVertex2f(560, 320);
    glVertex2f(565, 355);
    glVertex2f(565, 355);
    glVertex2f(580, 320);
    glVertex2f(580, 320);
    glVertex2f(578, 285);
    glEnd(); //termina
    
       //abajo medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(578, 285); //00
    glVertex2f(580, 320); //01 ancho arr
    glVertex2f(590, 355); //p alto
    glVertex2f(600, 315); //ancho ab
    glEnd();
    
         glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(578, 285);
    glVertex2f(580, 320); 
    glVertex2f(580, 320);
    glVertex2f(590, 355);
    glVertex2f(590, 355);
    glVertex2f(600, 315);
    glVertex2f(600, 315);
    glVertex2f(578, 285);
    glEnd(); //termina
    
     //abajo
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(578, 285); //00
    glVertex2f(595, 315); //01 ancho arr
    glVertex2f(610, 350); //p alto
    glVertex2f(600, 300); //ancho ab
    glEnd();
    
     glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(578, 285);
    glVertex2f(595, 315); 
    glVertex2f(595, 315);
    glVertex2f(610, 350);
    glVertex2f(610, 350);
    glVertex2f(600, 300);
    glVertex2f(600, 300);
    glVertex2f(578, 285);
    glEnd(); //termina
    
       //-------------------------------------------------------------------------------------------------------------HOJAS 5
    //Hoja 5 derecha
    //arriba
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(575, 365); //00
    glVertex2f(555, 380); //01 ancho ab
    glVertex2f(557, 420); //p alto
    glVertex2f(580, 390); //ancho arr
    glEnd();\

         glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(575, 365);
    glVertex2f(555, 380); 
    glVertex2f(555, 380);
    glVertex2f(557, 420);
    glVertex2f(557, 420);
    glVertex2f(580, 390);
    glVertex2f(580, 390);
    glVertex2f(575, 365);
    glEnd(); //termina
    
    
     //derecha
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(575, 365); //00
    glVertex2f(590, 385); //01 ancho ab
    glVertex2f(580, 425); //p alto
    glVertex2f(580, 390); //ancho arr
    glEnd();
    
           glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(575, 365);
    glVertex2f(590, 385); 
    glVertex2f(590, 385);
    glVertex2f(580, 425);
    glVertex2f(580, 425);
    glVertex2f(580, 390);
    glVertex2f(580, 390);
    glVertex2f(575, 365);
    glEnd(); //termina
    
    
      //azquierda
        glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(575, 365); //00
    glVertex2f(560, 380); //01 ancho ab
    glVertex2f(540, 410); //p alto
    glVertex2f(550, 375); //ancho arr
    glEnd();
    
         glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(575, 365);
    glVertex2f(560, 380); 
    glVertex2f(560, 380);
    glVertex2f(540, 410);
    glVertex2f(540, 410);
    glVertex2f(550, 375);
    glVertex2f(550, 375);
    glVertex2f(575, 365);
    glEnd(); //termina
    

    glFlush();
    glutSwapBuffers();
}
