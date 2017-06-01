#include<stdlib.h>
#include<GL/GLUT.H>
#include<math.h>
int i, k;

void drawCircle(GLfloat x, GLfloat y, GLfloat radius)   //circle
{
	int i;
	glLineWidth(5.0);
	glBegin(GL_POLYGON);
	for (i = 0; i <= 360; i = i + 10)
	{
		glVertex2f(x + (radius * cos(i * 3.14 / 180)), y + (radius * sin(i * 3.14 / 180)));
	}
	glEnd();
}

void DrawText(char * str, int x, int y, int z)
{
	char *c;
	glPushMatrix();
	glTranslated(x, y, z);
	glScaled(0.5, 0.5, 0);

	for (c = str; *c != '\0'; c++)
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
	glPopMatrix();
	glFlush();
}

void DrawText1(char * str, int x, int y, int z)
{
	char *c;
	glPushMatrix();
	glLineWidth(1.0);
	glTranslated(x, y, z);
	glScaled(0.4, 0.4, 0);
	for (c = str; *c != '\0'; c++)
		glutStrokeCharacter(GLUT_STROKE_ROMAN, *c);
	glPopMatrix();
	glFlush();
}

void man()
{

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);//pant
	glVertex2f(190, 240);
	glVertex2f(190, 150);
	glVertex2f(205, 150);
	glVertex2f(210, 200);
	glVertex2f(210, 240);
	glEnd();
	glBegin(GL_POLYGON);//pant
	glVertex2f(210, 240);
	glVertex2f(210, 200);
	glVertex2f(215, 150);
	glVertex2f(230, 150);
	glVertex2f(230, 240);
	glEnd();
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);//shirt left
	glVertex2f(185, 225);
	glVertex2f(205, 225);
	glVertex2f(210, 230);
	glVertex2f(210, 300);
	glVertex2f(190, 287.5);
	glEnd();
	glBegin(GL_POLYGON);//shirt left
	glVertex2f(210, 300);
	glVertex2f(180, 295);
	glVertex2f(180, 262.75);
	glVertex2f(190, 250);
	glEnd();
	glBegin(GL_POLYGON);//shirt right
	glVertex2f(215, 225);
	glVertex2f(210, 230);
	glVertex2f(210, 300);
	glVertex2f(230, 287.5);
	glVertex2f(235, 225);
	glEnd();
	glBegin(GL_POLYGON);//shirt
	glVertex2f(210, 300);
	glVertex2f(240, 295);
	glVertex2f(240, 262.75);
	glVertex2f(230, 250);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);//head
	drawCircle(210, 312.5, 17.5);
}

void man1()
{

	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_POLYGON);//pant
	glVertex2f(490, 340);
	glVertex2f(490, 250);
	glVertex2f(505, 250);
	glVertex2f(510, 300);
	glVertex2f(510, 340);
	glEnd();
	glBegin(GL_POLYGON);//pant
	glVertex2f(510, 340);
	glVertex2f(510, 300);
	glVertex2f(515, 250);
	glVertex2f(530, 250);
	glVertex2f(530, 340);
	glEnd();
	glColor3f(0.0, 1.0, 1.0);
	glBegin(GL_POLYGON);//shirt left
	glVertex2f(485, 325);
	glVertex2f(505, 325);
	glVertex2f(510, 330);
	glVertex2f(510, 400);
	glVertex2f(490, 387.5);
	glEnd();
	glBegin(GL_POLYGON);//shirt left
	glVertex2f(510, 400);
	glVertex2f(480, 395);
	glVertex2f(480, 362.75);
	glVertex2f(490, 350);
	glEnd();
	glBegin(GL_POLYGON);//shirt right
	glVertex2f(515, 325);
	glVertex2f(510, 330);
	glVertex2f(510, 400);
	glVertex2f(530, 387.5);
	glVertex2f(535, 325);
	glEnd();
	glBegin(GL_POLYGON);//shirt
	glVertex2f(510, 400);
	glVertex2f(540, 395);
	glVertex2f(540, 362.75);
	glVertex2f(530, 350);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);//head
	drawCircle(510, 412.5, 17.5);
}

void rightsideman()
{

	//person
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_POLYGON);//hair
	glVertex2f(1035, 381.25);
	glVertex2f(1010, 381.25);
	glVertex2f(1012, 356.25);
	glVertex2f(1020, 356.25);
	glVertex2f(1020, 362.5);
	glVertex2f(1015, 368.75);
	glVertex2f(1020, 368.75);
	glVertex2f(1020, 375);
	glVertex2f(1030, 375);
	glEnd();
	glColor3f(0.871, 0.722, 0.529);
	glBegin(GL_POLYGON);//face
	glVertex2f(1030, 375);
	glVertex2f(1030, 368.75);
	glVertex2f(1032, 362.5);
	glVertex2f(1030, 362.5);
	glVertex2f(1030, 356.5);
	glVertex2f(1020, 356.25);
	glEnd();
	glColor3f(0.502, 0.502, 0.502);
	glBegin(GL_QUADS);//shirt
	glVertex2f(1012, 350);
	glVertex2f(1012, 300);
	glVertex2f(1035, 300);
	glVertex2f(1030, 350);
	glEnd();
	glColor3f(0.663, 0.663, 0.663);
	glBegin(GL_QUADS);//shirt hand
	glVertex2f(1020, 343.75);
	glVertex2f(1020, 312.5);
	glVertex2f(1025, 312.5);
	glVertex2f(1025, 343.75);
	glEnd();
	glColor3f(0.871, 0.722, 0.529);//hand
	glBegin(GL_QUADS);
	glVertex2f(1020, 312.5);
	glVertex2f(1025, 312.5);
	glVertex2f(1025, 310);
	glVertex2f(1020, 310);
	glEnd();
	glColor3f(0.663, 0.663, 0.663);//left leg
	glBegin(GL_QUADS);
	glVertex2f(1030, 300);
	glVertex2f(1030, 250);
	glVertex2f(1020, 250);
	glVertex2f(1020, 300);
	glEnd();
	glColor3f(0.502, 0.502, 0.502);//rightleg
	glBegin(GL_QUADS);
	glVertex2f(1020, 300);
	glVertex2f(1015, 300);
	glVertex2f(1012, 257);
	glVertex2f(1020, 257);
	glEnd();
}

