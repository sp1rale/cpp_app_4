#include <iostream>
using namespace std;

int main() {
	int number;
	cout << "Enter a six-digit number: ";
	cin >> number;

	if (number < 100000 || number > 999999) {
		cout << "Invalid number" << endl;
		return 1;
	}
	int digit1 = number / 100000;
	int digit2 = (number / 10000) % 10;
	int digit3 = (number / 1000) % 10;
	int digit4 = (number / 100) % 10;
	int digit5 = (number / 10) % 10;
	int digit6 = number % 10;
	system("cls");
	if (digit1 + digit2 + digit3 == digit4 + digit5 + digit6)
		cout << "Lucky number" << endl;
	else
		cout << "Not lucky number" << endl;

	return 0;
}