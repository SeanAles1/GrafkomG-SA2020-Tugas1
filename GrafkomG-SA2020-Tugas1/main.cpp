#include <iostream>
#include <GL/freeglut.h>

void Rumah() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	//Rumput Samping n Belakang Rumah
	glColor3ub(154, 205, 50);
	glBegin(GL_POLYGON);

	glVertex2f(0, 100);
	glVertex2f(0, 250);
	glVertex2f(640, 250);
	glVertex2f(640, 100);
	glEnd();

	//Pagar Belakang
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(0, 100);
	glVertex2f(0, 75);
	glVertex2f(640, 75);
	glVertex2f(640, 100);


	glEnd();

	//Body_Rumah
	glColor3ub(255, 250, 250);
	glBegin(GL_POLYGON);

	glVertex2f(100, 120);
	glVertex2f(100, 220);
	glVertex2f(300, 220);
	glVertex2f(300, 120);
	glVertex2f(200, 70);

	glEnd();

	//Bottom_Rumah
	glColor3ub(238, 232, 170);
	glBegin(GL_POLYGON);

	glVertex2f(100, 215);
	glVertex2f(100, 240);
	glVertex2f(300, 240);
	glVertex2f(300, 215);

	glEnd();

	//Pintu
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(120, 190);
	glVertex2f(120, 240);
	glVertex2f(160, 240);
	glVertex2f(160, 190);

	glEnd();

	//Bagian_Pintu
	glColor3ub(0, 0, 0);
	glPointSize(4);
	glBegin(GL_POINTS);

	glVertex2f(158, 217.5);

	glEnd();

	//Hiasan_Pintu
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(125, 194);
	glVertex2f(125, 212.5);
	glVertex2f(155, 212.5);
	glVertex2f(155, 194);

	glEnd();

	//Hiasan_Pintu
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(125, 220);
	glVertex2f(125, 238);
	glVertex2f(155, 238);
	glVertex2f(155, 220);

	glEnd();

	//Atap Rumah

	glColor3ub(128, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(200, 70);
	glVertex2f(65, 137);
	glVertex2f(60, 127);
	glVertex2f(200, 55);
	glVertex2f(340, 127);
	glVertex2f(335, 137);

	glEnd();

	//Atap_Bagian_Atas_Kiri
	glColor3ub(231, 76, 60);
	glBegin(GL_POLYGON);

	glVertex2f(60, 127);
	glVertex2f(75, 67);
	glVertex2f(200, 10);
	glVertex2f(200, 55);

	glEnd();

	//Atap_Bagian_Atas_Kanan
	glColor3ub(231, 76, 60);
	glBegin(GL_POLYGON);

	glVertex2f(340, 127);
	glVertex2f(325, 67);
	glVertex2f(200, 10);
	glVertex2f(200, 55);

	glEnd();

	//Garis Putih Di Atap
	glColor3ub(254, 253, 253);
	glBegin(GL_LINES);

	glVertex2f(200, 10);
	glVertex2f(200, 55);

	glEnd();

	//Cerobong Asap

	glColor3ub(231, 76, 60);
	glBegin(GL_POLYGON);

	glVertex2f(275, 10);
	glVertex2f(275, 44);
	glVertex2f(300, 58);
	glVertex2f(300, 10);

	glEnd();

	//Cerobong Asap >> Putih

	glColor3ub(254, 253, 253);
	glBegin(GL_POLYGON);

	glVertex2f(270, 15);
	glVertex2f(270, 35);
	glVertex2f(305, 35);
	glVertex2f(305, 15);

	glEnd();

	//Jendela Rumah

	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(180, 120);
	glVertex2f(180, 150);
	glVertex2f(220, 150);
	glVertex2f(220, 120);

	glEnd();

	//Jendela Rumah Garis Vertical

	glColor3ub(249, 231, 159);
	glBegin(GL_LINES);

	glVertex2f(200.5, 120);
	glVertex2f(200.5, 151);


	glEnd();

	//Jendela Rumah Garis Horizontal
	glColor3ub(249, 231, 159);
	glBegin(GL_LINES);

	glVertex2f(180, 135);
	glVertex2f(220, 135);


	glEnd();

	//Tutup Jendela Kiri
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(160, 120);
	glVertex2f(160, 150);
	glVertex2f(180, 150);
	glVertex2f(180, 120);

	glEnd();
	//Tutup Jendela Kanan
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(220, 120);
	glVertex2f(220, 150);
	glVertex2f(240, 150);
	glVertex2f(240, 120);

	glEnd();

	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(164, 139);
	glVertex2f(164, 148);
	glVertex2f(178, 148);
	glVertex2f(178, 139);

	glEnd();

	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(164, 124);
	glVertex2f(164, 133);
	glVertex2f(178, 133);
	glVertex2f(178, 124);


	glEnd();

	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(224, 139);
	glVertex2f(224, 148);
	glVertex2f(238, 148);
	glVertex2f(238, 139);

	glEnd();

	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(224, 124);
	glVertex2f(224, 133);
	glVertex2f(238, 133);
	glVertex2f(238, 124);

	glEnd();

	//Bawah Jendela Rumah

	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(180, 150);
	glVertex2f(175, 157.5);
	glVertex2f(225, 157.5);
	glVertex2f(220, 150);

	glEnd();

	//Bawah Bawahnya Jendela Rumah
	glColor3ub(102, 51, 0);
	glBegin(GL_POLYGON);

	glVertex2f(175, 157.5);
	glVertex2f(177.5, 160);
	glVertex2f(222.5, 160);
	glVertex2f(225, 157.5);

	glEnd();

	//Jendela Rumah Bawah
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(212.5, 190);
	glVertex2f(212.5, 215);
	glVertex2f(242.5, 215);
	glVertex2f(242.5, 190);

	glEnd();

	//Tutup Jendela Kiri
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(197.5, 190);
	glVertex2f(197.5, 215);
	glVertex2f(212.5, 215);
	glVertex2f(212.5, 190);

	glEnd();

	//Tutup Jendela Kanan
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(242.5, 190);
	glVertex2f(242.5, 215);
	glVertex2f(257.5, 215);
	glVertex2f(257.5, 190);

	glEnd();
	//Jendela Rumah Garis Horizontal
	glColor3ub(254, 253, 253);
	glBegin(GL_LINES);

	glVertex2f(212.5, 202.5);
	glVertex2f(242.5, 202.5);

	glEnd();
	//Jendela Rumah Garis Veertical
	glColor3ub(254, 253, 253);
	glBegin(GL_LINES);

	glVertex2f(227.5, 190);
	glVertex2f(227.5, 215);

	glEnd();

	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(245, 192.5);
	glVertex2f(245, 200);
	glVertex2f(255, 200);
	glVertex2f(255, 192.5);

	glEnd();

	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(245, 205);
	glVertex2f(245, 212.5);
	glVertex2f(255, 212.5);
	glVertex2f(255, 205);

	glEnd();
	//Hiasan Jendela 
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(200, 192.5);
	glVertex2f(200, 200);
	glVertex2f(210, 200);
	glVertex2f(210, 192.5);

	glEnd();
	//Hiasan Jendela
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(200, 205);
	glVertex2f(200, 212.5);
	glVertex2f(210, 212.5);
	glVertex2f(210, 205);

	glEnd();

	//Jalan
	glColor3ub(119, 136, 153);
	glBegin(GL_POLYGON);

	glVertex2f(1, 340);
	glVertex2f(1, 450);
	glVertex2f(640, 450);
	glVertex2f(640, 340);

	glEnd();

	//Jalan Strip Putih >>> 1
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(40, 390);
	glVertex2f(40, 400);
	glVertex2f(100, 400);
	glVertex2f(100, 390);

	glEnd();

	//Jalan Strip Putih >>> 2
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(140, 390);
	glVertex2f(140, 400);
	glVertex2f(200, 400);
	glVertex2f(200, 390);

	glEnd();

	//Jalan Strip Putih >>> 3
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(240, 390);
	glVertex2f(240, 400);
	glVertex2f(300, 400);
	glVertex2f(300, 390);

	glEnd();

	//Jalan Strip Putih >>> 4
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(340, 390);
	glVertex2f(340, 400);
	glVertex2f(400, 400);
	glVertex2f(400, 390);

	glEnd();

	//Jalan Strip Putih >>> 5
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(440, 390);
	glVertex2f(440, 400);
	glVertex2f(500, 400);
	glVertex2f(500, 390);

	glEnd();

	//Jalan Strip Putih >>> 6
	glColor3ub(255, 215, 0);
	glBegin(GL_POLYGON);

	glVertex2f(540, 390);
	glVertex2f(540, 400);
	glVertex2f(600, 400);
	glVertex2f(600, 390);

	glEnd();

	// Rumput Depan Rumah
	glColor3ub(154, 205, 50);
	glBegin(GL_POLYGON);

	glVertex2f(0, 340);
	glVertex2f(0, 240);
	glVertex2f(640, 240);
	glVertex2f(640, 340);

	glEnd();

	//Rumput Sebelah Jalan
	glColor3ub(154, 205, 50);
	glBegin(GL_POLYGON);

	glVertex2f(1, 450);
	glVertex2f(1, 480);
	glVertex2f(640, 480);
	glVertex2f(640, 450);

	glEnd();

	//Pondasi Bendera
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(25, 255);
	glVertex2f(25, 285);
	glVertex2f(55, 285);
	glVertex2f(55, 255);

	glEnd();

	//Tiang Bendera
	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON);

	glVertex2f(37, 270);
	glVertex2f(37, 180);
	glVertex2f(42, 180);
	glVertex2f(42, 270);

	glEnd();

	//Bendera >> 1
	glColor3ub(255, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(42, 180);
	glVertex2f(42, 190);
	glVertex2f(67, 190);
	glVertex2f(67, 180);

	glEnd();

	//Bendera >> 2
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(42, 190);
	glVertex2f(42, 200);
	glVertex2f(67, 200);
	glVertex2f(67, 190);

	glEnd();

	//Bawah Pintu
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(115, 240);
	glVertex2f(115, 245);
	glVertex2f(165, 245);
	glVertex2f(165, 240);

	glEnd();

	//Pagar >> 1
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(231, 340);
	glVertex2f(231, 315);
	glVertex2f(640, 315);
	glVertex2f(640, 340);

	glEnd();
	//Pagar Kecil >> 1
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(229, 340);
	glVertex2f(229, 315);
	glVertex2f(219, 315);
	glVertex2f(219, 340);

	glEnd();

	//Pagar Kecil >> 2
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(171, 340);
	glVertex2f(171, 315);
	glVertex2f(181, 315);
	glVertex2f(181, 340);

	glEnd();

	//Pagar >> 2
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(169, 340);
	glVertex2f(169, 315);
	glVertex2f(0, 315);
	glVertex2f(0, 340);

	glEnd();
	//Pintu Pagar
	glColor3ub(255, 254, 254);
	glBegin(GL_POLYGON);

	glVertex2f(182, 337);
	glVertex2f(182, 320);
	glVertex2f(218, 320);
	glVertex2f(218, 337);

	glEnd();

	//Pegangan Pintu Pagar 
	glColor3ub(0, 0, 0);
	glBegin(GL_POINTS);

	glVertex2f(215, 328.5);

	glEnd();

	//Pondasi Rambu

	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON);

	glVertex2f(20, 458);
	glVertex2f(20, 473);
	glVertex2f(40, 473);
	glVertex2f(40, 458);


	glEnd();

	//Tiang Rambu

	glColor3ub(192, 192, 192);
	glBegin(GL_POLYGON);

	glVertex2f(28, 403);
	glVertex2f(28, 463);
	glVertex2f(32, 463);
	glVertex2f(32, 403);

	glEnd();


	//Papan Rambu
	glColor3ub(255, 255, 0);
	glBegin(GL_POLYGON);

	glVertex2f(15, 373);
	glVertex2f(15, 403);
	glVertex2f(45, 403);
	glVertex2f(45, 373);

	glEnd();

	//Garis Hitam Ujung Rambu
	glColor3ub(0, 0, 0);
	glBegin(GL_LINE_LOOP);

	glVertex2f(15, 373);
	glVertex2f(15, 403);
	glVertex2f(45, 403);
	glVertex2f(45, 373);

	glEnd();

	//Rambu >> 1
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(16, 372);
	glVertex2f(28, 388);
	glVertex2f(42, 388);
	glVertex2f(30, 372);

	glEnd();

	//Rambu >> 2
	glColor3ub(0, 0, 0);
	glBegin(GL_POLYGON);

	glVertex2f(28, 388);
	glVertex2f(16, 402);
	glVertex2f(30, 402);
	glVertex2f(42, 388);

	glEnd();

	//Batang Solid
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(540, 150);
	glVertex2f(540, 250);
	glVertex2f(500, 250);
	glVertex2f(500, 150);

	glEnd();

	//Batang Bawah Solid
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(500, 250);
	glVertex2f(490, 270);
	glVertex2f(550, 270);
	glVertex2f(540, 250);

	glEnd();

	//Batang >>> Pohon
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2f(500, 150);
	glVertex2f(500, 250);

	glEnd();

	//Batang >> Pohon2
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2f(540, 150);
	glVertex2f(540, 250);

	glEnd();

	//Batang Bawah >>> Pohon
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2f(500, 250);
	glVertex2f(490, 270);

	glEnd();

	//Batang Bawah >>> Pohon2
	glColor3ub(0, 0, 0);
	glBegin(GL_LINES);

	glVertex2f(550, 270);
	glVertex2f(540, 250);

	glEnd();


	//Daun >>> Pohon
	glColor3ub(0, 100, 0);
	glPointSize(4);
	glBegin(GL_POLYGON);

	glVertex2f(500, 150);
	glVertex2f(470, 130);
	glVertex2f(470, 90);
	glVertex2f(500, 70);
	glVertex2f(540, 70);
	glVertex2f(570, 90);
	glVertex2f(570, 130);
	glVertex2f(540, 150);

	glEnd();

	//Batang Menjalar Pohon
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(500, 150);
	glVertex2f(490, 130);
	glVertex2f(480, 130);
	glVertex2f(510, 150);

	glEnd();

	//Batang Menjalar Pohon2
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(515, 150);
	glVertex2f(515, 130);
	glVertex2f(525, 130);
	glVertex2f(525, 150);

	glEnd();

	//Batang Menjalar Pohon3
	glColor3ub(139, 69, 19);
	glBegin(GL_POLYGON);

	glVertex2f(530, 150);
	glVertex2f(561, 130);
	glVertex2f(551, 130);
	glVertex2f(540, 150);

	glEnd();

	glFlush();
}


int main(int argc, char** argv) {
	//Inisialisasi Program
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutCreateWindow("Rumah dan Sekitar");
	glutDisplayFunc(Rumah);
	gluOrtho2D(0, 640, 480, 0);
	//Selesai Inisialisasi
	glutMainLoop();
}