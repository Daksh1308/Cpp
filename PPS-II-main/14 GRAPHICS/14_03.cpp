/* Write OpenGL programs to draw torus. */

#include <GL/glut.h>
const int WIDTH = 800;
const int HEIGHT = 600;
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60.0, (double)WIDTH / (double)HEIGHT, 1.0, 100.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(0.0, 0.0, 5.0,
            0.0, 0.0, 0.0,
            0.0, 1.0, 0.0);
  glColor3f(1.0, 1.0, 1.0);
  glutWireTorus(0.5, 1.5, 20, 20);
  glutSwapBuffers();
}
void reshape(int w, int h) {glViewport(0, 0, w, h);}
int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(WIDTH, HEIGHT);
  glutCreateWindow("Torus Example");
  glClearColor(0.0, 0.0, 0.0, 0.0);
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutMainLoop();
  return 0;
}