//#define NDEBUG
#include <gl/glut.h>


void Initial(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //���ô��ڱ�����ɫΪ��ɫ
	glMatrixMode(GL_PROJECTION); //����ͶӰ����
	gluOrtho2D(0.0, 1100, 0.0, 800.0);
}
void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //�õ�ǰ����ɫ��䴰��
	glColor3f(1.0f, 0.0f, 0.0f); //���õ�ǰ�Ļ�ͼ��ɫΪ��ɫ
	//glRectf(50.0f, 100.0f, 150.0f, 50.0f); //����һ������

	//��
	glBegin(GL_LINE_STRIP);//��
	glVertex2i(140, 120);
	glVertex2i(180, 100);
	glVertex2i(180, 300);
	glVertex2i(70, 300);
	glVertex2i(70, 500);
	glVertex2i(180, 500);
	glVertex2i(180, 700);
	glVertex2i(70, 700);
	glEnd();
	glBegin(GL_LINE_STRIP);//   -
	glVertex2i(120, 400);
	glVertex2i(400, 400);
	glEnd();
	glBegin(GL_LINE_STRIP);//   |
	glVertex2i(250, 100);
	glVertex2i(250, 700);
	glVertex2i(250, 100);
	glVertex2i(300, 200);
	glEnd();
	glBegin(GL_LINE_STRIP);//Ʋ
	glVertex2i(250, 400);
	glVertex2i(375, 650);
	glEnd();
	glBegin(GL_LINE_STRIP);//��
	glVertex2i(250, 400);
	glVertex2i(375, 150);
	glEnd();

	//��
	glBegin(GL_LINE_STRIP);
	glVertex2i(480, 700);
	glVertex2i(480, 100);
	glVertex2i(900, 100);
	glVertex2i(900, 700);
	glVertex2i(480, 700);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(550, 550);
	glVertex2i(830, 550);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(550, 400);
	glVertex2i(830, 400);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(550, 250);
	glVertex2i(830, 250);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(690, 550);
	glVertex2i(690, 250);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2i(720, 320);
	glVertex2i(770, 270);
	glEnd();

	glFlush(); //�������е�OpenGL����
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //��ʼ�����ڵ���ʾģʽ
	glutInitWindowSize(400, 300); //���ô��ڵĳߴ�
	glutInitWindowPosition(100, 120); //���ô��ڵ�λ��
	glutCreateWindow("�Ź���"); //����һ����Ϊ���εĴ���
	glutDisplayFunc(Display); //���õ�ǰ���ڵ���ʾ�ص�����
	Initial(); //��ɴ��ڳ�ʼ��
	glutMainLoop(); //������GLUT�¼�����ѭ��
	return 0;
}