void stars()
{
	glColor3f(1.0, 1.0, 1.0);
	glPointSize(0.5);
	glBegin(GL_POINTS);
	glVertex2i(10, 20);
	glVertex2i(20, 100);
	glVertex2i(30, 10);
	glVertex2i(15, 150);
	glVertex2i(17, 80);
	glVertex2i(200, 200);
	glVertex2i(55, 33);
	glVertex2i(400, 300);
	glVertex2i(330, 110);
	glVertex2i(125, 63);
	glVertex2i(63, 125);
	glVertex2i(20, 10);
	glVertex2i(110, 330);
	glVertex2i(440, 430);
	glVertex2i(32, 65);
	glVertex2i(110, 440);
	glVertex2i(210, 230);
	glVertex2i(390, 490);
	glVertex2i(12, 90);
	glVertex2i(400, 322);
	glVertex2i(420, 366);
	glVertex2i(455, 400);
	glVertex2i(20, 20);
	glVertex2i(111, 120);
	glVertex2i(401, 200);
	glVertex2i(230, 30);
	glVertex2i(220, 20);
	glVertex2i(122, 378);
	glVertex2i(133, 340);
	glVertex2i(345, 420);
	glVertex2i(130, 360);
	glVertex2i(333, 120);
	glVertex2i(250, 22);
	glVertex2i(242, 11);
	glVertex2i(280, 332);
	glVertex2i(233, 40);
	glVertex2i(210, 418);
	glVertex2i(256, 12);
	glVertex2i(288, 232);
	glVertex2i(247, 36);
	glVertex2i(229, 342);
	glVertex2i(257, 47);
	glVertex2i(290, 63);
	glVertex2i(232, 72);
	glVertex2i(243, 143);
	glVertex2i(100, 200);
	glVertex2i(90, 250);
	glVertex2i(80, 225);
	glVertex2i(50, 333);
	glVertex2i(60, 350);
	glVertex2i(243, 143);
	glVertex2i(243, 143);
	glVertex2i(1366, 765);
	glVertex2i(1351, 753);
	glVertex2i(1220, 420);
	glVertex2i(520, 700);
	glVertex2i(630, 510);
	glVertex2i(815, 450);
	glVertex2i(917, 480);
	glVertex2i(1200, 200);
	glVertex2i(555, 433);
	glVertex2i(400, 300);
	glVertex2i(1330, 110);
	glVertex2i(1125, 363);
	glVertex2i(663, 125);
	glVertex2i(200, 110);
	glVertex2i(1100, 630);
	glVertex2i(840, 730);
	glVertex2i(640, 650);
	glVertex2i(1100, 440);
	glVertex2i(1210, 230);
	glVertex2i(990, 490);
	glVertex2i(912, 90);
	glVertex2i(800, 322);
	glVertex2i(820, 366);
	glVertex2i(855, 400);
	glVertex2i(450, 620);
	glVertex2i(1110, 520);
	glVertex2i(4010, 700);
	glVertex2i(730, 130);
	glVertex2i(1220, 20);
	glVertex2i(1122, 378);
	glVertex2i(833, 340);
	glVertex2i(935, 420);
	glVertex2i(610, 360);
	glVertex2i(733, 120);
	glVertex2i(550, 22);
	glVertex2i(742, 11);
	glVertex2i(980, 332);
	glVertex2i(233, 640);
	glVertex2i(210, 518);
	glVertex2i(256, 712);
	glVertex2i(288, 632);
	glVertex2i(247, 536);
	glVertex2i(229, 442);
	glVertex2i(257, 647);
	glVertex2i(290, 463);
	glVertex2i(232, 472);
	glVertex2i(243, 543);
	glVertex2i(100, 400);
	glVertex2i(900, 550);
	glVertex2i(800, 725);
	glVertex2i(500, 333);
	glVertex2i(600, 350);
	glVertex2i(543, 143);
	glVertex2i(1336, 70);
	glVertex2i(1110, 620);
	glVertex2i(1120, 6100);
	glVertex2i(730, 710);
	glVertex2i(715, 750);
	glVertex2i(717, 780);
	glVertex2i(700, 700);
	glVertex2i(555, 533);
	glVertex2i(300, 600);
	glVertex2i(833, 310);
	glVertex2i(725, 363);
	glVertex2i(663, 125);
	glVertex2i(620, 610);
	glVertex2i(810, 730);
	glVertex2i(740, 730);
	glVertex2i(532, 565);
	glVertex2i(610, 540);
	glVertex2i(610, 630);
	glVertex2i(370, 690);
	glVertex2i(712, 690);
	glVertex2i(700, 622);
	glVertex2i(460, 666);
	glVertex2i(450, 500);
	glVertex2i(620, 620);
	glVertex2i(111, 720);
	glVertex2i(401, 600);
	glVertex2i(230, 530);
	glVertex2i(220, 520);
	glVertex2i(122, 678);
	glVertex2i(133, 540);
	glVertex2i(345, 720);
	glVertex2i(130, 560);
	glVertex2i(333, 720);
	glVertex2i(250, 522);
	glVertex2i(242, 511);
	glVertex2i(280, 832);
	glVertex2i(233, 640);
	glVertex2i(210, 518);
	glVertex2i(256, 512);
	glVertex2i(288, 532);
	glVertex2i(247, 536);
	glVertex2i(229, 742);
	glVertex2i(257, 747);
	glVertex2i(290, 763);
	glVertex2i(232, 772);
	glVertex2i(243, 743);
	glVertex2i(100, 600);
	glVertex2i(90, 650);
	glVertex2i(580, 625);
	glVertex2i(650, 633);
	glVertex2i(760, 650);
	glVertex2i(643, 643);
	glVertex2i(843, 143);
	glVertex2i(766, 765);
	glVertex2i(651, 753);
	glVertex2i(620, 420);
	glVertex2i(570, 700);
	glVertex2i(730, 510);
	glVertex2i(915, 450);
	glVertex2i(677, 470);
	glVertex2i(720, 200);
	glVertex2i(565, 733);
	glVertex2i(400, 500);
	glVertex2i(530, 110);
	glVertex2i(925, 363);
	glVertex2i(569, 125);
	glVertex2i(670, 110);
	glVertex2i(850, 630);
	glVertex2i(540, 630);
	glVertex2i(740, 650);
	glVertex2i(700, 440);
	glVertex2i(610, 230);
	glVertex2i(690, 490);
	glVertex2i(412, 490);
	glVertex2i(800, 322);
	glVertex2i(620, 366);
	glVertex2i(859, 400);
	glVertex2i(490, 620);
	glVertex2i(910, 520);
	glVertex2i(610, 700);
	glVertex2i(830, 130);
	glVertex2i(1520, 20);
	glVertex2i(1022, 378);
	glVertex2i(733, 340);
	glVertex2i(935, 520);
	glVertex2i(610, 460);
	glVertex2i(733, 720);
	glVertex2i(550, 622);
	glVertex2i(742, 611);
	glVertex2i(980, 632);
	glVertex2i(733, 640);
	glVertex2i(710, 518);
	glVertex2i(756, 712);
	glVertex2i(988, 632);
	glVertex2i(947, 736);
	glVertex2i(829, 642);
	glVertex2i(827, 647);
	glVertex2i(1290, 463);
	glVertex2i(232, 722);
	glVertex2i(1243, 543);
	glVertex2i(1000, 400);
	glVertex2i(1000, 550);
	glVertex2i(700, 425);
	glVertex2i(500, 533);
	glVertex2i(600, 550);
	glVertex2i(743, 443);
	glVertex2i(1336, 70);
	glVertex2i(610, 20);
	glVertex2i(620, 100);
	glVertex2i(630, 10);
	glVertex2i(615, 150);
	glVertex2i(617, 80);
	glVertex2i(800, 200);
	glVertex2i(655, 33);
	glVertex2i(1000, 300);
	glVertex2i(930, 110);
	glVertex2i(725, 63);
	glVertex2i(663, 125);
	glVertex2i(620, 10);
	glVertex2i(710, 330);
	glVertex2i(1040, 430);
	glVertex2i(632, 65);
	glVertex2i(710, 440);
	glVertex2i(810, 230);
	glVertex2i(990, 490);
	glVertex2i(612, 90);
	glVertex2i(1000, 322);
	glVertex2i(1020, 366);
	glVertex2i(1055, 400);
	glVertex2i(620, 20);
	glVertex2i(711, 120);
	glVertex2i(1001, 200);
	glVertex2i(830, 30);
	glVertex2i(820, 20);
	glVertex2i(722, 378);
	glVertex2i(733, 340);
	glVertex2i(945, 420);
	glVertex2i(730, 360);
	glVertex2i(933, 120);
	glVertex2i(850, 22);
	glVertex2i(842, 11);
	glVertex2i(880, 332);
	glVertex2i(833, 40);
	glVertex2i(810, 418);
	glVertex2i(856, 12);
	glVertex2i(888, 232);
	glVertex2i(847, 36);
	glVertex2i(829, 342);
	glVertex2i(1257, 47);
	glVertex2i(1290, 63);
	glEnd();

}

