#include <iostream>
#include<Windows.h>
using namespace std;
void randcolor();


int main() {
	while (1) {
		randcolor();


	}


}
void randcolor()
{
	int i = rand() % 9 + 1;
	switch (i) {
	case 1:
		system("COLOR 1A");
		break;

	case 2:
		system("COLOR 2B");
		break;

	case 3:
		system("COLOR 3C");
		break;

	case 4:
		system("COLOR 4D");
		break;

	case 5:
		system("COLOR 5E");
		break;

	case 6:
		system("COLOR 6FB");
		break;

	case 7:
		system("COLOR 7B");
		break;

	case 8:
		system("COLOR 6C");
		break;


	}
}