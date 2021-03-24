#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream> 

int red = 255;
int blue = 0;
void keyInput(unsigned char key, int x, int y){
    if(key == 'k'){
	red++;
	if(red>255){red=255;}
    }if(key == 'j'){
	red--;
	if(red<0){red=0;}
    }if(key == 'l'){
	blue++;
	if(blue>255){blue=255;}
    }if(key == 'h'){
	blue--;
	if(blue<0){blue=0;}
    }

} 

double truncateColor(int color){
    return (double)color/255.f;
}

void display(){
    
    glutKeyboardFunc(keyInput); 
    glClearColor(truncateColor(red), truncateColor(blue), 0.0f, 1.0f);
    glutPostRedisplay();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glFlush();
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
    	    
}
