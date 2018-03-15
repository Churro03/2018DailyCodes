#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "Cual es tu comida favorita?" << endl;
	string foods[5];
	bool taco = false;
	foods[0] = "taco";
	foods[1] = "hamburger";
	foods[2] = "tamales";
	foods[3] = "chimichangas";
	foods[4] = "frijoles";

	for (int i = 0; i < 5; i++)
		getline(cin, foods[i]);

	for (int i = 0; i < 5; i++)
		if (foods[i] == "taco")
			taco = true;
	if (taco == true)
		cout << "Very nice!" << endl;
	else {
		cout << "Somebody touch my spaghetti!" << endl;
	}
}