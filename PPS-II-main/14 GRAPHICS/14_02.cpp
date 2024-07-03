/* Write OpenGL programs to draw tetrahedron. */

#include <GL/glut.h>
#include <math.h>
const int WIDTH = 800;
const int HEIGHT = 600;
void display()
{
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60.0, (double)WIDTH / (double)HEIGHT, 1.0, 100.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  gluLookAt(0.0, 0.0, 5.0,
            0.0, 0.0, 0.0,
            0.0, 1.0, 0.0);
  GLfloat vertices[][3] = {
      {-1.0, -1.0, -1.0},
      {1.0, -1.0, -1.0},
      {0.0, 1.0, 0.0},
      {0.0, -1.0, 1.0}
  };
  GLint faces[][3] = {
      {0, 1, 2},
      {1, 3, 2},
      {3, 0, 2},
      {0, 3, 1}
  };
  glBegin(GL_TRIANGLES);
  for (int i = 0; i < 4; i++) {
      glColor3f(1.0, 1.0, 1.0);
      glVertex3fv(vertices[faces[i][0]]);
      glVertex3fv(vertices[faces[i][1]]);
      glVertex3fv(vertices[faces[i][2]]);
  }
  glEnd();
  glutSwapBuffers();
}
void reshape(int w, int h)
{
  glViewport(0, 0, w, h);
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Tetrahedron Example");
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}