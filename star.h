#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glut.h>


class Star
{
public:
    float _angle = 0.0;
    float _cameraAngle = 0.0;
    float _ang_tri = 0.0;

    void drawStar()
    {
        glPushMatrix();
            glRotatef(-_ang_tri,1.0, 0.0, 0.0);
			glColor4ub(255,215,0,0);
            glColor3f(1.000, 1.000, 0.000);//(R,G,B)
            glBegin(GL_POLYGON);
                glVertex3f(0.0, 0.0, 0.0);
                glVertex3f(0.16, 0.1, 0.0);
				//glColor3f(0.902, 0.902, 0.980);
                glVertex3f(0.05, 0.1, 0.0);
                glVertex3f(0.0, 0.23, 0.0);
				//glColor3f(0.878, 1.000, 1.000);
                glVertex3f(-0.05, 0.1, 0.0);
				//glColor3f(0.941, 0.973, 1.000);
                glVertex3f(-0.16, 0.1, 0.0);
                glVertex3f(-0.06, 0.06, 0.0);
                glVertex3f(-0.11, -0.08, 0.0);
				//glColor3f(1.000, 1.000, 0.878);
                glVertex3f(0.0, 0.0, 0.0);
                glVertex3f(0.11, -0.08, 0.0);
                glVertex3f(0.06, 0.06, 0.0);
            glEnd();
        glPopMatrix();
    }
	
	void drawComet()
	{
		glPushMatrix();
			glColor3f(1.000, 1.000, 1.000);
			glPointSize(2.0);
			glBegin(GL_POINTS);
				glVertex3f(0.0, 0.0, 0.0);			
			glEnd();
		glPopMatrix();
	}
		

    void StarUpdate()
    {
        _angle += 2.0f;
        if (_angle > 360) {
            _angle -= 360;
        }
        _ang_tri += 2.0f;
        if (_ang_tri > 360) {
            _ang_tri -= 360;
        }
    }
};








