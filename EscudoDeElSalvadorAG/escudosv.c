#include <stdio.h>
#include <stdlib.h>
#include<GL/glu.h>
#include<GL/gl.h>
#include<GL/glut.h>
#include<math.h>

float radio = 2, calx, caly;

void dibujar() {
    glClear(GL_COLOR_BUFFER_BIT); //limpiamos con el nuevo color   

 

    //bandera
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, 0); //00
    glVertex2f(0, 55); //01 ancho abajo
    glVertex2f(700, 55); //p alto+40
    glVertex2f(700, 0); //ancho arriba  
    glEnd();
    
     glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(0, 600); //00
    glVertex2f(0, 700); //01 ancho abajo
    glVertex2f(700, 700); //p alto+40
    glVertex2f(700, 600); //ancho arriba  
    glEnd();

    
    
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
    
    
    //acoiris
    
    glColor3f(1, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(362, 464);
    glVertex2f(350, 468);
    glVertex2f(338, 464);
    glVertex2f(333, 459);
    glVertex2f(367, 459);
    glEnd();
    
    
    
     glLineWidth(2);
    glColor3f(1, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(365, 460);
    glVertex2f(350, 464);
    glVertex2f(335, 460);
    glVertex2f(333, 455);
    glVertex2f(367, 455);
    glEnd();
    
     
    glColor3f(1, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(366, 456);
    glVertex2f(350, 460);
    glVertex2f(336, 456);
    glVertex2f(331, 451);
    glVertex2f(367, 451);
    glEnd();
    
     glColor3f(0, 1, 0);
    glBegin(GL_POLYGON);
    glVertex2f(367, 452);
    glVertex2f(350, 456);
    glVertex2f(333, 452);
    glVertex2f(328, 447);
    glVertex2f(371, 447);
    glEnd();
    
     glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(370, 448);
    glVertex2f(350, 452);
    glVertex2f(332, 448);
    glVertex2f(325, 443);
    glVertex2f(373, 443);
    glEnd();
    
     glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(367, 444);
    glVertex2f(350, 448);
    glVertex2f(328, 442);
    glVertex2f(322, 439);
    glVertex2f(370, 439);
    glEnd();
    


    //mar
    glColor3f(0, 0, 255);

    glBegin(GL_POLYGON); //dibujaremos lineas

    glVertex2i(211, 206); //abajo

    glVertex2i(489, 206); //abajo al final

    glVertex2i(447, 290); //arriba al final

    glVertex2i(253, 290); //arriba inicio

    glEnd();
    glFlush();
    
       glLineWidth(0.5);
      glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex2f(235, 215);
    glVertex2f(460, 215);
    glColor3f(0, 0, 0);
    glVertex2f(245, 225);
    glVertex2f(450, 225);
     glColor3f(1, 1, 1);
    glVertex2f(255, 235);
    glVertex2f(440, 235);
     glColor3f(1, 1, 1);
    glVertex2f(275, 245);
    glVertex2f(420, 245);
    glEnd();
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
    
    glColor3f(0.902, 0, 0);
    glBegin(GL_TRIANGLES); 
    glVertex2f(346, 375); 
    //base
    glVertex2f(354, 375);
    //alto
    glVertex2f(350, 385);
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

    //afuera borde superior
    radio = 228;
    glBegin(GL_POINTS);
    glPointSize(5);
    glColor3f(0, 0, 0);

    for (float i = 6.92; i > 2.5; i -= 0.001) {
        calx = radio * cos(i) + 350;
        caly = radio * sin(i) + 319;
        glVertex2f(calx, caly);
    }
    glEnd();
    //afuera
    radio = 229;
    glBegin(GL_POINTS);
    glPointSize(5);
    glColor3f(0, 153, 0);

    for (float i = 6.92; i > 2.5; i -= 0.001) {
        calx = radio * cos(i) + 350;
        caly = radio * sin(i) + 319;
        glVertex2f(calx, caly);
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
    //afuera
    radio = 231;
    glBegin(GL_POINTS);
    glPointSize(5);
    glColor3f(0, 153, 0);

    for (float i = 6.92; i > 2.5; i -= 0.001) {
        calx = radio * cos(i) + 350;
        caly = radio * sin(i) + 319;
        glVertex2f(calx, caly);
    }
    glEnd();

    //afuera borde
    radio = 232;
    glBegin(GL_POINTS);
    glPointSize(5);
    glColor3f(0, 0, 0);

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

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(267, 102);
    glVertex2f(250, 95);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 250;
        caly = radio * sin(i) + 95;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(267, 107);
    glVertex2f(265, 120);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 265;
        caly = radio * sin(i) + 120;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina


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

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(205, 137);
    glVertex2f(190, 135);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 190;
        caly = radio * sin(i) + 135;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(205, 143);
    glVertex2f(205, 160);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 205;
        caly = radio * sin(i) + 160;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

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

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(155, 192);
    glVertex2f(140, 200);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 140;
        caly = radio * sin(i) + 200;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(160, 192);
    glVertex2f(162, 210);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 162;
        caly = radio * sin(i) + 210;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina    



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

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(125, 265);
    glVertex2f(110, 280);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 110;
        caly = radio * sin(i) + 280;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina
    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(127, 270);
    glVertex2f(140, 285);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 140;
        caly = radio * sin(i) + 285;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

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

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(120, 355);
    glVertex2f(110, 365);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 110;
        caly = radio * sin(i) + 365;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(125, 355);
    glVertex2f(140, 360);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 140;
        caly = radio * sin(i) + 360;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina


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

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(145, 420); //00
    glVertex2f(165, 425);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 165;
        caly = radio * sin(i) + 425;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(145, 425); //00
    glVertex2f(135, 440);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 135;
        caly = radio * sin(i) + 440;
        glVertex2f(calx, caly);
    }
    glEnd();


    //-------------------------------------------------------------------------------------------------------------HOJAS 7
    //Hoja 7 derecha
    //medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 430); //00
    glVertex2f(170, 450); //01 ancho izquierda
    glVertex2f(180, 485); //p alto
    glVertex2f(150, 455); //derecha
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 430);
    glVertex2f(170, 450);
    glVertex2f(170, 450);
    glVertex2f(180, 485);
    glVertex2f(180, 485);
    glVertex2f(150, 455);
    glVertex2f(150, 455);
    glVertex2f(150, 430);
    glEnd(); //termina


    //izquierda
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 430); //00
    glVertex2f(170, 435); //01 ancho izquierda
    glVertex2f(190, 470); //p alto
    glVertex2f(165, 445); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 430);
    glVertex2f(170, 435);
    glVertex2f(170, 435);
    glVertex2f(190, 470);
    glVertex2f(190, 470);
    glVertex2f(165, 445);
    glVertex2f(165, 445);
    glVertex2f(150, 430);
    glEnd(); //termina


    //derecha
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(150, 430); //00
    glVertex2f(150, 455); //01 ancho izquierda
    glVertex2f(150, 485); //p alto
    glVertex2f(140, 450); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 430);
    glVertex2f(150, 455);
    glVertex2f(150, 455);
    glVertex2f(150, 485);
    glVertex2f(150, 485);
    glVertex2f(140, 450);
    glVertex2f(140, 450);
    glVertex2f(150, 430);
    glEnd(); //termina

    //DECORACION
    glBegin(GL_LINES);
    glVertex2f(180, 485);
    glVertex2f(185, 495);
    glEnd();\

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);

    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 185;
        caly = radio * sin(i) + 495;
        glVertex2f(calx, caly);
    }


    glEnd();


    //-------------------------------------------------------------------------------------------------------------DERECHA


    //-------------------------------------------------------------------------------------------------------------HOJAS 1

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

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(433, 102);
    glVertex2f(450, 95);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 450;
        caly = radio * sin(i) + 95;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(433, 107);
    glVertex2f(435, 120);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 435;
        caly = radio * sin(i) + 120;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina


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

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(495, 137);
    glVertex2f(510, 135);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 510;
        caly = radio * sin(i) + 135;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(495, 143);
    glVertex2f(495, 160);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 495;
        caly = radio * sin(i) + 160;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina


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
    //termina

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(545, 192);
    glVertex2f(560, 200);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 560;
        caly = radio * sin(i) + 200;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(540, 192);
    glVertex2f(538, 210);
    glEnd();
    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 538;
        caly = radio * sin(i) + 210;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina


    //-------------------------------------------------------------------------------------------------------------HOJAS 5
    //Hoja 5 derecha
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

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(575, 265);
    glVertex2f(590, 280);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 590;
        caly = radio * sin(i) + 280;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina
    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(573, 270);
    glVertex2f(560, 285);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 560;
        caly = radio * sin(i) + 285;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina 

    //-------------------------------------------------------------------------------------------------------------HOJAS 6
    //Hoja 6 derecha
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

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(580, 355);
    glVertex2f(590, 365);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 590;
        caly = radio * sin(i) + 365;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(575, 355);
    glVertex2f(560, 360);

    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 560;
        caly = radio * sin(i) + 360;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina


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


    //-------------------------------------------------------------------------------------------------------------HOJAS 7
    //Hoja 7 derecha
    //medio
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 430); //00
    glVertex2f(530, 450); //01 ancho izquierda
    glVertex2f(520, 485); //p alto
    glVertex2f(550, 455); //derecha
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 430);
    glVertex2f(530, 450);
    glVertex2f(530, 450);
    glVertex2f(520, 485);
    glVertex2f(520, 485);
    glVertex2f(550, 455);
    glVertex2f(550, 455);
    glVertex2f(550, 430);
    glEnd(); //termina


    //izquierda
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 430); //00
    glVertex2f(530, 435); //01 ancho izquierda
    glVertex2f(510, 470); //p alto
    glVertex2f(535, 445); //ancho arr
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 430);
    glVertex2f(530, 435);
    glVertex2f(530, 435);
    glVertex2f(510, 470);
    glVertex2f(510, 470);
    glVertex2f(535, 445);
    glVertex2f(535, 445);
    glVertex2f(550, 430);
    glEnd(); //termina


    //derecha
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(550, 430); //00
    glVertex2f(550, 455); //01 ancho izquierda
    glVertex2f(550, 485); //p alto
    glVertex2f(560, 450); //ancho arr
    glEnd();\

    //decoracion izquierda
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(555, 420); //00
    glVertex2f(535, 425);
    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 535;
        caly = radio * sin(i) + 425;
        glVertex2f(calx, caly);
    }
    glEnd();
    //termina

    //decoracion derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2f(555, 425); //00
    glVertex2f(565, 440);
    glEnd();

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 565;
        caly = radio * sin(i) + 440;
        glVertex2f(calx, caly);
    }
    glEnd();


    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 430);
    glVertex2f(550, 455);
    glVertex2f(550, 455);
    glVertex2f(550, 485);
    glVertex2f(550, 485);
    glVertex2f(560, 450);
    glVertex2f(560, 450);
    glVertex2f(550, 430);
    glEnd(); //termina

    //DECORACION
    glBegin(GL_LINES);
    glVertex2f(520, 485);
    glVertex2f(515, 495);
    glEnd();\

    radio = 4;
    glBegin(GL_POLYGON);
    glColor3f(230, 0, 0);
    for (float i = 0; i < 25; i += 1) {
        calx = radio * cos(i) + 515;
        caly = radio * sin(i) + 495;
        glVertex2f(calx, caly);
    }
    glEnd();


    //----------------------------------------------------------------------------------BANDERAS
    //DERECHA
    //banderas derecha
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(397, 406); //primero
    glVertex2f(510, 520);
    glVertex2i(397, 410);
    glVertex2f(509, 523);
    glVertex2f(509, 523);
    glVertex2f(510, 520);
    glEnd();\
    
    glColor3f(252, 227, 0);
    //PALO 
    glBegin(GL_POLYGON);
    glVertex2i(397, 406); //alto
    glVertex2i(397, 410);
    glVertex2i(509, 523); //ancho abajo
    glVertex2i(510, 520);
    glEnd();

    //punta
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(495, 506);
    glVertex2f(495, 518);
    glVertex2f(495, 518);
    glVertex2f(520, 530);
    glVertex2f(520, 530);
    glVertex2f(507, 507);
    glVertex2f(507, 507);
    glVertex2f(495, 506);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    // punta
    glBegin(GL_POLYGON);
    glVertex2i(495, 506); //junto al palo
    glVertex2i(495, 518);
    glVertex2i(520, 530); //ancho abajo
    glVertex2i(507, 507);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(497, 508);
    glVertex2f(498, 515);
    glVertex2f(498, 515);
    glVertex2f(514, 524);
    glVertex2f(514, 524);
    glVertex2f(507, 511);
    glVertex2f(507, 511);
    glVertex2f(497, 508);
    glEnd(); //termina


    glColor3f(1, 1, 1);
    //punta
    glBegin(GL_POLYGON);
    glVertex2i(497, 508); //alto
    glVertex2i(498, 516);
    glVertex2i(514, 524); //ancho abajo
    glVertex2i(507, 511);
    glEnd();

    //adornos
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(497, 504);
    glVertex2f(493, 510);
    glVertex2f(493, 510);
    glVertex2f(489, 507);
    glVertex2f(489, 507);
    glVertex2f(493, 500);
    glVertex2f(497, 500);
    glVertex2f(497, 504);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(497, 504);
    glVertex2i(493, 510); //derecha
    glVertex2i(489, 507); //alto
    glVertex2i(493, 500); //abajo izquierda
    glEnd();

    //colgante
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(493, 500);
    glVertex2f(493, 483);
    glVertex2f(493, 483);
    glVertex2f(500, 481);
    glVertex2f(500, 481);
    glVertex2f(503, 488);
    glVertex2f(503, 488);
    glVertex2f(493, 500);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(493, 500);
    glVertex2i(493, 483); //derecha
    glVertex2i(500, 481); //alto
    glVertex2i(503, 488);
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 486;
        caly = radio * sin(i) + 513;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 486;
        caly = radio * sin(i) + 513;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 486;
        caly = radio * sin(i) + 513;
        glVertex2f(calx, caly);
    }
    glEnd();
    // abajo
    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 500;
        caly = radio * sin(i) + 498;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 500;
        caly = radio * sin(i) + 498;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 500;
        caly = radio * sin(i) + 498;
        glVertex2f(calx, caly);
    }
    glEnd();





    //----------------------------------------------------------------------------------BANDERAS
    //IZQUIERDA
    //banderas 
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(303, 406); //primero
    glVertex2i(303, 410);
    glVertex2i(303, 410);
    glVertex2f(191, 523);
    glVertex2f(191, 523);
    glVertex2f(190, 520);
    glVertex2f(190, 520);
    glVertex2i(303, 406);
    glEnd();

    glColor3f(252, 227, 0);
    //PALO 
    glBegin(GL_POLYGON);
    glVertex2i(303, 406); //alto
    glVertex2i(303, 410);
    glVertex2i(191, 523); //ancho abajo
    glVertex2i(190, 520);
    glEnd();

    //punta
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(205, 506);
    glVertex2f(205, 518);
    glVertex2f(205, 518);
    glVertex2f(180, 530);
    glVertex2f(180, 530);
    glVertex2f(193, 507);
    glVertex2f(193, 507);
    glVertex2f(205, 506);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    // punta
    glBegin(GL_POLYGON);
    glVertex2i(205, 506); //junto al palo
    glVertex2i(205, 518);
    glVertex2i(180, 530); //ancho abajo
    glVertex2i(193, 507);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(203, 508);
    glVertex2f(202, 515);
    glVertex2f(202, 515);
    glVertex2f(186, 524);
    glVertex2f(186, 524);
    glVertex2f(193, 511);
    glVertex2f(193, 511);
    glVertex2f(203, 508);
    glEnd(); //termina


    glColor3f(1, 1, 1);
    //PALO 
    glBegin(GL_POLYGON);
    glVertex2i(203, 508); //alto
    glVertex2i(202, 516);
    glVertex2i(186, 524); //ancho abajo
    glVertex2i(193, 511);
    glEnd();
    //adornos
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(203, 504);
    glVertex2f(207, 510);
    glVertex2f(207, 510);
    glVertex2f(211, 507);
    glVertex2f(211, 507);
    glVertex2f(207, 500);
    glVertex2f(207, 500);
    glVertex2f(203, 504);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(203, 504);
    glVertex2i(207, 510); //derecha
    glVertex2i(211, 507); //alto
    glVertex2i(207, 500); //abajo izquierda
    glEnd();

    //colgante
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(207, 500);
    glVertex2f(207, 483);
    glVertex2f(207, 483);
    glVertex2f(200, 481);
    glVertex2f(200, 481);
    glVertex2f(197, 488);
    glVertex2f(197, 488);
    glVertex2f(203, 500);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(207, 500);
    glVertex2i(207, 483); //derecha
    glVertex2i(200, 481); //alto
    glVertex2i(197, 488);
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 214;
        caly = radio * sin(i) + 513;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 214;
        caly = radio * sin(i) + 513;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 214;
        caly = radio * sin(i) + 513;
        glVertex2f(calx, caly);
    }
    glEnd();
    // abajo
    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 200;
        caly = radio * sin(i) + 498;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 200;
        caly = radio * sin(i) + 498;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 200;
        caly = radio * sin(i) + 498;
        glVertex2f(calx, caly);
    }
    glEnd();




    //---------------------------------------------------------------------------------------------
    //palo abajo
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(435, 330); //alto
    glVertex2f(575, 395);

    glVertex2f(435, 334); //alto
    glVertex2f(574, 398);
    glEnd();

    glColor3f(252, 227, 0);
    //PALO 
    glBegin(GL_POLYGON);
    glVertex2i(435, 330); //
    glVertex2i(435, 334); //
    glVertex2i(575, 395); //ancho abajo 
    glVertex2i(574, 398); //
    glEnd();

    //punta base
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(555, 386);
    glVertex2f(560, 400);
    glVertex2f(560, 400);
    glVertex2f(588, 402);
    glVertex2f(588, 402);
    glVertex2f(568, 383);
    glVertex2f(568, 383);
    glVertex2f(555, 386);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    // punta
    glBegin(GL_POLYGON);
    glVertex2i(555, 386); //junto al palo
    glVertex2i(560, 400); //arr
    glVertex2i(588, 402); //ancho abajo
    glVertex2i(568, 383);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(557, 388);
    glVertex2f(562, 397);
    glVertex2f(562, 397);
    glVertex2f(581, 399);
    glVertex2f(581, 399);
    glVertex2f(567, 387);
    glVertex2f(567, 387);
    glVertex2f(557, 388);
    glEnd(); //termina

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(557, 388); //junto al palo
    glVertex2i(562, 397); //arr
    glVertex2i(582, 400); //ancho abajo
    glVertex2i(567, 387);
    glEnd();

    //pomo

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(550, 390);
    glVertex2f(553, 382);
    glVertex2f(553, 382);
    glVertex2f(557, 383);
    glVertex2f(577, 383);
    glVertex2f(554, 390);
    glVertex2f(554, 390);
    glVertex2f(550, 390);
    glEnd(); //termina

    //punta
    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(550, 390);
    glVertex2i(553, 382); //derecha
    glVertex2i(557, 383); //alto
    glVertex2i(554, 390); //abajo izquierda
    glEnd();


    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(553, 383);
    glVertex2f(549, 360);
    glVertex2f(549, 360);
    glVertex2f(555, 357);
    glVertex2f(555, 357);
    glVertex2f(560, 363);
    glVertex2f(560, 363);
    glVertex2f(553, 383);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(553, 383);
    glVertex2i(549, 360); //derecha
    glVertex2i(555, 357); //alto
    glVertex2i(560, 363);
    glEnd();

    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 551;
        caly = radio * sin(i) + 395;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 551;
        caly = radio * sin(i) + 395;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 551;
        caly = radio * sin(i) + 395;
        glVertex2f(calx, caly);
    }
    glEnd();
    // abajo
    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 557;
        caly = radio * sin(i) + 378;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 557;
        caly = radio * sin(i) + 378;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 557;
        caly = radio * sin(i) + 378;
        glVertex2f(calx, caly);
    }
    glEnd();

    //---------------------------------------------------------------------------IZQUIERDA
    //palo abajo
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(265, 330); //alto
    glVertex2f(125, 395);

    glVertex2f(265, 334); //alto
    glVertex2f(126, 398);
    glEnd();

    glColor3f(252, 227, 0);
    //PALO 
    glBegin(GL_POLYGON);
    glVertex2i(265, 330); //
    glVertex2i(265, 334); //
    glVertex2i(125, 395); //ancho abajo 
    glVertex2i(126, 398); //
    glEnd();

    //punta base
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(145, 386);
    glVertex2f(140, 400);
    glVertex2f(140, 400);
    glVertex2f(112, 402);
    glVertex2f(112, 402);
    glVertex2f(132, 383);
    glVertex2f(132, 383);
    glVertex2f(145, 386);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    // punta
    glBegin(GL_POLYGON);
    glVertex2i(145, 386); //junto al palo
    glVertex2i(140, 400); //arr
    glVertex2i(112, 402); //ancho abajo
    glVertex2i(132, 383);
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(143, 388);
    glVertex2f(138, 397);
    glVertex2f(138, 397);
    glVertex2f(119, 399);
    glVertex2f(119, 399);
    glVertex2f(133, 387);
    glVertex2f(133, 387);
    glVertex2f(143, 388);
    glEnd(); //termina

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(143, 388); //junto al palo
    glVertex2i(138, 397); //arr
    glVertex2i(119, 400); //ancho abajo
    glVertex2i(133, 387);
    glEnd();

    //pomo

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(150, 390);
    glVertex2f(147, 382);
    glVertex2f(147, 382);
    glVertex2f(143, 383);
    glVertex2f(143, 383);
    glVertex2f(146, 390);
    glVertex2f(146, 390);
    glVertex2f(150, 390);
    glEnd(); //termina

    //punta
    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 390);
    glVertex2i(147, 382); //derecha
    glVertex2i(143, 383); //alto
    glVertex2i(146, 390); //abajo izquierda
    glEnd();


    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(147, 383);
    glVertex2f(151, 360);
    glVertex2f(151, 360);
    glVertex2f(145, 357);
    glVertex2f(145, 357);
    glVertex2f(140, 363);
    glVertex2f(140, 363);
    glVertex2f(147, 383);
    glEnd(); //termina

    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(147, 383);
    glVertex2i(151, 360); //derecha
    glVertex2i(145, 357); //alto
    glVertex2i(140, 363);

    glEnd();

    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 149;
        caly = radio * sin(i) + 395;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 149;
        caly = radio * sin(i) + 395;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 149;
        caly = radio * sin(i) + 395;
        glVertex2f(calx, caly);
    }
    glEnd();
    // abajo
    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 143;
        caly = radio * sin(i) + 378;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 143;
        caly = radio * sin(i) + 378;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 143;
        caly = radio * sin(i) + 378;
        glVertex2f(calx, caly);
    }
    glEnd();



    //---------------------------------------------------------------------------------------------------------
    //banderasss derecha

    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(398, 406);
    glVertex2i(493, 500);
    glVertex2i(500, 400); //ancho abajo
    glVertex2i(490, 360);
    glEnd();
    //color 2
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(435, 334);
    glVertex2i(398, 406);
    glVertex2i(500, 395); //ancho abajo
    glVertex2i(490, 360);
    glEnd();



    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(415, 423);
    glVertex2i(415, 400);
    glVertex2i(450, 458); //ancho abajo
    glVertex2i(410, 385);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(450, 458);


    glVertex2i(410, 385);
    glVertex2i(430, 345);
    glVertex2i(450, 395); //ancho abajo
    glEnd();

    //pequenio
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(398, 406);
    glVertex2i(420, 428);

    glVertex2i(420, 400); //ancho abajo
    glVertex2i(410, 380);
    glEnd();


    //---------------------------------------------------------------------------------------------------------
    //bandera izquierda

    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(302, 406);
    glVertex2i(207, 500);
    glVertex2i(200, 400); //ancho abajo
    glVertex2i(210, 360);
    glEnd();
    //color 2
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(265, 334);
    glVertex2i(302, 406);
    glVertex2i(200, 395); //ancho abajo
    glVertex2i(210, 360);
    glEnd();



    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(285, 423);
    glVertex2i(295, 400);
    glVertex2i(250, 458); //ancho abajo
    glVertex2i(290, 385);
    glEnd();

    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(250, 458);
    glVertex2i(290, 385);
    glVertex2i(270, 345);
    glVertex2i(250, 395); //ancho abajo
    glEnd();

    //pequenio
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(302, 406);
    glVertex2i(280, 428);

    glVertex2i(280, 400); //ancho abajo
    glVertex2i(290, 380);
    glEnd();


    //--------------------------------------------------------------------------BANDERAS BAJAS

    //azulgrande
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(552, 385);
    glVertex2i(435, 330);
    glVertex2i(495, 210);
    glVertex2i(530, 260); //ancho abajo
    glEnd();



    //pequenio blanco
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(500, 360);
    glVertex2i(460, 343);
    glVertex2i(450, 300);
    glVertex2i(475, 250); //ancho abajo
    glVertex2i(495, 285); //ancho abajo

    glEnd();

    //azul pequenio
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(435, 330);
    glVertex2i(460, 343); //arr
    glVertex2i(457, 310); //aarriiba
    glVertex2i(450, 300); //ancho abajo
    glEnd();



    //------------------------------------------------------------------------------IZQUIERDA 

    //azulgrande
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(148, 385);
    glVertex2i(265, 330);
    glVertex2i(205, 210);
    glVertex2i(170, 260); //ancho abajo
    glEnd();



    //pequenio blanco
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(200, 360);
    glVertex2i(240, 343);
    glVertex2i(250, 300);
    glVertex2i(225, 250); //ancho abajo
    glVertex2i(205, 285); //ancho abajo

    glEnd();

    //azul pequenio
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(265, 330);
    glVertex2i(240, 343); //arr
    glVertex2i(243, 310); //aarriiba
    glVertex2i(250, 300); //ancho abajo
    glEnd();

    //--------------------------------------------------------------------------banderas bajas
    //izquierda
    //azul pequenio
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(210, 200);
    glVertex2i(350, 200); //derecho
    glVertex2i(350, 180); //abajo derecho
    glVertex2i(300, 165); //abajo izquierda
    glVertex2i(250, 170); //abajo izquierda
    glEnd();


    //blanco
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(260, 200);
    glVertex2i(335, 200); //derecho
    glVertex2i(325, 195); //abajo derecho
    glVertex2i(300, 190); //abajo izquierda
    glVertex2i(280, 190); //abajo izquierda
    glEnd();


    //medio bandera
    //azull
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(345, 200); //00 izquiero
    glVertex2i(355, 200); //00 derecho
    glVertex2i(370, 160); //abajo derecha
    glVertex2i(350, 145); //alto
    glVertex2i(330, 160); //abajo izquierda    
    glEnd();

    //blanco
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(348, 200); //00 izquiero
    glVertex2i(352, 200); //00 derecho
    glVertex2i(358, 151); //abajo derecha
    glVertex2i(350, 145); //alto
    glVertex2i(342, 151); //abajo izquierda    
    glEnd();

    //derecha----------------------------------------------------------------------
    //izquierda
    //azul pequenio
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(490, 200);
    glVertex2i(350, 200); //derecho
    glVertex2i(360, 178); //abajo derecho
    glVertex2i(400, 165); //abajo izquierda
    glVertex2i(450, 170); //abajo izquierda
    glEnd();

    //blanco
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(440, 200);
    glVertex2i(365, 200); //derecho
    glVertex2i(375, 195); //abajo derecho
    glVertex2i(400, 190); //abajo izquierda
    glVertex2i(420, 190); //abajo izquierda
    glEnd();



    //---------------------------------------------------------------------------esbasta superior
    //azul
    glColor3f(0, 0, 255);
    glBegin(GL_POLYGON);
    glVertex2i(350, 500);
    glVertex2i(358, 486); //derecha
    glVertex2i(360, 500); //abajo derecho
    glVertex2i(350, 550); //altoo
    glVertex2i(333, 500);
    glVertex2i(335, 470);
    glEnd();

    //blanco
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(350, 500);
    glVertex2i(352, 502); //derecha
    glVertex2i(357, 515); //abajo derecho
    glVertex2i(354, 535); //abajo izquierda
    glVertex2i(340, 500); //abajo izquierda
    glVertex2i(340, 480); //abajo abajo izquierda
    glEnd();




    //punta
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(350, 550);
    glVertex2f(342, 560);
    glVertex2f(342, 560);
    glVertex2f(350, 590);
    glVertex2f(350, 590);
    glVertex2f(358, 560);
    glVertex2f(358, 560);
    glVertex2f(350, 550);
    glEnd(); //termina

    //punta
    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(350, 550);
    glVertex2i(342, 560); //derecha
    glVertex2i(350, 590); //alto
    glVertex2i(358, 560); //abajo izquierda
    glEnd();

    //punta
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(350, 555);
    glVertex2f(345, 560);
    glVertex2f(345, 560);
    glVertex2f(350, 580);
    glVertex2f(350, 580);
    glVertex2f(354, 560);
    glVertex2f(354, 560);
    glVertex2f(350, 555);
    glEnd(); //termina

    //punta adentro
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2i(350, 555);
    glVertex2i(345, 560); //izquierda
    glVertex2i(350, 580); //alto
    glVertex2i(354, 560); // derecha
    glEnd();

    //decoracion----------------------------------------------------------------
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(348, 550);
    glVertex2f(352, 550);
    glVertex2f(352, 550);
    glVertex2f(352, 545);
    glVertex2f(352, 545);
    glVertex2f(348, 545);
    glVertex2f(348, 545);
    glVertex2f(348, 550);
    glEnd(); //termina


    //pomo
    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(348, 550);
    glVertex2i(352, 550); //derecha
    glVertex2i(352, 545); //alto
    glVertex2i(348, 545); //abajo izquierda
    glEnd();

    //adorno
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(350, 545);
    glVertex2f(360, 535);
    glVertex2f(360, 535);
    glVertex2f(358, 530);
    glVertex2f(358, 530);
    glVertex2f(353, 530);
    glVertex2f(353, 530);
    glVertex2f(350, 545);
    glEnd(); //termina

    //punta
    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(350, 545);
    glVertex2i(360, 535); //derecha
    glVertex2i(358, 530); //alto
    glVertex2i(353, 530); //abajo izquierda
    glEnd();


    //adorno
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(350, 545);
    glVertex2f(337, 537);
    glVertex2f(337, 537);
    glVertex2f(338, 530);
    glVertex2f(338, 530);
    glVertex2f(343, 530);
    glVertex2f(343, 530);
    glVertex2f(350, 545);
    glEnd(); //termina

    //punta
    glColor3f(252, 227, 0);
    glBegin(GL_POLYGON);
    glVertex2i(350, 545);
    glVertex2i(337, 537); //derecha
    glVertex2i(338, 530); //alto
    glVertex2i(343, 530); //abajo izquierda
    glEnd();

    //rueditas de esbastas
    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 343;
        caly = radio * sin(i) + 548;
        glVertex2f(calx, caly);
    }
    glEnd();
    //rueditas de esbastas
    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 343;
        caly = radio * sin(i) + 548;
        glVertex2f(calx, caly);
    }
    glEnd();

    //rueditas de esbastas
    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 10; i += 0.01) {
        calx = radio * cos(i) + 343;
        caly = radio * sin(i) + 548;
        glVertex2f(calx, caly);
    }
    glEnd();

    // derecha

    //rueditas de esbastas
    radio = 4;
    glBegin(GL_POINTS);
    glColor3f(252, 227, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 358;
        caly = radio * sin(i) + 548;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 5;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 358;
        caly = radio * sin(i) + 548;
        glVertex2f(calx, caly);
    }
    glEnd();

    radio = 3;
    glBegin(GL_POINTS);
    glColor3f(0, 0, 0);
    for (float i = 0; i < 25; i += 0.01) {
        calx = radio * cos(i) + 358;
        caly = radio * sin(i) + 548;
        glVertex2f(calx, caly);
    }
    glEnd();



    //CHONGA
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(350, 86);
    glVertex2i(368, 86);
    glVertex2i(380, 97); //derecha

    glVertex2i(382, 113); //alto
    glVertex2i(365, 122); //abajo izquierda
    glVertex2i(354, 111); //abajo izquierda
    glEnd();

    //BLANCO CENTRO
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(356, 92);
    glVertex2i(368, 92);
    glVertex2i(373, 97); //derecha

    glVertex2i(375, 108); //alto
    glVertex2i(365, 113); //abajo izquierda
    glVertex2i(360, 108); //abajo izquierda
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(356, 92);
    glVertex2f(368, 92);
    glVertex2f(368, 92);
    glVertex2f(373, 97);
    glVertex2f(373, 97);
    glVertex2f(375, 108);
    glVertex2f(375, 108);
    glVertex2f(365, 113);
    glVertex2f(365, 113);
    glVertex2f(360, 108);
    glVertex2f(360, 108);
    glVertex2f(355, 92);
    glEnd(); //termina

    //BOTON CENTRO
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(345, 95);
    glVertex2i(355, 95);
    glVertex2i(355, 83); //derecha
    glVertex2i(345, 83); //alto
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(345, 95);
    glVertex2f(355, 95);
    glVertex2f(355, 83);
    glVertex2f(345, 83);
    glEnd();

    //IZQUIERDA
    //CHONGA
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(350, 86);
    glVertex2i(332, 86);
    glVertex2i(320, 97); //derecha

    glVertex2i(318, 113); //alto
    glVertex2i(335, 122); //abajo izquierda
    glVertex2i(346, 111); //abajo izquierda
    glEnd();

    //BLANCO CENTRO
    glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
    glVertex2f(344, 92);
    glVertex2i(332, 92);
    glVertex2i(327, 97); //derecha

    glVertex2i(325, 108); //alto
    glVertex2i(335, 113); //abajo izquierda
    glVertex2i(340, 108); //abajo izquierda
    glEnd();

    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(344, 92);
    glVertex2f(332, 92);
    glVertex2f(332, 92);
    glVertex2f(327, 97);
    glVertex2f(327, 97);
    glVertex2f(325, 108);
    glVertex2f(325, 108);
    glVertex2f(335, 113);
    glVertex2f(335, 113);
    glVertex2f(340, 108);
    glVertex2f(340, 108);
    glVertex2f(344, 92);
    glEnd(); //termina



    //PATAS DE LAURELES

    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(345, 90);
    glVertex2i(345, 83);
    glVertex2i(320, 80); //derecha

    glVertex2i(290, 60); //alto
    glVertex2i(300, 60); //abajo izquierda
    glVertex2i(302, 58); //abajo izquierda
    glEnd();
    
      glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(345, 90);
    glVertex2f(345, 83);
    glVertex2f(345, 83);
    glVertex2f(320, 80);
    glVertex2f(320, 80);
    glVertex2f(290, 60);
    glVertex2f(290, 60);
    glVertex2f(300, 60);
    glVertex2f(300, 60);
    glVertex2f(302, 58);
    glVertex2f(302, 58);
    glVertex2f(345, 90);
    glEnd(); //termina
    
    //DERECHA
    glColor3f(0, 153, 0);
    glBegin(GL_POLYGON);
    glVertex2f(355, 90);
    glVertex2i(355, 83);
    glVertex2i(380, 80); //derecha

    glVertex2i(415, 60); //alto
    glVertex2i(400, 60); //abajo izquierda
    glVertex2i(398, 58); //abajo izquierda
    glEnd();
    
        glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(355, 90);
    glVertex2f(355, 83);
    glVertex2f(355, 83);
    glVertex2f(380, 80);
    glVertex2f(380, 80);
    glVertex2f(415, 60);
    glVertex2f(415, 60);
    glVertex2f(400, 60);
    glVertex2f(400, 60);
    glVertex2f(398, 58);
    glVertex2f(398, 58);
    glVertex2f(355, 90);
    glEnd(); //termina

    //PATAS DE CHONGA
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(345, 95);
    glVertex2i(345, 83);
    glVertex2i(324, 80); //derecha

    glVertex2i(314, 60); //alto
    glVertex2i(324, 67); //abajo izquierda
    glVertex2i(326, 58); //abajo izquierda
    glEnd();


    //RERECHA
    glColor3f(0, 0, 1);
    glBegin(GL_POLYGON);
    glVertex2f(355, 95);
    glVertex2i(355, 83);
    glVertex2i(375, 80); //derecha

    glVertex2i(384, 60); //alto
    glVertex2i(376, 67); //abajo izquierda
    glVertex2i(374, 58); //abajo izquierda
    glEnd();

    //borde btn
    glColor3f(0, 0, 0);
    glLineWidth(1.5);
    glBegin(GL_LINES);
    glVertex2f(345, 95);
    glVertex2f(355, 95);
    glVertex2f(355, 95);
    glVertex2f(355, 83);
    glVertex2f(355, 83);
    glVertex2f(345, 83);
    glVertex2f(345, 83);
    glVertex2f(345, 95);
    glEnd();

    glFlush();
    glutSwapBuffers();
}
