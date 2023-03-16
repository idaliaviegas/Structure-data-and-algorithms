#include<iostream>
using namespace std;

int main() {
	int l, u, m;
	int key;
	bool have = false;
	int data[10] = {2, 3, 5, 8, 9, 12, 14, 15, 18,20};

	l = 0;
	u = 9;

	cout << "Enter the number you are looking for: ";
	cin >> key;

	do {
		m = (l + u) / 2;
		if (data[m] == key) {
			have = true;
		}
		else if (data[m] > key) {
			u = m - 1;
		}
		else {
			l = m + 1;
		}
	} while (l <= u && have == false);

	if (have == true) {
		cout <<"have" << endl;
	}
	else {
		cout << "does not have "<<endl;
	}

	return 0;
}

