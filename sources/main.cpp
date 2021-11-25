#include"CTurtle.hpp"
#include<iostream>

using namespace std;
using namespace cturtle;

/* ===================================================================
 * =============== Fungsi turtle yang dapat digunakan ================
 * ===================================================================
 *
 * turtle.goTo(0, 0) >> menempatkan turtle ke koordinat 0,0
 * turtle.penup() >> turtle mengangkat pena
 * turtle.pendown() >> turtle menurunkan pena
 * turtle.pencolor({"red"}) >> turtle memilih warna pena merah
 * turtle.forward(20) >> turtle bergerak maju sejauh 20
 * turtle.backward(30) >> turtle bergerak mundur sejauh 30
 * turtle.right(90) >> turtle berputar ke arah kanan sebesar 90 degree
 * turtle.left(45) >> turtle berputar ke arah kiri sebesar 45 degree
 */

int main() {
	// Jangan ubah bagian ini
	cturtle::TurtleScreen scr;
	scr.bgcolor({"white"});
	cturtle::Turtle turtle(scr);
	turtle.speed(TurtleSpeed::TS_SLOWEST);
    // Mulai program dari baris ini
	// Contoh menggambar rectangle
    turtle.pencolor({"red"});
	turtle.forward(200);
	turtle.right(90);
	turtle.forward(200);
	turtle.right(90);
	turtle.forward(200);
	turtle.right(90);
	turtle.forward(200);
    // Akhir program
	// Jangan modifikasi bagian ini
	scr.exitonclick();
	return 0;
}
