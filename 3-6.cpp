#include<iostream>
#include <Windows.h>
#include <ctime>
char fooddrop(char area);
using namespace std;

int main() {
	while (1) {
		cout << "Desert = " << fooddrop('d') << endl;
		cout << "Forest = " << fooddrop('f') << endl;
		system("pause");
	}
}
char fooddrop(char area) {

	if (area == 'f') {
		int map = rand() % 2 + 1;
		if (map == 1)
			return 'm';
		else
			return 'b';
	}
	if (area == 'd') {
		int map = rand() % 100 + 1;
		if (map < 20)
			return 'b';
		if (map < 60)
			return 'f';
		else
			return 'c';
	}
}