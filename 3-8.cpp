#include <iostream>
#include<Windows.h>
#include <ctime>
using namespace std;


double damage(int x, int y, int z, double a, double n, double t, double g, double m, double b);

int main() {

	cout << "Damage is " << damage(9, 52, 40, 100, 2.0, 1.5, rand() % 85 + 101, 1.3, 2) << endl;
	system("pause");


}
double damage(int x, int y, int z, double a, double n, double t, double g, double m, double b) {
	int num;
	num = ((((((((2 * x) / 5) + 2) * (y * m) * z) / (a * b) / 50)) + 2) * t * n *g)/ 100;
	cout << "Damage is calculated to be " << num << endl;
	return num;
}