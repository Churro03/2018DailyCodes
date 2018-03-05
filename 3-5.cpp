#include <iostream>
#include <Windows.h>
using namespace std;

int annoying(int m, int n);

int main() {
	int num1, num2;
	cin >> num1;
	cin >> num2;

	cout<<annoying(num1, num2);
	system("pause");

	
}
int annoying(int m, int n) {

	for (int i = 1; i < m; i++) {
		for (int i = 1; i < n; i++)
			cout << "*";
		cout << endl;
	}

	Beep(100*n, 100*n);
	
	
	return m*n;
}

