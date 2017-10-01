# max_in_array-0.0.3

#include "stdafx.h" 
#include "iostream" 
#include "sstream"

using namespace std;

int main() {
	int max1, max2,maxi, i, a[10], b[10];

	for (string string; getline(cin, string); ) {
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> a[i])) {
				failure = true;
				break;
			}
		}

		if (!failure) break;
		else {
			cout << "An error has occured while reading numbers from line" << endl;
		}
	}



	for (string string; getline(cin, string); ) {
		istringstream stream(string);
		bool failure = false;
		for (int i = 0; i < 10; ++i) {
			if (!(stream >> b[i])) {
				failure = true;
				break;
			}
		}

		max2 = b[0];

		if (!failure) {
			for (int i = 0; i < 10; ++i) {
				if (b[i] > max2) {
					max2 = b[i];
					maxi = i;
				}
			}

			break;
		}
		else {
			cout << "An error has occured while reading numbers from line" << endl;
		}
	}

	max1 = a[0];
	for (int i = 0; i <= maxi; ++i) {
		if (a[i] > max1) {
			max1 = a[i];
		}
	}

	cout << max1 + max2 << endl;

	system("pause");
	cin.get();

	return 0;
}
