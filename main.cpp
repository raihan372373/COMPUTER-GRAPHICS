#include <GL/gl.h>
#include <GL/glut.h>

float p=0.0,q=0.0,r=0.0,s=0.0,t=0.0,b=0.0,road=0.0,star=0.0;
void display(void)
{

 glClear (GL_COLOR_BUFFER_BIT);



 //Whole graph

 glColor3f (0.7,0.84,1);
 glBegin(GL_QUADS);

 glVertex2i(0, 80);
 glVertex2i(0, 0);
 glVertex2i(100, 0);
 glVertex2i(100, 80);

 glEnd();

 //Cloud

glColor3f(0.04-s, 0.77-s, 0.94-s);
glutPostRedisplay();

glPushMatrix();
glTranslatef(0, 68, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(5, 69, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(10, 70, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(15, 71, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(20, 72, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(25, 73, 0.0);
glutSolidSphere(3.5,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(30, 74, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(35, 75, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(40, 76, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(45, 77, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(50, 78, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(55, 79, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(60, 79.2, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(65, 79.4, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(70, 79.6, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(75, 79.7, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(80, 79.8, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(85, 79.5, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(90, 79.1, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(95, 78.7, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(100, 78.2, 0.0);
glutSolidSphere(3.5 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(10, 70, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();


glEnd();

 glBegin(GL_QUADS);
 glVertex2i(0, 80);
 glVertex2i(0, 69);
 glVertex2i(45, 77);
 glVertex2i(45, 80);

 glEnd();

 //Sun

glColor3f(1, 0.92, 0.12-s);
glutPostRedisplay();
glPushMatrix();
glTranslatef(12, 79.5-(12*s), 0.0);
glutSolidSphere(2.1 ,100,2);
glPopMatrix();
glEnd();

//Moon
glColor3f(0.35+(100/s), 0.37+(100/s), 0.08-(100/s));
glutPostRedisplay();
glPushMatrix();
glTranslatef(105-(8*s), 66+(7*s), 0.0);
glutSolidSphere(1.55 ,100,2);
glPopMatrix();
glEnd();

  if(b<=100)
       b=b+0.002;

      else
        b=0.0;


//Biman



//Whole Rasta

  glColor3f (0.15, 0.15, 0.15);
 glBegin(GL_QUADS);

 glVertex2i(0, 22);
 glVertex2i(0, 10);
 glVertex2i(100, 10);
 glVertex2i(100, 22);

 glEnd();

 if(road<= 100)
       road=road+0.01;

      else
        road=0.0;

 //Rasta Line

glLineWidth(5);
glColor3f(0.9, 0.95, 0.95);
glBegin(GL_LINES);

glVertex2f(0, 22);glVertex2f(100, 22);
glVertex2f(0, 10);glVertex2f(100, 10);

glEnd();

glLineWidth(8);
glColor3f(1, 1, 1);
glBegin(GL_LINES);

glVertex2f(2, 16);glVertex2f(4, 16);
glVertex2f(6, 16);glVertex2f(8, 16);
glVertex2f(10, 16);glVertex2f(12, 16);
glVertex2f(14, 16);glVertex2f(16, 16);
glVertex2f(18, 16);glVertex2f(20, 16);
glVertex2f(22, 16);glVertex2f(24, 16);
glVertex2f(26, 16);glVertex2f(28, 16);
glVertex2f(30, 16);glVertex2f(32, 16);
glVertex2f(34, 16);glVertex2f(36, 16);
glVertex2f(38, 16);glVertex2f(40, 16);
glVertex2f(42, 16);glVertex2f(44, 16);
glVertex2f(46, 16);glVertex2f(48, 16);
glVertex2f(50, 16);glVertex2f(52, 16);
glVertex2f(54, 16);glVertex2f(56, 16);

glVertex2f(64, 16);glVertex2f(66, 16);
glVertex2f(69, 16);glVertex2f(71.5, 16);
glVertex2f(74, 16);glVertex2f(76, 16);
glVertex2f(78, 16);glVertex2f(80, 16);
glVertex2f(82, 16);glVertex2f(84, 16);
glVertex2f(86, 16);glVertex2f(88, 16);
glVertex2f(90, 16);glVertex2f(92, 16);
glVertex2f(94, 16);glVertex2f(96, 16);
glVertex2f(98, 16);glVertex2f(100, 16);

//Zebra Crossing

glVertex2f(57.5, 16);glVertex2f(62, 16);
glVertex2f(57.5, 17.5);glVertex2f(62, 17.5);
glVertex2f(57.5, 19);glVertex2f(62, 19);
glVertex2f(57.5, 20.5);glVertex2f(62, 20.5);

glVertex2f(57.5, 14.5);glVertex2f(62, 14.5);
glVertex2f(57.5, 13);glVertex2f(62, 13);
glVertex2f(57.5, 11.5);glVertex2f(62, 11.5);



glEnd();

//School Area

glColor3f(0.21, 0.67, 0.25);
glBegin(GL_QUADS);

glVertex2f(40,51);
glVertex2f(40,27);
glVertex2f(99.50,27);
glVertex2f(99.50,51);
glEnd();


// Gorer cad

  glColor3f (0.38, 0.31, 0.23);
 glBegin(GL_QUADS);

 glVertex2i(67, 62);
 glVertex2i(61, 55);
 glVertex2i(99, 55);
 glVertex2i(93, 62);

 glEnd();

 //Gor
   glColor3f (0.1, 0.53, 0.96);
 glBegin(GL_QUADS);

 glVertex2i(65, 55);
 glVertex2i(95, 55);
 glVertex2i(95, 37);
 glVertex2i(65, 37);
 glEnd();

  //Gorer doroza
   glColor3f (0.74, 0.68, 0.71);
 glBegin(GL_QUADS);

 glVertex2f(77.5, 50);
 glVertex2f(77.5, 37);
 glVertex2f(82.5, 37);
 glVertex2f(82.5, 50);
 glEnd();

 //gorer doroza

    glColor3f (0.36, 0.39, 0.4);
 glBegin(GL_QUADS);

 glVertex2f(77.5, 37);
 glVertex2f(75, 34);
 glVertex2f(80, 34);
 glVertex2f(82.5, 37);
 glEnd();

 //Doroza line

glLineWidth(5);
glColor3f(0.23, 0.22, 0.23);
glBegin(GL_LINES);

glVertex2f(77.7, 49.7);glVertex2f(77.7, 37);
glVertex2f(82.3, 49.7);glVertex2f(82.3, 37);

glVertex2f(82.45, 49.7);glVertex2f(77.55, 49.7);
glVertex2f(82.45, 44.7);glVertex2f(77.55, 44.7);
glVertex2f(82.42, 40.7);glVertex2f(77.55, 40.7);

glVertex2f(80, 49.8);glVertex2f(80, 37);

//janala line





glEnd();

 //gorer janala

    glColor3f (0.74, 0.68, 0.71);
 glBegin(GL_QUADS);

 glVertex2f(68, 48);
 glVertex2f(68, 42);
 glVertex2f(72, 42);
 glVertex2f(72, 48);
 glEnd();

 glLineWidth(10);
glColor3f(0.87, 0.6, 0.76);
glBegin(GL_LINES);

glVertex2f(95, 51);glVertex2f(99.5, 51);
glVertex2f(99.5, 51.37);glVertex2f(99.5, 27);
glEnd();

//Janala line

glLineWidth(5);
glBegin(GL_LINES);
glColor3f(0.23, 0.22, 0.23);
glVertex2f(68.2, 48);glVertex2f(68.2, 42);
glVertex2f(71.8, 48);glVertex2f(71.8, 42);

glVertex2f(71.8, 48);glVertex2f(68.2, 48);
glVertex2f(71.8, 42);glVertex2f(68.2, 42);

glVertex2f(70.1, 48);glVertex2f(68.2, 45);
glVertex2f(70.1, 48);glVertex2f(71.8, 45);

glVertex2f(70.1, 46);glVertex2f(71.8, 43);
glVertex2f(70.1, 46);glVertex2f(68.2, 43);
glVertex2f(70.1, 48);glVertex2f(70.1, 42);

glEnd();

 //Flag khoti

glLineWidth(8);
glColor3f(0.4, 0.27, 0.25);
glBegin(GL_LINES);
glVertex2f(89, 52);glVertex2f(89, 36);
glEnd();

if(r<= 1)
       r=r+0.0002;

      else
        r=0.0;

//Flag Green

glColor3f (0.19, 0.49, 0.12);
glBegin(GL_QUADS);

 glVertex2f(89.3, 52);
 glVertex2f(98.5, 52.7-r);
 glVertex2f(98.5, 46.7-r);
 glVertex2f(89.3, 46);
 glEnd();

  //Flag Circle

glutPostRedisplay();
glPushMatrix();
glColor3f(1, 0, 0);
glTranslatef(93.5, 49.5-r+0.2, 0.0);
glutSolidSphere(2.1 ,100,2);
glPopMatrix();
glEnd();

 //Flag Stand

 glColor3f (0.329,0.329,0.329);
glBegin(GL_QUADS);

 glVertex2f(87.5, 36);
 glVertex2f(90.5, 36);
 glVertex2f(90.5, 34);
 glVertex2f(87.5, 34);
 glEnd();



  //up-left-wall

glLineWidth(10);
glColor3f(0.05, 0.17, 0.01);
glBegin(GL_LINES);

glVertex2f(65, 51);glVertex2f(40, 51);
glVertex2f(40, 51.35);glVertex2f(40, 27);
glVertex2f(39.7, 27);glVertex2f(99.79, 27);

glEnd();




 //gac
  glColor3f (0.4, 0.27, 0.25);
 glBegin(GL_QUADS);

 glVertex2i(5, 31);
 glVertex2i(5, 22);
 glVertex2i(6.5, 22);
 glVertex2i(6.5, 31);

 glEnd();

//gacer pata
glColor3f(0.07, 0.31, 0.01);

glBegin(GL_TRIANGLES);
 glVertex2f(1.2, 31);
 glVertex2f(10.2, 31);
 glVertex2f(5.5, 34);
 glEnd();

 glBegin(GL_TRIANGLES);
 glVertex2f(1.2, 32.5);
 glVertex2f(10.2, 32.5);
 glVertex2f(5.5, 36);
 glEnd();

  glBegin(GL_TRIANGLES);
 glVertex2f(1.7, 34.5);
 glVertex2f(9.8, 34.5);
 glVertex2f(5.5, 38);
 glEnd();

 //Football field

 glColor3f (0.19, 0.49, 0.12);
 glBegin(GL_QUADS);

 glVertex2i(60, 48);
 glVertex2i(43, 48);
 glVertex2i(43, 37);
 glVertex2i(60, 37);

 glEnd();

 //Fotball field line

glLineWidth(4);
glColor3f(1, 1, 1);
glBegin(GL_LINES);

glVertex2f(59, 47);glVertex2f(44, 47);
glVertex2f(44, 47.15);glVertex2f(44, 37.87);
glVertex2f(44, 38);glVertex2f(59, 38);
glVertex2f(59,38 );glVertex2f(59, 47);

glVertex2f(44,44.5 );glVertex2f(46, 44.5);
glVertex2f(44,40.5 );glVertex2f(46, 40.5);
glVertex2f(45.88,40.5 );glVertex2f(45.88, 44.5);

glVertex2f(59,44.5 );glVertex2f(57, 44.5);
glVertex2f(59,40.5 );glVertex2f(57, 40.5);
glVertex2f(57.1,40.5 );glVertex2f(57.1, 44.5);



glEnd();

 //Football field circle

glutPostRedisplay();
glPushMatrix();
glColor3f(1, 1, 1);
glTranslatef(51.5, 42.5, 0.0);
glutSolidSphere(2 ,100,2);

glPopMatrix();

glEnd();

glutPostRedisplay();
glPushMatrix();
glColor3f(0.19, 0.49, 0.12);
glTranslatef(51.5, 42.5, 0.0);
glutSolidSphere(1.8 ,100,2);

glPopMatrix();

glEnd();

//Mid Line of football field

glLineWidth(4);
glColor3f(1, 1, 1);
glBegin(GL_LINES);

glVertex2f(51.5, 47);glVertex2f(51.5, 38);


 glEnd();

//Gate

glColor3f (0.39, 0.16, 0.12);
 glBegin(GL_QUADS);

 glVertex3f(63, 28.7, 0.0);
 glVertex3f(63, 25, 0.0);
 glVertex3f(73, 25, 0.0);
 glVertex3f(73, 28.7, 0.0);

 glEnd();

glBegin(GL_QUADS);
 glVertex3f(63, 27.5, 0.0);
 glVertex3f(64.5, 27.5, 0.0);
 glVertex3f(64.5, 33, 0.0);
 glVertex3f(63,33, 0.0);

 glEnd();

 glBegin(GL_QUADS);
 glVertex3f(73, 27.5, 0.0);
 glVertex3f(71.5, 27.5, 0.0);
 glVertex3f(71.5, 33, 0.0);
 glVertex3f(73,33, 0.0);

 glEnd();

  glBegin(GL_TRIANGLES);
 glVertex3f(64.5, 28.7, 0.0);
 glVertex3f(71.5, 28.7, 0.0);
 glVertex3f(68, 31, 0.0);

 glEnd();

 //gate line

 glLineWidth(4);
glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex2f(68, 31);glVertex2f(68, 25);
glEnd();

glLineWidth(10);
glColor3f(0.39, 0.16, 0.12);
glBegin(GL_LINES);
glVertex2f(63.75, 33);glVertex2f(63.75, 34);
glEnd();

glColor3f(0.75, 0.78, 0.51);
glutPostRedisplay();
glPushMatrix();
glTranslatef(63.7, 34.7, 0.0);
glutSolidSphere(0.8,100,2);
glPopMatrix();
glEnd();

glColor3f(0.75, 0.78, 0.51);
glutPostRedisplay();
glPushMatrix();
glTranslatef(72.2, 34.7, 0.0);
glutSolidSphere(0.8,100,2);
glPopMatrix();
glEnd();

 glLineWidth(10);
glColor3f(0.39, 0.16, 0.12);
glBegin(GL_LINES);

glVertex2f(72.25, 33);glVertex2f(72.25, 34);


glEnd();


//Banner Everything

//banner board
glColor3f(0.49, 0.52, 0.52);
glBegin(GL_QUADS);

glVertex3f(28,27,0.0);
glVertex3f(28,20,0.0);
glVertex3f(37,20,0.0);
glVertex3f(37,27,0.0);

glEnd();

//banner stand

glLineWidth(10);
glColor3f(0.39, 0.16, 0.12);
glBegin(GL_LINES);
glVertex2f(32.5, 10);glVertex2f(32.5, 20);
glEnd();

//Banner line

glLineWidth(4);
glColor3f(1, 1, 1);
glBegin(GL_LINES);
glVertex2f(29, 21);glVertex2f(36,21);
glVertex2f(36, 21);glVertex2f(36,26);
glVertex2f(36, 26);glVertex2f(29,26);
glVertex2f(29, 26);glVertex2f(29,21);
glEnd();

//Traffic Light


//light box

glColor3f(0-s, 0-s, 0+s);
glBegin(GL_QUADS);

glVertex3f(31,30,0.0);
glVertex3f(34,30,0.0);
glVertex3f(34,38,0.0);
glVertex3f(31,38,0.0);

glEnd();

//Light Stand

glLineWidth(10);
glColor3f(0.94, 0.96, 0.94);
glBegin(GL_LINES);
glVertex2f(32.5, 30);glVertex2f(32.5,27);

glEnd();


//Traffic Light Circle

//Red

glutPostRedisplay();
glPushMatrix();
glColor3f(1, 0, 0);
glTranslatef(32.5, 31.5, 0.0);
glutSolidSphere(0.7 ,100,2);

glPopMatrix();

glEnd();

//Yellow

glutPostRedisplay();
glPushMatrix();
glColor3f(0.96, 1, 0.03);
glTranslatef(32.5, 33.5, 0.0);
glutSolidSphere(0.7 ,100,2);

glPopMatrix();

glEnd();

  if(q<=0.3)
       q=q+0.0001;

      else
        q=0.0;
//Green

glutPostRedisplay();
glPushMatrix();
glColor3f(0, 1, 0);
glTranslatef(32.5, 35.9, 0.0);
glutSolidSphere(0.7+q ,100,2);

glPopMatrix();

glEnd();

//Animation

  if(p<=100)
       p=p+0.009;

      else
        p=0.0;


 //gari

 glColor3f (0.39, 0.16, 0.12);
 glBegin(GL_QUADS);

 glVertex3f(0+p, 21, 0.0);
 glVertex3f(0+p, 15, 0.0);
 glVertex3f(17+p, 15, 0.0);
 glVertex3f(17+p, 21, 0.0);

 glEnd();

 glColor3f (0.45, 0.31, 0.11);
 glBegin(GL_QUADS);

 glVertex3f(0+p, 17, 0.0);
 glVertex3f(0+p, 21, 0.0);
 glVertex3f(17+p, 21, 0.0);
 glVertex3f(17+p, 17, 0.0);

 glEnd();

  glColor3f (0.59, 0.23, 0.05);
 glBegin(GL_QUADS);

 glVertex3f(0+p, 23, 0.0);
 glVertex3f(0+p, 21, 0.0);
 glVertex3f(17+p, 21, 0.0);
 glVertex3f(15+p, 23, 0.0);

 glEnd();

 glColor3f (0.3, 0.3, 0.29);
 glBegin(GL_QUADS);

 glVertex3f(1.5+p, 21, 0.0);
 glVertex3f(1.5+p, 17, 0.0);
 glVertex3f(3+p, 17, 0.0);
 glVertex3f(3+p, 21, 0.0);

 glEnd();

  glBegin(GL_QUADS);

 glVertex3f(4+p, 21, 0.0);
 glVertex3f(4+p, 17, 0.0);
 glVertex3f(5.5+p, 17, 0.0);
 glVertex3f(5.5+p, 21, 0.0);

 glEnd();

  glBegin(GL_QUADS);

 glVertex3f(6.5+p, 21, 0.0);
 glVertex3f(6.5+p, 17, 0.0);
 glVertex3f(8+p, 17, 0.0);
 glVertex3f(8+p, 21, 0.0);

 glEnd();



  glColor3f (0.39, 0.16, 0.12);
 glBegin(GL_QUADS);

 glVertex3f(0+p, 18.6, 0.0);
 glVertex3f(0+p, 15, 0.0);
 glVertex3f(17+p, 15, 0.0);
 glVertex3f(17+p, 18.6, 0.0);

 glEnd();


 glColor3f (0.27, 0.33, 0.33);
 glBegin(GL_QUADS);
 glVertex3f(8.9+p, 21, 0.0);
 glVertex3f(8.9+p, 16.5, 0.0);
 glVertex3f(10.6+p, 16.5, 0.0);
 glVertex3f(10.6+p, 21, 0.0);
 glEnd();

 //bus front
  glColor3f (0.87, 0.87, 0.86);
 glBegin(GL_TRIANGLES);
 glVertex3f(15+p, 23, 0.0);
 glVertex3f(16.5+p, 21, 0.0);
 glVertex3f(16.95+p, 21, 0.0);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(16.55+p,21);
 glVertex2f(16.55+p,18.6);
 glVertex2f(16.95+p,18.6);
 glVertex2f(16.95+p,21);
 glEnd();

 //front light

glutPostRedisplay();
glPushMatrix();
glColor3f(1, 1, 0);
glTranslatef(16.7+p, 18.2, 0.0);
glutSolidSphere(0.5 ,20,2);
glPopMatrix();
glEnd();

glutPostRedisplay();
glPushMatrix();
glColor3f(1, 1, 1);
glTranslatef(16.7+p, 17.3, 0.0);
glutSolidSphere(0.5 ,20,2);
glPopMatrix();
glEnd();
 //bus doroza line

 glColor3f (0.27, 0.33, 0.33);

glLineWidth(3);
glColor3f(0, 0, 0);
glBegin(GL_LINES);

glVertex2f(10.4+p, 21);glVertex2f(10.4+p, 16.6);
glVertex2f(9.1+p, 21);glVertex2f(9.1+p, 16.6);
glVertex2f(9.1+p, 16.67);glVertex2f(10.4+p, 16.67);
 glEnd();

glutPostRedisplay();
glPushMatrix();
glColor3f(0, 0, 0);
glTranslatef(5+p, 15, 0.0);
glutSolidSphere(1.5 ,100,2);
glPopMatrix();

glPushMatrix();
glColor3f(1, 1, 1);
glTranslatef(5+p, 15, 0.0);
glutSolidSphere(0.8 ,100,2);

glPopMatrix();



glPushMatrix();
glColor3f(0, 0, 0);
glTranslatef(13+p, 15, 0.0);
glutSolidSphere(1.5 ,100,2);

glPopMatrix();

glPushMatrix();
glColor3f(1, 1, 1);
glTranslatef(13+p, 15, 0.0);
glutSolidSphere(0.8 ,100,2);
glPopMatrix();

 glEnd();

 //bus light

 glColor3f(1,1,1);

glPointSize(22);
glBegin(GL_POINTS);
glVertex3f(0.6+p,16.3,0);

glEnd();

glColor3f(1,0,0);

glPointSize(22);
glBegin(GL_POINTS);
glVertex3f(0.6+p,17,0);

glEnd();

glColor3f(0.9, 0.94, 0.15);

glPointSize(22);
glBegin(GL_POINTS);
glVertex3f(0.6+p,17.7,0);

glEnd();

glColor3f(0.39, 0.16, 0.12);

glPointSize(22);
glBegin(GL_POINTS);
glVertex3f(0.6+p,18.4,0);

glEnd();

glColor3f(0.45, 0.31, 0.11);

glPointSize(22);
glBegin(GL_POINTS);
glVertex3f(0.6+p,19.49,0);

glEnd();

if(s>0.85){

//Star in Sky

glColor3f(0+star,0+star,0+star);
glutPostRedisplay();

glPushMatrix();
glTranslatef(50, 76, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(40, 78, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(30, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(60, 76, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(63, 77.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(53, 78, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(20, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(17, 79, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(5, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(7, 78, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(95, 78, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(90, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(85, 77.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(80, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(75, 78.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(70, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(65, 78, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(60, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(55, 78.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(50, 77.7, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(45, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(41, 78.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(37, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(33, 75, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(28, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(5, 70, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(7, 73, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();


glPushMatrix();
glTranslatef(28, 73.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(15, 71, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(17, 74, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(19, 70, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(21, 72.5, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(23, 71, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(25, 70, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(27, 72, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(29, 73, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(31, 74, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(2, 70, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(3, 74, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(4, 71, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(1, 67, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(1, 77, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glPushMatrix();
glTranslatef(5, 68, 0.0);
glutSolidSphere(0.2 ,100,2);
glPopMatrix();

glEnd();
}

glFlush ();
}
void init (void)
{

glClearColor (0.0, 0.0, 0.0, 0.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0, 100, 0.0, 80, -10.0, 10.0);
}



int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (1800, 1080);
glutInitWindowPosition (100, 100);
glutCreateWindow ("191-15-2481   191-15-2714");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
