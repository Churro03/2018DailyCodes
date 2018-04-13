#include <iostream>
#include <ctime>

using namespace std;

char diaster();

int main() {
	srand(time(NULL));
	 
	while (1) {
		cout<< diaster();
		system("pause");
	}
}

char diaster() {
	int buriteo = rand() % 100;
	if (buriteo < 10) {
		return 'f';
	}
	else if (10 < buriteo < 25) {
		return 'r';
	}
	else if (25 < buriteo < 37) {
		return 'a';
	}
	else if (37 < buriteo < 40) {
		return 'm';
	}
	else
		return 'n';
}