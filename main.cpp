#include <iostream>
using namespace std;

int main() {
	int f, k;

	cin >> f >> k;
	
	if (f < k)
	cout << "first is less";

	else if (f > k)
	cout << "second is less";

	else
	cout << "equal";
	return 0;
}