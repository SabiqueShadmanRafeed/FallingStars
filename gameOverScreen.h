#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glu.h>
#include <GL/glut.h>

using  namespace std;

class GameOverScreen
{
public:
    char gameOverTxt[20]="GAME OVER";
    void drawText(const char *text, int length, float x, float y)
    {
        glMatrixMode(GL_PROJECTION);
        double *matrix = new double[20];
        glGetDoublev(GL_PROJECTION_MATRIX, matrix);
        glLoadIdentity();
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();
        glPushMatrix();
        glLoadIdentity();
        glRasterPos2f(x,y);
        for(int i=0; i<length; i++){
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, (int)text[i]);
        }
        glPopMatrix();
        glMatrixMode(GL_PROJECTION);
        glLoadMatrixd(matrix);
        glMatrixMode(GL_MODELVIEW);

    }
    void drawGameOverScreen() {
        glPushMatrix();
            glEnable(GL_COLOR_MATERIAL);
            glEnable(GL_LINE_SMOOTH);
            glTranslatef(-1.3,0,z);
            drawText(gameOverTxt, 20,0,0);
        glPopMatrix();
    }

};


