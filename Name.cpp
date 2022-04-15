//#define NDEBUG
#include <gl/glut.h>


void Initial(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); //设置窗口背景颜色为白色
	glMatrixMode(GL_PROJECTION); //设置投影参数
	gluOrtho2D(0.0, 1100, 0.0, 800.0);
}
void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT); //用当前背景色填充窗口
	glColor3f(1.0f, 0.0f, 0.0f); //设置当前的绘图颜色为红色
	//glRectf(50.0f, 100.0f, 150.0f, 50.0f); //绘制一个矩形

	//张
	glBegin(GL_LINE_STRIP);//弓
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
	glBegin(GL_LINE_STRIP);//撇
	glVertex2i(250, 400);
	glVertex2i(375, 650);
	glEnd();
	glBegin(GL_LINE_STRIP);//捺
	glVertex2i(250, 400);
	glVertex2i(375, 150);
	glEnd();

	//国
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

	glFlush(); //处理所有的OpenGL程序
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //初始化窗口的显示模式
	glutInitWindowSize(400, 300); //设置窗口的尺寸
	glutInitWindowPosition(100, 120); //设置窗口的位置
	glutCreateWindow("张国辉"); //创建一个名为矩形的窗口
	glutDisplayFunc(Display); //设置当前窗口的显示回调函数
	Initial(); //完成窗口初始化
	glutMainLoop(); //启动主GLUT事件处理循环
	return 0;
}