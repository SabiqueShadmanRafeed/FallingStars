#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include"nightSky.h"

using  namespace std;

NightSky nightSky;

class GameScreen
{
    void createGameScreen(){
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
        glLoadIdentity(); //Reset the drawing perspective
        //glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
        glTranslatef(0.0, 0.0, -7.0);//Move forward 7 unit
        glColor3f(1,1,1);
        nightSky.displaySky();

        //red ring
        glColor3f(1,0,0);
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(posx, posy, 0.0);
        glRotatef(55, 1.0, 0.0, 0.0);
        glutWireTorus(0.03,0.4,20,30);
        glPopMatrix();

        //falling objects
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dposx1, dposy1, 0.0);
            star.drawStar();
        glPopMatrix();

        //glColor3f(1.0,1,0);
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dposx2, dposy2, 0.0);
            star.drawStar();
        glPopMatrix();

        //glColor3f(1.0,1,0);
        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dposx3, dposy3, 0.0);
        star.drawStar();
        glPopMatrix();


        glPushMatrix(); //Save the current state of transformations
        glTranslatef(dLifeposx1, dLifeposy1, 0.0);
        star.drawStar();
        glColor3f(1,0,0);
        glutWireTorus(.01,.16,30,20);
        glPopMatrix();

        glutSwapBuffers();
    }
};
