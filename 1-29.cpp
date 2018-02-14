#include<allegro5\allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<iostream>
using namespace std;


int main() {
	int input;
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();

	ALLEGRO_DISPLAY *gamewindow = al_create_display(900, 600);
	ALLEGRO_FONT *font = al_load_ttf_font("obama.ttf", 25, 0);
	
	al_clear_to_color(al_map_rgb(200, 50, 0));

	cout << "How old are you?" << endl;
	int age;
	cin >> age;

	

	al_draw_textf(font, al_map_rgb(70, 20, 100), 400, 400, ALLEGRO_ALIGN_CENTER, "happy %dth birthday", age);

	al_flip_display();

	al_rest(10);
	al_destroy_display(gamewindow);
}