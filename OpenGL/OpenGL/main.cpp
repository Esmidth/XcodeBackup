#include <GLUT/glut.h>

void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    /*	glBegin(GL_POLYGON);
	    glColor3f(1.0,0.0,0.0);
     glVertex3f(-3.5,-3.5,0.0);
     glColor3f(0.0,1.0,0.0);
     glVertex3f(-3.5,3.5,0.0);
     glColor3f(1.0,0.0,1.0);
     glVertex3f(3.5,3.5,0.0);
     glEnd();*/
    //glutWireSphere(2,20,20);
    //    glMatrixMode(GL_MODELVIEW);
    //	glLoadIdentity();
    //    glTranslatef(0.0, 0.2, 0.0);
    //glutÖÐµÄ¶þ´ÎÇúÃæ
    //glutWireSphere(10,20,20);
    //glutWireTorus(3,10,20,20);
    glutWireTeapot(2);
    //glutWireOctahedron();
    
    
    glutSwapBuffers();
}

void init()
{
    glEnable(GL_DEPTH_TEST);
    //glDepthFunc(GL_LESS);
    //glCullFace(GL_BACK);//
    glClearColor(1.0,1.0,1.0,0.0);
    glColor3f(0.0,0.0,0.0);
    
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glOrtho(-1.0,1.0,-1.0,1.0,-1.0,5.0);
    
    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();
    glFrustum(-7.0,7.0,-6.0,6.0,5.0,13.0);
    //gluPerspective(90,1,1.0,50.0);
    
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt(0.0,0.0,8.0,0.0,0.0,0.0,0.0,1.0,0.0);
    glShadeModel(GL_SMOOTH);
}

void reshape(int w,int h)
{
    glViewport(0,0,500,500);
}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);                                   //GLUT³õÊ¼»¯
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);            //³õÊ¼»¯ÏÔÊ¾Ä£Ê½
    glutInitWindowPosition(50,50);                          //³õÊ¼»¯windows´°¿ÚÎ»ÖÃ
    glutInitWindowSize(500,500);                            //³õÊ¼»¯windows´°¿Ú³ß´ç
    glutCreateWindow("simple");                             //´´½¨´°¿Ú
    //glutReshapeFunc(reshape);
    glutDisplayFunc(myDisplay);                             //×¢²á»æÖÆº¯Êý
    init();
    glutMainLoop();                                         //ÏûÏ¢´¦ÀíÑ­»·
}
