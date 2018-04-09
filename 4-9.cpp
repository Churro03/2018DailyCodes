#include <iostream>
#include <string>
#include <ctime>
using namespace std;



int main() {
	srand(time(NULL));
	int x = rand() % 8;
	int y = rand() % 8;

	string Colour[8] = { "Red", "Yellow", "Violet", "Blue", "Green", "Black", "White", "Indingo" };
	string BodyPart[8] { "Arms", "Legs", "Feet", "Head", "Fingers", "Hair", "Toes", "Balls" };

	while (1) {
		int x = rand() % 8;
		int y = rand() % 8;
		cout << BodyPart[y] << endl;
		cout << Colour[x] << endl;

		system("pause");
	}
}
