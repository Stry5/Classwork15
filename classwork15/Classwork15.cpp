
#include <iostream>
using namespace std;

int main()
{
	int r;
	cout << "Input number of rows\n";
	cin >> r;
	for (int y = 1; y <= r; y++) {
		for (int x = 0; x < y; x++) {
			cout << "-";
		}
		cout << endl;
	}
}

