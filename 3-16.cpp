#include<iostream>
using namespace std;
int main() {
	char input = 'A';
	int room = 1;
	while (input != 'b') {
		switch (room) {
		case 1:
			cout << "you are at vault 19's door, it opens" << endl;
			cout << "you see a elevator in front of you. You can only go forward(f)" << endl;
			cin >> input;
			if (input == 'f')
				room = 2;
		case 2:
			cout << "you are in the elevator 1 you can go forward (f) one more time or go down(d)" << endl;
			cin >> input;
			if (input == 'f')
				room = 3;
			if (input == 'd')
				room = 4;
		case 3:
			cout << "you are in the Medbay, you can only go back(b)" << endl;
			cin >> input;
			if (input == 'b')
				room = 2;
		case 4:
			cout << "you are at a scond elevator and you can go forward(f) or back up(u) or behind(b) or down(d)" << endl;
			cin >> input;
			if (input == 'f')
				room = 5;
			if (input == 'u')
				room = 2;
			if (input == 'b')
				room = 6;
			if (input == 'd')
				room = 7;
		case 5:
			cout << "you are at the Diner. You can only go back(b)" << endl;
			cin >> input;
			if (input == 'b')
				room = 3;
		case 6:
			cout << "you are the Power Generator, you can only go back(b)" << endl;
			cin >> input;
			if (input == 'b')
				room = 3;
		case 7:
			cout << "you are at the elevator 2 you can only go forward (f) or back(b)" << endl;
			cin >> input;
			if (input == 'f')
				room = 8;
			if (input = 'b')
				room = 3;
		case 8:
			cout << " you are at the water treatment center you can only go back(b) " << endl;
			cin >> input;
			if (input == 'b')
				room = 7;

			input = 'B';
			system("pause");
		}
	}
}