#include<iostream>
using namespace std;

int main()
{

	int arr[49];

	for (int i = 0; i < 49; ++i) {
		cin >> arr[i];
	}

	for (int i = 0; i < 49; i++) {
		for (int j = i + 1; j < 49; j++) {
			if (arr[i] == arr[j]) {
				cout << "no" << endl;
				return 1;
			}

		}
	}

	cout << "yes" << '\n';

	return 0;
}