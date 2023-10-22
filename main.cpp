#include <iostream>
using namespace std;

int main() {
	int n1, n2;
	cin >> n1 >> n2;
	if (n1 == n2)
		cout << "equal\n";
	else {
		cout << "not equal\n";
	}
	if (n1>n2)
		cout << n2 << ',' << n1;
	else {
		cout << n1 << ',' << n2;
	}
	return 0;
}