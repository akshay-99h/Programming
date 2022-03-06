#include <GLUT/GLUT.h>

void render(void);

int main(int argc, char **argv) {
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DEPTH  |  GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100 , 100);
    glutInitWindowSize(640,480);
    glutInitCreateWindow("Hello Akshay!!!");
    glutInitDisplayFunc(render);
    glutInitMainLoop();
}
void render(void){
    glClear
}