void Satelite() {
	glPointSize(2.0);
	//right wing
	glColor3f(0.0, 0.9, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(650, 375);
	glVertex2f(590, 350);
	glVertex2f(580, 300);
	glVertex2f(640, 325);
	glEnd();
	//line strip for right wing
	glLineWidth(0.5);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(610, 356.25);
	glVertex2f(600, 306.25);
	glVertex2f(630, 368.75);
	glVertex2f(620, 318.75);
	glVertex2f(585, 325);
	glVertex2f(650, 350);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(580, 300);
	glVertex2f(615, 325);
	glVertex2f(540, 377.5);
	glVertex2f(500, 350);
	glEnd();
	glColor3f(1.0, 1.0, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(500, 350);
	glVertex2f(500, 312.5);
	glVertex2f(580, 262.5);
	glVertex2f(580, 300);
	glEnd();
	glColor3f(1.0, 0.9, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(580, 300);
	glVertex2f(580, 262.5);
	glVertex2f(615, 287.5);
	glVertex2f(615, 325);
	glEnd();
	//left wing
	glColor3f(0.0, 0.9, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(460, 300);
	glVertex2f(450, 250);
	glVertex2f(510, 275);
	glVertex2f(520, 325);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(515, 293.75);
	glVertex2f(525, 300);
	glVertex2f(525, 312.5);
	glVertex2f(505, 306.25);
	glEnd();
	//line strip left wing
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(0.37);
	glBegin(GL_LINES);
	glVertex2f(480, 306.25);
	glVertex2f(470, 256.25);
	glVertex2f(500, 318.5);
	glVertex2f(490, 262.5);
	glVertex2f(455, 275);
	glVertex2f(515, 300);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(600, 287.5);
	glVertex2f(600, 237.5);
	glVertex2f(640, 287.5);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(640, 287.5);
	glVertex2f(643, 275);
	glVertex2f(640, 262.5);
	glVertex2f(620, 237.5);
	glVertex2f(600, 237.5);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(630, 250);
	glVertex2f(632, 252);
	glVertex2f(642, 239.5);
	glVertex2f(640, 237.5);
	glEnd();
}

void Satelite0()
{
	glPointSize(2.0);
	//right wing
	glColor3f(0.0, 0.9, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(950, 375);
	glVertex2f(890, 350);
	glVertex2f(880, 300);
	glVertex2f(940, 325);
	glEnd();
	//line strip for right wing
	glLineWidth(0.5);
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(910, 356.25);
	glVertex2f(900, 306.25);
	glVertex2f(930, 368.75);
	glVertex2f(920, 318.75);
	glVertex2f(885, 325);
	glVertex2f(950, 350);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(880, 300);
	glVertex2f(915, 325);
	glVertex2f(840, 377.5);
	glVertex2f(800, 350);
	glEnd();
	glColor3f(1.0, 1.0, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(800, 350);
	glVertex2f(800, 312.5);
	glVertex2f(880, 262.5);
	glVertex2f(880, 300);
	glEnd();
	glColor3f(1.0, 0.9, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(880, 300);
	glVertex2f(880, 262.5);
	glVertex2f(915, 287.5);
	glVertex2f(915, 325);
	glEnd();
	//left wing
	glColor3f(0.0, 0.9, 0.9);
	glBegin(GL_QUADS);
	glVertex2f(760, 300);
	glVertex2f(750, 250);
	glVertex2f(810, 275);
	glVertex2f(820, 325);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(815, 293.75);
	glVertex2f(825, 300);
	glVertex2f(825, 312.5);
	glVertex2f(805, 306.25);
	glEnd();
	//line strip left wing
	glColor3f(0.0, 0.0, 0.0);
	glPointSize(0.37);
	glBegin(GL_LINES);
	glVertex2f(780, 306.25);
	glVertex2f(770, 256.25);
	glVertex2f(800, 318.5);
	glVertex2f(790, 262.5);
	glVertex2f(755, 275);
	glVertex2f(815, 300);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(900, 287.5);
	glVertex2f(900, 237.5);
	glVertex2f(940, 287.5);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	glVertex2f(940, 287.5);
	glVertex2f(943, 275);
	glVertex2f(940, 262.5);
	glVertex2f(920, 237.5);
	glVertex2f(900, 237.5);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(930, 250);
	glVertex2f(932, 252);
	glVertex2f(942, 239.5);
	glVertex2f(940, 237.5);
	glEnd();
}

void girl()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(630, 375);
	glVertex2f(650, 375);
	glVertex2f(660, 337.5);
	glVertex2f(620, 337.5);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(630, 337.5);
	glVertex2f(650, 337.5);
	glVertex2f(660, 325);
	glVertex2f(620, 325);
	glEnd();
	//biscuits color
	glColor3f(1.0, 0.92, 0.77);
	glBegin(GL_QUADS);
	glVertex2f(660, 325);
	glVertex2f(620, 325);
	glVertex2f(620, 275);
	glVertex2f(660, 275);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(660, 275);
	glVertex2f(670, 300);
	glVertex2f(660, 300);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(610, 300);
	glVertex2f(620, 300);
	glVertex2f(620, 275);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(620, 275);
	glVertex2f(620, 220);
	glVertex2f(625, 220);
	glVertex2f(625, 275);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(660, 220);
	glVertex2f(655, 220);
	glVertex2f(655, 275);
	glVertex2f(660, 275);
	glEnd();

	//PANT COLOR
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(630, 275);
	glVertex2f(630, 237.5);
	glVertex2f(635, 237.5);
	glVertex2f(640, 275);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(640, 275);
	glVertex2f(645, 237.5);
	glVertex2f(650, 237.5);
	glVertex2f(650, 275);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(630, 237.5);
	glVertex2f(635, 237.5);
	glVertex2f(635, 225);
	glVertex2f(630, 225);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);//
	glVertex2f(645, 237.5);
	glVertex2f(650, 237.5);
	glVertex2f(650, 225);
	glVertex2f(645, 225);
	glEnd();
}

void girl1()
{
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(730, 375);
	glVertex2f(750, 375);
	glVertex2f(760, 337.5);
	glVertex2f(720, 337.5);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(730, 337.5);
	glVertex2f(750, 337.5);
	glVertex2f(760, 325);
	glVertex2f(720, 325);
	glEnd();
	//biscuits color
	glColor3f(1.0, 0.92, 0.77);
	glBegin(GL_QUADS);
	glVertex2f(760, 325);
	glVertex2f(720, 325);
	glVertex2f(720, 275);
	glVertex2f(760, 275);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(760, 275);
	glVertex2f(770, 300);
	glVertex2f(760, 300);
	glEnd();
	glBegin(GL_TRIANGLES);
	glVertex2f(710, 300);
	glVertex2f(720, 300);
	glVertex2f(720, 275);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(720, 275);
	glVertex2f(720, 220);
	glVertex2f(725, 220);
	glVertex2f(725, 275);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(760, 220);
	glVertex2f(755, 220);
	glVertex2f(755, 275);
	glVertex2f(760, 275);
	glEnd();

	//PANT COLOR
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(730, 275);
	glVertex2f(730, 237.5);
	glVertex2f(735, 237.5);
	glVertex2f(740, 275);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(740, 275);
	glVertex2f(745, 237.5);
	glVertex2f(750, 237.5);
	glVertex2f(750, 275);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(730, 237.5);
	glVertex2f(735, 237.5);
	glVertex2f(735, 225);
	glVertex2f(730, 225);
	glEnd();
	glColor3f(0.0, 0.0, 0.0);
	glBegin(GL_QUADS);//
	glVertex2f(745, 237.5);
	glVertex2f(750, 237.5);
	glVertex2f(750, 225);
	glVertex2f(745, 225);
	glEnd();
}

void supercomp()
{
	//right side wall
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(1366, 768);
	glVertex2f(980, 768);
	glVertex2f(980, 300);
	glVertex2f(1366, 0);
	glEnd();

	//leftsidewall
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(0, 768);
	glVertex2f(310, 768);
	glVertex2f(310, 300);
	glVertex2f(0, 0);
	glEnd();

	//front
	glColor3f(1.0, 0.65, 0.31);
	glBegin(GL_QUADS);
	glVertex2f(310, 300);
	glVertex2f(310, 768);
	glVertex2f(980, 768);
	glVertex2f(980, 300);
	glEnd();

	//floor
	glColor3f(1.0, 0.2, 0.18);
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(310, 300);
	glVertex2f(980, 300);
	glVertex2f(1366, 0);
	glEnd();

	// board 
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(1040, 425);
	glVertex2f(1040, 350);
	glVertex2f(1120, 325);
	glVertex2f(1120, 400);
	glEnd();

	// board 2
	glColor3f(0.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(1240, 325);
	glVertex2f(1240, 250);
	glVertex2f(1320, 225);
	glVertex2f(1320, 300);
	glEnd();

	//up color grey
	glColor3f(0.0, 0.0, 0.8);
	glBegin(GL_QUADS);
	glVertex2f(480, 462.5);
	glVertex2f(480, 387.5);
	glVertex2f(490, 375);
	glVertex2f(490, 475);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(490, 375);
	glVertex2f(490, 475);
	glVertex2f(530, 487.5);
	glVertex2f(530, 362.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(530, 487.5);
	glVertex2f(530, 362.5);
	glVertex2f(570, 350);
	glVertex2f(570, 500);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(570, 350);
	glVertex2f(570, 500);
	glVertex2f(620, 500);
	glVertex2f(620, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(620, 500);
	glVertex2f(620, 350);
	glVertex2f(670, 350);
	glVertex2f(670, 500);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(670, 350);
	glVertex2f(670, 500);
	glVertex2f(720, 500);
	glVertex2f(720, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(720, 500);
	glVertex2f(720, 350);
	glVertex2f(760, 362.5);
	glVertex2f(760, 487.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(760, 362.5);
	glVertex2f(760, 487.5);
	glVertex2f(800, 475);
	glVertex2f(800, 375);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(800, 475);
	glVertex2f(800, 375);
	glVertex2f(810, 387.5);
	glVertex2f(810, 462.5);
	glEnd();
	//down color wooden brown
	glColor3f(0.87, 0.72, 0.53);
	glBegin(GL_QUADS);
	glVertex2f(480, 375);
	glVertex2f(480, 300);
	glVertex2f(500, 275);
	glVertex2f(500, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(500, 275);
	glVertex2f(500, 350);
	glVertex2f(540, 337.5);
	glVertex2f(540, 262.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(540, 337.5);
	glVertex2f(540, 262.5);
	glVertex2f(600, 250);
	glVertex2f(600, 325);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(600, 250);
	glVertex2f(600, 325);
	glVertex2f(690, 325);
	glVertex2f(690, 250);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(690, 325);
	glVertex2f(690, 250);
	glVertex2f(750, 262.5);
	glVertex2f(750, 337.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(750, 262.5);
	glVertex2f(750, 337.5);
	glVertex2f(790, 350);
	glVertex2f(790, 275);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(790, 350);
	glVertex2f(790, 275);
	glVertex2f(810, 300);
	glVertex2f(810, 375);
	glEnd();
	//middle color keyboard
	glColor3f(0.0, 0.5, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(490, 375);
	glVertex2f(480, 375);
	glVertex2f(500, 350);
	glVertex2f(530, 362.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(530, 362.5);
	glVertex2f(500, 350);
	glVertex2f(540, 337.5);
	glVertex2f(570, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(570, 350);
	glVertex2f(540, 337.5);
	glVertex2f(600, 325);
	glVertex2f(620, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(620, 350);
	glVertex2f(600, 325);
	glVertex2f(690, 325);
	glVertex2f(670, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(670, 350);
	glVertex2f(690, 325);
	glVertex2f(750, 337.5);
	glVertex2f(720, 350);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(720, 350);
	glVertex2f(750, 337.5);
	glVertex2f(790, 350);
	glVertex2f(760, 362.5);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(760, 362.5);
	glVertex2f(790, 350);
	glVertex2f(810, 375);
	glVertex2f(800, 375);
	glEnd();
	glLineWidth(2.0);
	//borders
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_LINES);
	glVertex2f(480, 462.5);
	glVertex2f(480, 387.5);
	glVertex2f(490, 375);
	glVertex2f(490, 475);
	glVertex2f(530, 487.5);
	glVertex2f(530, 362.5);
	glVertex2f(570, 350);
	glVertex2f(570, 500);
	glVertex2f(620, 500);
	glVertex2f(620, 350);
	glVertex2f(670, 350);
	glVertex2f(670, 500);
	glVertex2f(720, 500);
	glVertex2f(720, 350);
	glVertex2f(760, 362.5);
	glVertex2f(760, 487.5);
	glVertex2f(800, 475);
	glVertex2f(800, 375);
	glVertex2f(810, 387.5);
	glVertex2f(810, 462.5);
	//down border
	glVertex2f(480, 375);
	glVertex2f(480, 300);
	glVertex2f(500, 275);
	glVertex2f(500, 350);
	glVertex2f(540, 337.5);
	glVertex2f(540, 262.5);
	glVertex2f(600, 250);
	glVertex2f(600, 325);
	glVertex2f(690, 325);
	glVertex2f(690, 250);
	glVertex2f(750, 262.5);
	glVertex2f(750, 337.5);
	glVertex2f(790, 350);
	glVertex2f(790, 275);
	glVertex2f(810, 300);
	glVertex2f(810, 375);
	//middle border
	glVertex2f(490, 375);
	glVertex2f(480, 375);
	glVertex2f(500, 350);
	glVertex2f(530, 362.5);
	glVertex2f(570, 350);
	glVertex2f(540, 337.5);
	glVertex2f(600, 325);
	glVertex2f(620, 350);
	glVertex2f(670, 350);
	glVertex2f(690, 325);
	glVertex2f(750, 337.5);
	glVertex2f(720, 350);
	glVertex2f(760, 362.5);
	glVertex2f(790, 350);
	glVertex2f(810, 375);
	glVertex2f(800, 375);
	glVertex2f(630, 337.5);
	glVertex2f(650, 337.5);
	glVertex2f(660, 325);
	glVertex2f(620, 325);
	glEnd();
}

void rocket()
{
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(650, 500);
	glVertex2f(620, 425);
	glVertex2f(680, 425);
	glEnd();
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(620, 425);
	glVertex2f(680, 425);
	glVertex2f(680, 400);
	glVertex2f(620, 400);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(680, 400);
	glVertex2f(620, 400);
	glVertex2f(620, 375);
	glVertex2f(680, 375);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(620, 375);
	glVertex2f(680, 375);
	glVertex2f(680, 275);
	glVertex2f(620, 275);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(620, 275);
	glVertex2f(620, 350);
	glVertex2f(600, 325);
	glVertex2f(610, 250);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(680, 275);
	glVertex2f(680, 350);
	glVertex2f(700, 325);
	glVertex2f(690, 250);
	glEnd();
	glColor3f(1.000f, 0.647f, 0.000f);
	glBegin(GL_POLYGON);
	glVertex2f(620, 275);
	glVertex2f(610, 225);
	glVertex2f(630, 237.5);
	glVertex2f(620, 200);
	glVertex2f(650, 162.5);
	glVertex2f(680, 200);
	glVertex2f(680, 237.5);
	glVertex2f(690, 225);
	glVertex2f(680, 275);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(640, 275);
	glVertex2f(635, 237.5);
	glVertex2f(650, 212.5);
	glVertex2f(650, 275);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(650, 275);
	glVertex2f(650, 212.5);
	glVertex2f(665, 237.5);
	glVertex2f(660, 275);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(650, 250);
	glVertex2i(640, 325);
	glVertex2i(650, 350);
	glVertex2i(660, 325);
	glEnd();
}

void slide1() {
	glColor3f(0.8, 0.8, 0.8);
	DrawText1("USSR launched their first satellite becoming pioneer", 0, 500, 0);
	DrawText1("in space research. This was followed by ", 0, 400, 0);
	DrawText1("countries like USA and UK.", 0, 300, 0);
	glFlush();
}

void slide2() {
	glColor3f(0.8, 0.8, 0.8);
	DrawText1("Indian scientists, with their dedication and ", 0, 500, 0);
	DrawText1("extensive research towards the field made India ", 0, 400, 0);
	DrawText1("one among the leaders in Space Research.", 0, 300, 0);
	glFlush();
}

void slide3() {
	glColor3f(0.8, 0.8, 0.8);
	DrawText1("ISRO created history by launching PSLV-C37", 0, 600, 0);
	DrawText1("constant 2 series satellites that carried 104 ", 0, 500, 0);
	DrawText1("satellites at one go that included payloads of", 0, 400, 0);
	DrawText1("6 countries breaking Russia's record of launching", 0, 300, 0);
	DrawText1("37 satelites by DNEPR rocket.", 0, 200, 0);
	glFlush();
}

void slide4() {
	glColor3f(0, 0, 1);
	DrawText1("Want to take a look of ISRO?", 0, 400, 0);
	DrawText1("Press i", 500, 300, 0);
	glFlush();
}

void rocket0()
{
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(650, 00);
	glVertex2f(620, -75);
	glVertex2f(680, -75);
	glEnd();
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(620, -75);
	glVertex2f(680, -75);
	glVertex2f(680, -100);
	glVertex2f(620, -100);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(680, -100);
	glVertex2f(620, -100);
	glVertex2f(620, -125);
	glVertex2f(680, -125);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(620, -125);
	glVertex2f(680, -125);
	glVertex2f(680, -225);
	glVertex2f(620, -225);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(620, -225);
	glVertex2f(620, -150);
	glVertex2f(600, -175);
	glVertex2f(610, -250);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(680, -225);
	glVertex2f(680, -150);
	glVertex2f(700, -175);
	glVertex2f(690, -250);
	glEnd();
	glColor3f(1.000f, 0.647f, 0.000f);
	glBegin(GL_POLYGON);
	glVertex2f(620, -225);
	glVertex2f(610, -275);
	glVertex2f(630, -262.5);
	glVertex2f(620, -300);
	glVertex2f(650, -337.5);
	glVertex2f(680, -300);
	glVertex2f(680, -262.5);
	glVertex2f(690, -275);
	glVertex2f(680, -225);
	glEnd();
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(640, -225);
	glVertex2f(635, -262.5);
	glVertex2f(650, -287.5);
	glVertex2f(650, -225);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2f(650, -225);
	glVertex2f(650, -287.5);
	glVertex2f(665, -262.5);
	glVertex2f(660, -225);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(650, -250);
	glVertex2i(640, -175);
	glVertex2i(650, -150);
	glVertex2i(660, -175);
	glEnd();
}

void clouds()
{
	glColor3f(1, 1, 1);
	drawCircle(113, 645, 50);
	drawCircle(163, 645, 60);
	drawCircle(213, 645, 40);
	drawCircle(513, 675, 50);
	drawCircle(563, 675, 60);
	drawCircle(613, 675, 40);
	drawCircle(813, 645, 50);
	drawCircle(863, 645, 60);
	drawCircle(913, 645, 40);
	drawCircle(1113, 685, 50);
	drawCircle(1153, 685, 60);
	drawCircle(1213, 685, 40);
}

void grass() {
	glColor3f(0.43, 0.95, 0);
	drawCircle(108, 198, 60);
	drawCircle(178, 218, 70);
	drawCircle(248, 198, 60);
	drawCircle(708, 208, 60);
	drawCircle(778, 228, 70);
	drawCircle(828, 198, 60);
	drawCircle(1108, 198, 60);
	drawCircle(1178, 218, 70);
	drawCircle(1248, 198, 60);
}

void rocket1() {
	for (int i = 0; i < 1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.0, 0.75, 1.0);//sky
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glVertex2f(1366, 768);
		glVertex2f(0, 768);
		glEnd();

		grass();

		glColor3f(0.5, 0.25, 0.0);//soil
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(83, 218);
		glVertex2f(1283, 218);
		glVertex2f(1366, 0);
		glEnd();

		drawCircle(23, 88, 70);
		drawCircle(63, 128, 70);
		drawCircle(103, 168, 70);
		drawCircle(133, 168, 70);
		drawCircle(193, 168, 70);
		drawCircle(253, 168, 70);
		drawCircle(313, 168, 70);
		drawCircle(373, 168, 70);
		drawCircle(433, 168, 70);
		drawCircle(503, 168, 70);
		drawCircle(563, 168, 70);
		drawCircle(603, 168, 70);
		drawCircle(663, 168, 70);
		drawCircle(703, 168, 70);
		drawCircle(753, 168, 70);
		drawCircle(813, 168, 70);
		drawCircle(873, 168, 70);
		drawCircle(933, 168, 70);
		drawCircle(973, 168, 70);
		drawCircle(1043, 168, 70);
		drawCircle(1073, 168, 70);
		drawCircle(1143, 168, 70);
		drawCircle(1203, 168, 70);
		drawCircle(1253, 168, 70);
		drawCircle(1303, 168, 40);
		drawCircle(1333, 138, 30);
		drawCircle(1343, 128, 70);
		drawCircle(1363, 108, 70);

		glPushMatrix();
		glTranslatef(i, 0, 0);
		//clouds
		clouds();
		glPopMatrix();

		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(650, 500);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glEnd();
		glColor3f(0.5, 0.5, 0.5);
		glBegin(GL_QUADS);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glEnd();
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glVertex2f(620, 375);
		glVertex2f(680, 375);
		glEnd();
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(620, 375);
		glVertex2f(680, 375);
		glVertex2f(680, 275);
		glVertex2f(620, 275);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(620, 275);
		glVertex2f(620, 350);
		glVertex2f(600, 325);
		glVertex2f(610, 250);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(680, 275);
		glVertex2f(680, 350);
		glVertex2f(700, 325);
		glVertex2f(690, 250);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2i(650, 250);
		glVertex2i(640, 325);
		glVertex2i(650, 350);
		glVertex2i(660, 325);
		glEnd();

		glLineWidth(1.0);//stand
		glColor3f(0, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(350, 0);
		glVertex2f(350, 600);
		glVertex2f(350, 600);
		glVertex2f(400, 600);
		glVertex2f(400, 600);
		glVertex2f(400, 0);
		glVertex2f(350, 550);
		glVertex2f(400, 550);
		glVertex2f(350, 500);
		glVertex2f(400, 500);
		glVertex2f(350, 450);
		glVertex2f(400, 450);
		glVertex2f(350, 400);
		glVertex2f(400, 400);
		glVertex2f(350, 350);
		glVertex2f(400, 350);
		glVertex2f(350, 300);
		glVertex2f(400, 300);
		glVertex2f(350, 250);
		glVertex2f(400, 250);
		glVertex2f(350, 200);
		glVertex2f(400, 200);
		glVertex2f(350, 150);
		glVertex2f(400, 150);
		glVertex2f(350, 100);
		glVertex2f(400, 100);
		glVertex2f(350, 50);
		glVertex2f(400, 50);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glVertex2f(350, 600);
		glVertex2f(400, 550);
		glVertex2f(350, 500);
		glVertex2f(400, 450);
		glVertex2f(350, 400);
		glVertex2f(400, 350);
		glVertex2f(350, 300);
		glVertex2f(400, 250);
		glVertex2f(350, 200);
		glVertex2f(400, 150);
		glVertex2f(350, 100);
		glVertex2f(400, 50);
		glVertex2f(350, 0);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 600);
		glVertex2f(350, 550);
		glVertex2f(400, 500);
		glVertex2f(350, 450);
		glVertex2f(400, 400);
		glVertex2f(350, 350);
		glVertex2f(400, 300);
		glVertex2f(350, 250);
		glVertex2f(400, 200);
		glVertex2f(350, 150);
		glVertex2f(400, 100);
		glVertex2f(350, 50);
		glVertex2f(400, 0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(350, 450);
		glVertex2f(900, 450);
		glVertex2f(350, 425);
		glVertex2f(900, 425);
		glVertex2f(900, 450);
		glVertex2f(900, 425);
		glVertex2f(350, 300);
		glVertex2f(900, 300);
		glVertex2f(350, 325);
		glVertex2f(900, 325);
		glVertex2f(900, 300);
		glVertex2f(900, 325);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 325);
		glVertex2f(425, 300);
		glVertex2f(450, 325);
		glVertex2f(475, 300);
		glVertex2f(500, 325);
		glVertex2f(525, 300);
		glVertex2f(550, 325);
		glVertex2f(575, 300);
		glVertex2f(600, 325);
		glVertex2f(625, 300);
		glVertex2f(650, 325);
		glVertex2f(675, 300);
		glVertex2f(700, 325);
		glVertex2f(725, 300);
		glVertex2f(750, 325);
		glVertex2f(775, 300);
		glVertex2f(800, 325);
		glVertex2f(825, 300);
		glVertex2f(850, 325);
		glVertex2f(875, 300);
		glVertex2f(900, 325);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 300);
		glVertex2f(425, 325);
		glVertex2f(450, 300);
		glVertex2f(475, 325);
		glVertex2f(500, 300);
		glVertex2f(525, 325);
		glVertex2f(550, 300);
		glVertex2f(575, 325);
		glVertex2f(600, 300);
		glVertex2f(625, 325);
		glVertex2f(650, 300);
		glVertex2f(675, 325);
		glVertex2f(700, 300);
		glVertex2f(725, 325);
		glVertex2f(750, 300);
		glVertex2f(775, 325);
		glVertex2f(800, 300);
		glVertex2f(825, 325);
		glVertex2f(850, 300);
		glVertex2f(875, 325);
		glVertex2f(900, 300);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(425, 300);
		glVertex2f(425, 325);
		glVertex2f(450, 300);
		glVertex2f(450, 325);
		glVertex2f(475, 300);
		glVertex2f(475, 325);
		glVertex2f(500, 300);
		glVertex2f(500, 325);
		glVertex2f(525, 300);
		glVertex2f(525, 325);
		glVertex2f(550, 300);
		glVertex2f(550, 325);
		glVertex2f(575, 300);
		glVertex2f(575, 325);
		glVertex2f(600, 300);
		glVertex2f(600, 325);
		glVertex2f(625, 300);
		glVertex2f(625, 325);
		glVertex2f(650, 300);
		glVertex2f(650, 325);
		glVertex2f(675, 300);
		glVertex2f(675, 325);
		glVertex2f(700, 300);
		glVertex2f(700, 325);
		glVertex2f(725, 300);
		glVertex2f(725, 325);
		glVertex2f(750, 300);
		glVertex2f(750, 325);
		glVertex2f(775, 300);
		glVertex2f(775, 325);
		glVertex2f(800, 300);
		glVertex2f(800, 325);
		glVertex2f(825, 300);
		glVertex2f(825, 325);
		glVertex2f(850, 300);
		glVertex2f(850, 325);
		glVertex2f(875, 300);
		glVertex2f(875, 325);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 425);
		glVertex2f(425, 450);
		glVertex2f(450, 425);
		glVertex2f(475, 450);
		glVertex2f(500, 425);
		glVertex2f(525, 450);
		glVertex2f(550, 425);
		glVertex2f(575, 450);
		glVertex2f(600, 425);
		glVertex2f(625, 450);
		glVertex2f(650, 425);
		glVertex2f(675, 450);
		glVertex2f(700, 425);
		glVertex2f(725, 450);
		glVertex2f(750, 425);
		glVertex2f(775, 450);
		glVertex2f(800, 425);
		glVertex2f(825, 450);
		glVertex2f(850, 425);
		glVertex2f(875, 450);
		glVertex2f(900, 425);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(425, 425);
		glVertex2f(425, 450);
		glVertex2f(450, 425);
		glVertex2f(450, 450);
		glVertex2f(475, 425);
		glVertex2f(475, 450);
		glVertex2f(500, 425);
		glVertex2f(500, 450);
		glVertex2f(525, 425);
		glVertex2f(525, 450);
		glVertex2f(550, 425);
		glVertex2f(550, 450);
		glVertex2f(575, 425);
		glVertex2f(575, 450);
		glVertex2f(600, 425);
		glVertex2f(600, 450);
		glVertex2f(625, 425);
		glVertex2f(625, 450);
		glVertex2f(650, 425);
		glVertex2f(650, 450);
		glVertex2f(675, 425);
		glVertex2f(675, 450);
		glVertex2f(700, 425);
		glVertex2f(700, 450);
		glVertex2f(725, 425);
		glVertex2f(725, 450);
		glVertex2f(750, 425);
		glVertex2f(750, 450);
		glVertex2f(775, 425);
		glVertex2f(775, 450);
		glVertex2f(800, 425);
		glVertex2f(800, 450);
		glVertex2f(825, 425);
		glVertex2f(825, 450);
		glVertex2f(850, 425);
		glVertex2f(850, 450);
		glVertex2f(875, 425);
		glVertex2f(875, 450);
		glEnd();
		glFlush();
	}
	glColor3f(1.0, 0.0, 0.0);
	DrawText("To launch rocket : press L", 150, 650, 0);
	glFlush();
}

void rocket2() {
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.75, 1.0);//sky
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(1366, 0);
	glVertex2f(1366, 768);
	glVertex2f(0, 768);
	glEnd();

	grass();

	glColor3f(0.5, 0.25, 0.0);//soil
	glBegin(GL_QUADS);
	glVertex2f(0, 0);
	glVertex2f(83, 218);
	glVertex2f(1283, 218);
	glVertex2f(1366, 0);
	glEnd();

	drawCircle(23, 88, 70);
	drawCircle(63, 128, 70);
	drawCircle(103, 168, 70);
	drawCircle(133, 168, 70);
	drawCircle(193, 168, 70);
	drawCircle(253, 168, 70);
	drawCircle(313, 168, 70);
	drawCircle(373, 168, 70);
	drawCircle(433, 168, 70);
	drawCircle(503, 168, 70);
	drawCircle(563, 168, 70);
	drawCircle(603, 168, 70);
	drawCircle(663, 168, 70);
	drawCircle(703, 168, 70);
	drawCircle(753, 168, 70);
	drawCircle(813, 168, 70);
	drawCircle(873, 168, 70);
	drawCircle(933, 168, 70);
	drawCircle(973, 168, 70);
	drawCircle(1043, 168, 70);
	drawCircle(1073, 168, 70);
	drawCircle(1143, 168, 70);
	drawCircle(1203, 168, 70);
	drawCircle(1253, 168, 70);
	drawCircle(1303, 168, 40);
	drawCircle(1333, 138, 30);
	drawCircle(1343, 128, 70);
	drawCircle(1363, 108, 70);


	//clouds
	clouds();

	rocket();
	glLineWidth(1.0);//stand
	glColor3f(0, 0, 0);
	glBegin(GL_LINES);
	glVertex2f(350, 0);
	glVertex2f(350, 600);
	glVertex2f(350, 600);
	glVertex2f(400, 600);
	glVertex2f(400, 600);
	glVertex2f(400, 0);
	glVertex2f(350, 550);
	glVertex2f(400, 550);
	glVertex2f(350, 500);
	glVertex2f(400, 500);
	glVertex2f(350, 450);
	glVertex2f(400, 450);
	glVertex2f(350, 400);
	glVertex2f(400, 400);
	glVertex2f(350, 350);
	glVertex2f(400, 350);
	glVertex2f(350, 300);
	glVertex2f(400, 300);
	glVertex2f(350, 250);
	glVertex2f(400, 250);
	glVertex2f(350, 200);
	glVertex2f(400, 200);
	glVertex2f(350, 150);
	glVertex2f(400, 150);
	glVertex2f(350, 100);
	glVertex2f(400, 100);
	glVertex2f(350, 50);
	glVertex2f(400, 50);
	glVertex2f(0, 0);
	glVertex2f(1366, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(350, 600);
	glVertex2f(400, 550);
	glVertex2f(350, 500);
	glVertex2f(400, 450);
	glVertex2f(350, 400);
	glVertex2f(400, 350);
	glVertex2f(350, 300);
	glVertex2f(400, 250);
	glVertex2f(350, 200);
	glVertex2f(400, 150);
	glVertex2f(350, 100);
	glVertex2f(400, 50);
	glVertex2f(350, 0);
	glEnd();
	glBegin(GL_LINE_STRIP);
	glVertex2f(400, 600);
	glVertex2f(350, 550);
	glVertex2f(400, 500);
	glVertex2f(350, 450);
	glVertex2f(400, 400);
	glVertex2f(350, 350);
	glVertex2f(400, 300);
	glVertex2f(350, 250);
	glVertex2f(400, 200);
	glVertex2f(350, 150);
	glVertex2f(400, 100);
	glVertex2f(350, 50);
	glVertex2f(400, 0);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(350, 450);
	glVertex2f(900, 450);
	glVertex2f(350, 425);
	glVertex2f(900, 425);
	glVertex2f(900, 450);
	glVertex2f(900, 425);
	glVertex2f(350, 300);
	glVertex2f(900, 300);
	glVertex2f(350, 325);
	glVertex2f(900, 325);
	glVertex2f(900, 300);
	glVertex2f(900, 325);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(400, 325);
	glVertex2f(425, 300);
	glVertex2f(450, 325);
	glVertex2f(475, 300);
	glVertex2f(500, 325);
	glVertex2f(525, 300);
	glVertex2f(550, 325);
	glVertex2f(575, 300);
	glVertex2f(600, 325);
	glVertex2f(625, 300);
	glVertex2f(650, 325);
	glVertex2f(675, 300);
	glVertex2f(700, 325);
	glVertex2f(725, 300);
	glVertex2f(750, 325);
	glVertex2f(775, 300);
	glVertex2f(800, 325);
	glVertex2f(825, 300);
	glVertex2f(850, 325);
	glVertex2f(875, 300);
	glVertex2f(900, 325);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(400, 300);
	glVertex2f(425, 325);
	glVertex2f(450, 300);
	glVertex2f(475, 325);
	glVertex2f(500, 300);
	glVertex2f(525, 325);
	glVertex2f(550, 300);
	glVertex2f(575, 325);
	glVertex2f(600, 300);
	glVertex2f(625, 325);
	glVertex2f(650, 300);
	glVertex2f(675, 325);
	glVertex2f(700, 300);
	glVertex2f(725, 325);
	glVertex2f(750, 300);
	glVertex2f(775, 325);
	glVertex2f(800, 300);
	glVertex2f(825, 325);
	glVertex2f(850, 300);
	glVertex2f(875, 325);
	glVertex2f(900, 300);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(425, 300);
	glVertex2f(425, 325);
	glVertex2f(450, 300);
	glVertex2f(450, 325);
	glVertex2f(475, 300);
	glVertex2f(475, 325);
	glVertex2f(500, 300);
	glVertex2f(500, 325);
	glVertex2f(525, 300);
	glVertex2f(525, 325);
	glVertex2f(550, 300);
	glVertex2f(550, 325);
	glVertex2f(575, 300);
	glVertex2f(575, 325);
	glVertex2f(600, 300);
	glVertex2f(600, 325);
	glVertex2f(625, 300);
	glVertex2f(625, 325);
	glVertex2f(650, 300);
	glVertex2f(650, 325);
	glVertex2f(675, 300);
	glVertex2f(675, 325);
	glVertex2f(700, 300);
	glVertex2f(700, 325);
	glVertex2f(725, 300);
	glVertex2f(725, 325);
	glVertex2f(750, 300);
	glVertex2f(750, 325);
	glVertex2f(775, 300);
	glVertex2f(775, 325);
	glVertex2f(800, 300);
	glVertex2f(800, 325);
	glVertex2f(825, 300);
	glVertex2f(825, 325);
	glVertex2f(850, 300);
	glVertex2f(850, 325);
	glVertex2f(875, 300);
	glVertex2f(875, 325);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glVertex2f(400, 425);
	glVertex2f(425, 450);
	glVertex2f(450, 425);
	glVertex2f(475, 450);
	glVertex2f(500, 425);
	glVertex2f(525, 450);
	glVertex2f(550, 425);
	glVertex2f(575, 450);
	glVertex2f(600, 425);
	glVertex2f(625, 450);
	glVertex2f(650, 425);
	glVertex2f(675, 450);
	glVertex2f(700, 425);
	glVertex2f(725, 450);
	glVertex2f(750, 425);
	glVertex2f(775, 450);
	glVertex2f(800, 425);
	glVertex2f(825, 450);
	glVertex2f(850, 425);
	glVertex2f(875, 450);
	glVertex2f(900, 425);
	glEnd();

	glBegin(GL_LINES);
	glVertex2f(425, 425);
	glVertex2f(425, 450);
	glVertex2f(450, 425);
	glVertex2f(450, 450);
	glVertex2f(475, 425);
	glVertex2f(475, 450);
	glVertex2f(500, 425);
	glVertex2f(500, 450);
	glVertex2f(525, 425);
	glVertex2f(525, 450);
	glVertex2f(550, 425);
	glVertex2f(550, 450);
	glVertex2f(575, 425);
	glVertex2f(575, 450);
	glVertex2f(600, 425);
	glVertex2f(600, 450);
	glVertex2f(625, 425);
	glVertex2f(625, 450);
	glVertex2f(650, 425);
	glVertex2f(650, 450);
	glVertex2f(675, 425);
	glVertex2f(675, 450);
	glVertex2f(700, 425);
	glVertex2f(700, 450);
	glVertex2f(725, 425);
	glVertex2f(725, 450);
	glVertex2f(750, 425);
	glVertex2f(750, 450);
	glVertex2f(775, 425);
	glVertex2f(775, 450);
	glVertex2f(800, 425);
	glVertex2f(800, 450);
	glVertex2f(825, 425);
	glVertex2f(825, 450);
	glVertex2f(850, 425);
	glVertex2f(850, 450);
	glVertex2f(875, 425);
	glVertex2f(875, 450);
	glEnd();
}

void rocket3() {
	rocket2();
	DrawText("3", 703, 354, 0);
}

void rocket4() {
	rocket2();
	DrawText("2", 703, 354, 0);
}

void rocket5() {
	rocket2();
	DrawText("1", 703, 354, 0);
}

void rocket6() {
	for (int i = 0; i < 1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.0, 0.75, 1.0);//sky
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glVertex2f(1366, 768);
		glVertex2f(0, 768);
		glEnd();

		grass();

		glColor3f(0.5, 0.25, 0.0);//soil
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(83, 218);
		glVertex2f(1283, 218);
		glVertex2f(1366, 0);
		glEnd();

		drawCircle(23, 88, 70);
		drawCircle(63, 128, 70);
		drawCircle(103, 168, 70);
		drawCircle(133, 168, 70);
		drawCircle(193, 168, 70);
		drawCircle(253, 168, 70);
		drawCircle(313, 168, 70);
		drawCircle(373, 168, 70);
		drawCircle(433, 168, 70);
		drawCircle(503, 168, 70);
		drawCircle(563, 168, 70);
		drawCircle(603, 168, 70);
		drawCircle(663, 168, 70);
		drawCircle(703, 168, 70);
		drawCircle(753, 168, 70);
		drawCircle(813, 168, 70);
		drawCircle(873, 168, 70);
		drawCircle(933, 168, 70);
		drawCircle(973, 168, 70);
		drawCircle(1043, 168, 70);
		drawCircle(1073, 168, 70);
		drawCircle(1143, 168, 70);
		drawCircle(1203, 168, 70);
		drawCircle(1253, 168, 70);
		drawCircle(1303, 168, 40);
		drawCircle(1333, 138, 30);
		drawCircle(1343, 128, 70);
		drawCircle(1363, 108, 70);

		clouds();

		glPushMatrix();
		glTranslatef(0, i, 0);
		rocket();
		glPopMatrix();



		glLineWidth(1.0);//stand
		glColor3f(0, 0, 0);
		glBegin(GL_LINES);
		glVertex2f(350, 0);
		glVertex2f(350, 600);
		glVertex2f(350, 600);
		glVertex2f(400, 600);
		glVertex2f(400, 600);
		glVertex2f(400, 0);
		glVertex2f(350, 550);
		glVertex2f(400, 550);
		glVertex2f(350, 500);
		glVertex2f(400, 500);
		glVertex2f(350, 450);
		glVertex2f(400, 450);
		glVertex2f(350, 400);
		glVertex2f(400, 400);
		glVertex2f(350, 350);
		glVertex2f(400, 350);
		glVertex2f(350, 300);
		glVertex2f(400, 300);
		glVertex2f(350, 250);
		glVertex2f(400, 250);
		glVertex2f(350, 200);
		glVertex2f(400, 200);
		glVertex2f(350, 150);
		glVertex2f(400, 150);
		glVertex2f(350, 100);
		glVertex2f(400, 100);
		glVertex2f(350, 50);
		glVertex2f(400, 50);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glVertex2f(350, 600);
		glVertex2f(400, 550);
		glVertex2f(350, 500);
		glVertex2f(400, 450);
		glVertex2f(350, 400);
		glVertex2f(400, 350);
		glVertex2f(350, 300);
		glVertex2f(400, 250);
		glVertex2f(350, 200);
		glVertex2f(400, 150);
		glVertex2f(350, 100);
		glVertex2f(400, 50);
		glVertex2f(350, 0);
		glEnd();
		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 600);
		glVertex2f(350, 550);
		glVertex2f(400, 500);
		glVertex2f(350, 450);
		glVertex2f(400, 400);
		glVertex2f(350, 350);
		glVertex2f(400, 300);
		glVertex2f(350, 250);
		glVertex2f(400, 200);
		glVertex2f(350, 150);
		glVertex2f(400, 100);
		glVertex2f(350, 50);
		glVertex2f(400, 0);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(350, 450);
		glVertex2f(900, 450);
		glVertex2f(350, 425);
		glVertex2f(900, 425);
		glVertex2f(900, 450);
		glVertex2f(900, 425);
		glVertex2f(350, 300);
		glVertex2f(900, 300);
		glVertex2f(350, 325);
		glVertex2f(900, 325);
		glVertex2f(900, 300);
		glVertex2f(900, 325);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 325);
		glVertex2f(425, 300);
		glVertex2f(450, 325);
		glVertex2f(475, 300);
		glVertex2f(500, 325);
		glVertex2f(525, 300);
		glVertex2f(550, 325);
		glVertex2f(575, 300);
		glVertex2f(600, 325);
		glVertex2f(625, 300);
		glVertex2f(650, 325);
		glVertex2f(675, 300);
		glVertex2f(700, 325);
		glVertex2f(725, 300);
		glVertex2f(750, 325);
		glVertex2f(775, 300);
		glVertex2f(800, 325);
		glVertex2f(825, 300);
		glVertex2f(850, 325);
		glVertex2f(875, 300);
		glVertex2f(900, 325);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 300);
		glVertex2f(425, 325);
		glVertex2f(450, 300);
		glVertex2f(475, 325);
		glVertex2f(500, 300);
		glVertex2f(525, 325);
		glVertex2f(550, 300);
		glVertex2f(575, 325);
		glVertex2f(600, 300);
		glVertex2f(625, 325);
		glVertex2f(650, 300);
		glVertex2f(675, 325);
		glVertex2f(700, 300);
		glVertex2f(725, 325);
		glVertex2f(750, 300);
		glVertex2f(775, 325);
		glVertex2f(800, 300);
		glVertex2f(825, 325);
		glVertex2f(850, 300);
		glVertex2f(875, 325);
		glVertex2f(900, 300);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(425, 300);
		glVertex2f(425, 325);
		glVertex2f(450, 300);
		glVertex2f(450, 325);
		glVertex2f(475, 300);
		glVertex2f(475, 325);
		glVertex2f(500, 300);
		glVertex2f(500, 325);
		glVertex2f(525, 300);
		glVertex2f(525, 325);
		glVertex2f(550, 300);
		glVertex2f(550, 325);
		glVertex2f(575, 300);
		glVertex2f(575, 325);
		glVertex2f(600, 300);
		glVertex2f(600, 325);
		glVertex2f(625, 300);
		glVertex2f(625, 325);
		glVertex2f(650, 300);
		glVertex2f(650, 325);
		glVertex2f(675, 300);
		glVertex2f(675, 325);
		glVertex2f(700, 300);
		glVertex2f(700, 325);
		glVertex2f(725, 300);
		glVertex2f(725, 325);
		glVertex2f(750, 300);
		glVertex2f(750, 325);
		glVertex2f(775, 300);
		glVertex2f(775, 325);
		glVertex2f(800, 300);
		glVertex2f(800, 325);
		glVertex2f(825, 300);
		glVertex2f(825, 325);
		glVertex2f(850, 300);
		glVertex2f(850, 325);
		glVertex2f(875, 300);
		glVertex2f(875, 325);
		glEnd();

		glBegin(GL_LINE_STRIP);
		glVertex2f(400, 425);
		glVertex2f(425, 450);
		glVertex2f(450, 425);
		glVertex2f(475, 450);
		glVertex2f(500, 425);
		glVertex2f(525, 450);
		glVertex2f(550, 425);
		glVertex2f(575, 450);
		glVertex2f(600, 425);
		glVertex2f(625, 450);
		glVertex2f(650, 425);
		glVertex2f(675, 450);
		glVertex2f(700, 425);
		glVertex2f(725, 450);
		glVertex2f(750, 425);
		glVertex2f(775, 450);
		glVertex2f(800, 425);
		glVertex2f(825, 450);
		glVertex2f(850, 425);
		glVertex2f(875, 450);
		glVertex2f(900, 425);
		glEnd();

		glBegin(GL_LINES);
		glVertex2f(425, 425);
		glVertex2f(425, 450);
		glVertex2f(450, 425);
		glVertex2f(450, 450);
		glVertex2f(475, 425);
		glVertex2f(475, 450);
		glVertex2f(500, 425);
		glVertex2f(500, 450);
		glVertex2f(525, 425);
		glVertex2f(525, 450);
		glVertex2f(550, 425);
		glVertex2f(550, 450);
		glVertex2f(575, 425);
		glVertex2f(575, 450);
		glVertex2f(600, 425);
		glVertex2f(600, 450);
		glVertex2f(625, 425);
		glVertex2f(625, 450);
		glVertex2f(650, 425);
		glVertex2f(650, 450);
		glVertex2f(675, 425);
		glVertex2f(675, 450);
		glVertex2f(700, 425);
		glVertex2f(700, 450);
		glVertex2f(725, 425);
		glVertex2f(725, 450);
		glVertex2f(750, 425);
		glVertex2f(750, 450);
		glVertex2f(775, 425);
		glVertex2f(775, 450);
		glVertex2f(800, 425);
		glVertex2f(800, 450);
		glVertex2f(825, 425);
		glVertex2f(825, 450);
		glVertex2f(850, 425);
		glVertex2f(850, 450);
		glVertex2f(875, 425);
		glVertex2f(875, 450);
		glEnd();
		glFlush();
	}

}

void rocket7() {
	for (int i = 0; i < 2000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.0, 0.75, 1.0);//sky
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glVertex2f(1366, 768);
		glVertex2f(0, 768);
		glEnd();
		clouds();
		glPushMatrix();
		glTranslatef(0, i, 0);
		rocket0();
		glPopMatrix();
		glFlush();
	}
}

void rocket8() {
	for (int i = 0; i < 600; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.0, 0.0, 0.0);//space
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glVertex2f(1366, 768);
		glVertex2f(0, 768);
		glEnd();
		stars();
		glPushMatrix();
		glTranslatef(0, i, 0);
		rocket0();
		glPopMatrix();
		glFlush();
	}
}

void rocket9() {
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(650, 500);
	glVertex2f(620, 425);
	glVertex2f(680, 425);
	glEnd();
	glColor3f(0.5, 0.5, 0.5);
	glBegin(GL_QUADS);
	glVertex2f(620, 425);
	glVertex2f(680, 425);
	glVertex2f(680, 400);
	glVertex2f(620, 400);
	glEnd();
	glColor3f(0.0, 0.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(680, 400);
	glVertex2f(620, 400);
	glVertex2f(620, 375);
	glVertex2f(680, 375);
	glEnd();
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
	glVertex2f(620, 375);
	glVertex2f(680, 375);
	glVertex2f(680, 275);
	glVertex2f(620, 275);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(620, 275);
	glVertex2f(620, 350);
	glVertex2f(600, 325);
	glVertex2f(610, 250);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2f(680, 275);
	glVertex2f(680, 350);
	glVertex2f(700, 325);
	glVertex2f(690, 250);
	glEnd();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(650, 250);
	glVertex2i(640, 325);
	glVertex2i(650, 350);
	glVertex2i(660, 325);
	glEnd();
}

void rocket10() {
	for (int i = 0; i < 1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glPushMatrix();
		glTranslatef(0, i, 0);
		rocket9();
		glPopMatrix();
		glFlush();
	}
}
void rocket11() {
	for (int i = 0; i < 500; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glPushMatrix();
		glTranslatef(0, i, 0);
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_TRIANGLES);
		glVertex2f(650, 00);
		glVertex2f(620, -75);
		glVertex2f(680, -75);
		glEnd();
		glColor3f(0.5, 0.5, 0.5);
		glBegin(GL_QUADS);
		glVertex2f(620, -75);
		glVertex2f(680, -75);
		glVertex2f(680, -100);
		glVertex2f(620, -100);
		glEnd();
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(680, -100);
		glVertex2f(620, -100);
		glVertex2f(620, -125);
		glVertex2f(680, -125);
		glEnd();
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(620, -125);
		glVertex2f(680, -125);
		glVertex2f(680, -225);
		glVertex2f(620, -225);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(620, -225);
		glVertex2f(620, -150);
		glVertex2f(600, -175);
		glVertex2f(610, -250);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(680, -225);
		glVertex2f(680, -150);
		glVertex2f(700, -175);
		glVertex2f(690, -250);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2i(650, -250);
		glVertex2i(640, -175);
		glVertex2i(650, -150);
		glVertex2i(660, -175);
		glEnd();
		glPopMatrix();
		glFlush();
	}
}
void rocket12() {
	for (int i = 0; i <1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glColor3f(1, 0, 0);
		glBegin(GL_TRIANGLES);
		glVertex2f(650, 500);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glEnd();
		glColor3f(0.5, 0.5, 0.5);
		glBegin(GL_QUADS);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glEnd();
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glVertex2f(620, 375);
		glVertex2f(680, 375);
		glEnd();
		glPushMatrix();
		glTranslatef(i, -i, 0);
		glColor3f(1.0, 1.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(620, 375);
		glVertex2f(680, 375);
		glVertex2f(680, 275);
		glVertex2f(620, 275);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(620, 275);
		glVertex2f(620, 350);
		glVertex2f(600, 325);
		glVertex2f(610, 250);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2f(680, 275);
		glVertex2f(680, 350);
		glVertex2f(700, 325);
		glVertex2f(690, 250);
		glEnd();
		glColor3f(1.0, 0.0, 0.0);
		glBegin(GL_QUADS);
		glVertex2i(650, 250);
		glVertex2i(640, 325);
		glVertex2i(650, 350);
		glVertex2i(660, 325);
		glEnd();
		glPopMatrix();
		glFlush();
	}
}
void rocket13() {
	for (int i = 0; i <1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glColor3f(1, 0, 0);
		glBegin(GL_TRIANGLES);
		glVertex2f(650, 500);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glEnd();
		glColor3f(0.5, 0.5, 0.5);
		glBegin(GL_QUADS);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glEnd();
		glPushMatrix();
		glTranslatef(-i, -i, 0);
		glColor3f(0.0, 0.0, 1.0);
		glBegin(GL_QUADS);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glVertex2f(620, 375);
		glVertex2f(680, 375);
		glEnd();
		glPopMatrix();
		glFlush();
	}
}
void rocket14() {
	for (int i = 0; i <1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glColor3f(1, 0, 0);
		glBegin(GL_TRIANGLES);
		glVertex2f(650, 500);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glEnd();
		glPushMatrix();
		glTranslatef(0, -i, 0);
		glColor3f(0.5, 0.5, 0.5);
		glBegin(GL_QUADS);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glVertex2f(680, 400);
		glVertex2f(620, 400);
		glEnd();
		glPopMatrix();
		glFlush();
	}
}

void rocket15() {
	for (int i = 0; i <1000; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glPushMatrix();
		glTranslatef(0, i, 0);
		glColor3f(1, 0, 0);
		glBegin(GL_TRIANGLES);
		glVertex2f(650, 500);
		glVertex2f(620, 425);
		glVertex2f(680, 425);
		glEnd();
		glPopMatrix();
		glFlush();
	}
}

void rocket16() {
	for (i = 0; i < 200; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		stars();
		glColor3f(1, 0, 0);
		DrawText("Satelite placed", 400, 342, 0);
		glFlush();
	}
}

void moon() {
	glColor3f(1.0, 1.0, 1.0);
	drawCircle(800, 200, 40);//moon
}

void rocket17() {
	for (int i = 0; i <5000; i++) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		stars();
		glColor3f(0.0, 0.0, 0.0);
		float theta = i*3.14 / 180 / 10;
		glColor3f(0.0, 1.0, 0.0);
		drawCircle(683, -4, 230);//earth
		glColor3f(1.0, 0.49, 0.0);
		drawCircle(200, 800, 300);//sun
		glPushMatrix();
		glTranslatef(520 * cos(theta), 520 * sin(theta) - 400, 0);
		Satelite();
		Satelite0();
		moon();
		glPopMatrix();
		glFlush();
	}
}

void rocket18() {
	for (int i = 0; i < 300; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		glColor3f(0.0, 0.75, 1.0);//sky
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(1366, 0);
		glVertex2f(1366, 768);
		glVertex2f(0, 768);
		glEnd();

		grass();

		glColor3f(0.5, 0.25, 0.0);//soil
		glBegin(GL_QUADS);
		glVertex2f(0, 0);
		glVertex2f(83, 218);
		glVertex2f(1283, 218);
		glVertex2f(1366, 0);
		glEnd();

		drawCircle(23, 88, 70);
		drawCircle(63, 128, 70);
		drawCircle(103, 168, 70);
		drawCircle(133, 168, 70);
		drawCircle(193, 168, 70);
		drawCircle(253, 168, 70);
		drawCircle(313, 168, 70);
		drawCircle(373, 168, 70);
		drawCircle(433, 168, 70);
		drawCircle(503, 168, 70);
		drawCircle(563, 168, 70);
		drawCircle(603, 168, 70);
		drawCircle(663, 168, 70);
		drawCircle(703, 168, 70);
		drawCircle(753, 168, 70);
		drawCircle(813, 168, 70);
		drawCircle(873, 168, 70);
		drawCircle(933, 168, 70);
		drawCircle(973, 168, 70);
		drawCircle(1043, 168, 70);
		drawCircle(1073, 168, 70);
		drawCircle(1143, 168, 70);
		drawCircle(1203, 168, 70);
		drawCircle(1253, 168, 70);
		drawCircle(1303, 168, 40);
		drawCircle(1333, 138, 30);
		drawCircle(1343, 128, 70);
		drawCircle(1363, 108, 70);

		clouds();

		glColor3f(0.47, 0.53, 0.42);
		glBegin(GL_QUADS);
		glVertex2f(100, 100);
		glVertex2f(400, 100);
		glVertex2f(400, 125);
		glVertex2f(100, 125);
		glEnd();
		glColor3f(0.47, 0.53, 0.42);
		glBegin(GL_QUADS);
		glVertex2f(150, 125);
		glVertex2f(350, 125);
		glVertex2f(350, 150);
		glVertex2f(150, 150);
		glEnd();

		glColor3f(0.47, 0.53, 0.52);
		glBegin(GL_QUADS);
		glVertex2f(200, 150);
		glVertex2f(300, 150);
		glVertex2f(300, 175);
		glVertex2f(200, 175);
		glEnd();
		glColor3f(0, 0, 0);
		glLineWidth(2.0);
		glBegin(GL_LINES);
		glVertex2f(250, 175);
		glVertex2f(250, 650);
		glEnd();
		glPushMatrix();
		glTranslatef(0, i, 0);
		glColor3f(1, 0.6, 0.2);
		glBegin(GL_QUADS);
		glVertex2f(250, 300);
		glVertex2f(450, 300);
		glVertex2f(450, 350);
		glVertex2f(250, 350);
		glEnd();
		glColor3f(1, 1, 1);
		glBegin(GL_QUADS);
		glVertex2f(250, 250);
		glVertex2f(450, 250);
		glVertex2f(450, 300);
		glVertex2f(250, 300);
		glEnd();
		glColor3f(0, 0, 1);
		drawCircle(350, 275, 25);

		glColor3f(0.0745, 0.545, 0.032);
		glBegin(GL_QUADS);
		glVertex2f(250, 200);
		glVertex2f(450, 200);
		glVertex2f(450, 250);
		glVertex2f(250, 250);
		glEnd();
		glPopMatrix();
		glFlush();
	}
	glColor3f(0, 0, 1);
	glLineWidth(2);
	DrawText("MAKE IN", 950, 500, 0);
	DrawText("INDIA", 1000, 400, 0);
	DrawText("THANK YOU!", 900, 100, 0);
	glFlush();
}

void launch() {
	for (i = 0; i < 200; i++) {
		rocket3();
	}
	for (int i = 0; i < 200; i++) {
		rocket4();
	}
	for (i = 0; i < 200; i++) {
		rocket5();
	}
	rocket6();
	rocket7();
	rocket8();
	rocket9();
	rocket10();
	rocket11();
	rocket12();
	rocket13();
	rocket14();
	rocket15();
	rocket16();
	rocket17();
	rocket18();
}

void isro1()
{
	for (int i = 0; i < 100; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		supercomp();
		girl();
		rightsideman();
		DrawText("Indian Space", 400, 650, 0);
		DrawText("Research Organisation", 305, 550, 0);
		glPushMatrix();
		glTranslatef(3 * i, i, 0);
		man();
		glPopMatrix();
		glFlush();
	}
}

void isro2() {
	for (int i = 0; i < 100; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		supercomp();
		rightsideman();
		man1();
		DrawText("Indian Space", 400, 650, 0);
		DrawText("Research Organisation", 305, 550, 0);
		glPushMatrix();
		glTranslatef(i, 0, 0);
		girl();
		glPopMatrix();
		glFlush();
	}
}

void isro3() {
	for (int i = 0; i < 100; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		supercomp();
		man1();
		rightsideman();
		DrawText("Indian Space", 400, 650, 0);
		DrawText("Research Organisation", 305, 550, 0);
		glPushMatrix();
		glTranslatef(-i, 0, 0);
		girl1();
		glPopMatrix();
		glFlush();
	}
}

void isro4() {
	for (int i = 0; i <175; i++) {
		glClear(GL_COLOR_BUFFER_BIT);
		supercomp();
		man1();
		girl();
		DrawText("Indian Space", 400, 650, 0);
		DrawText("Research Organisation", 305, 550, 0);
		glPushMatrix();
		glTranslatef(i, -i, 0);
		rightsideman();
		glPopMatrix();
		glFlush();
	}
}

void isro() {
	isro1();
	isro2();
	isro3();
	isro4();
	glColor3f(0, 1, 0);
	DrawText("Lets peek to see rocket: press r", 0, 100, 0);

}

void satelite2() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	stars();
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	drawCircle(683, -4, 230);//earth
	glColor3f(1.0, 0.49, 0.0);
	drawCircle(200, 800, 300);//sun
	moon();
	Satelite0();
	for (int i = 0; i < 1000; i++) {
		slide1();
	}
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	stars();
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	drawCircle(683, -4, 230);//earth
	glColor3f(1.0, 0.49, 0.0);
	drawCircle(200, 800, 300);//sun
	moon();
	Satelite0();
	for (i = 0; i < 1000; i++) {
		slide2();
	}
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	stars();
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	drawCircle(683, -4, 230);//earth
	glColor3f(1.0, 0.49, 0.0);
	drawCircle(200, 800, 300);//sun
	moon();
	Satelite0();
	for (i = 0; i < 1000; i++) {
		slide3();
	}
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	stars();
	glColor3f(0.0, 0.0, 0.0);
	glColor3f(0.0, 1.0, 0.0);
	drawCircle(683, -4, 230);//earth
	glColor3f(1.0, 0.49, 0.0);
	drawCircle(200, 800, 300);//sun
	moon();
	Satelite0();
	for (i = 0; i < 1000; i++) {
		slide4();
	}
}

void Satelite1()
{
	for (int i = 0; i <5000; i++) {
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		stars();
		glColor3f(0.0, 0.0, 0.0);
		float theta = i*3.14 / 180 / 10;
		glColor3f(0.0, 1.0, 0.0);
		drawCircle(683, -4, 230);//earth
		glColor3f(1.0, 0.49, 0.0);
		drawCircle(200, 800, 300);//sun
		glPushMatrix();
		glTranslatef(520 * cos(theta), 520 * sin(theta) - 400, 0);
		Satelite();
		moon();
		glPopMatrix();
		glFlush();
	}
}

void Map()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 1);
	rocket();
	stars();
	glColor3f(0.0, 1.0, 0.0);
	DrawText("PSLV C37", 500, 650, 0);
	DrawText("SANDHYA VADHANA S", 0, 450, 0);
	DrawText("1DS14CS089", 0, 350, 0);
	DrawText("SHASHI PRAKASH", 0, 250, 0);
	DrawText("1DS14CS093", 0, 150, 0);
	DrawText("press e to enter", 100, 50, 0);
	glFlush();
}

void KeyBoard(unsigned char key, int x, int y)
{
	if (key == 'e') {
		Satelite1();
		satelite2();

	}
	if (key == 'i') {
		isro();
	}
	if (key == 'r')
	{
		rocket1();
	}
	if (key == 'l') {
		launch();
	}
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 1360, 0, 768);
	Map();
}

void reshape(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (w <= h)
		glOrtho(-2.0, 2.0, -2.0*(GLfloat)h / (GLfloat)w, 2.0*(GLfloat)h / (GLfloat)w, -10.0, 10.0);
	else
		glOrtho(-2.0*(GLfloat)w / (GLfloat)h, 2.0*(GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 10.0);
	glMatrixMode(GL_MODELVIEW);

}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1360, 768);
	glutCreateWindow("PSLV_37");
	glutDisplayFunc(display);
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_POINT_SMOOTH);
	glutKeyboardFunc(KeyBoard);
	glutMainLoop();
}

