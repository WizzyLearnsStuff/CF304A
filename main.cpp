#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	int sn = n * n;
	int root;
	int count = 0;
	for (int b = 1; b <= n; b++) {
	int sb = b * b;
	for(int a = 1; a <= b && a <= sqrt(sn - b * b); a++) {
		int sc = a * a + sb;

		switch (sc % 16) {
			case 0: case 1: case 4: case 9:
			root = (int)sqrt(sc);
			count += (root * root == sc);
			default:
			break;
		}
	}
	}

	cout << count;
}
