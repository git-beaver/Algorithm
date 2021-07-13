#include <iostream>

using namespace std;

int main() {
	int n, find;

	cin >> n >> find;

	if (find == 1) {
		cout << n / 2 +1 << " " << n / 2 +1 << endl;
		return 0;
	}

	int num = 0;
	int i = 1;
	for (; i < n-1; i += 2) {
		if (find > i * i && find <= (i + 2) * (i + 2)) {
			num = find - i * i;
			break;
		}
	}

	int line = num / (i + 1);
	int x = 0, y = 0;
	
	switch (line) {	
	case 0: 
		x = n / 2 - i / 2 - 1; 
		y = x + num % (i - 1); 
		break;
	
	case 1:
		x = n / 2 - i / 2 - 1 + num % (i + 1);
		y = n - 1 - (n / 2 - i / 2 - 1);
		break;

	case 2:
		x = n - 1 - (n / 2 - i / 2 - 1); 
		y = x - num % (i + 1);
		break;

	case 3: 
		y = n / 2 - i / 2; 
		x = n - 1 - y - num % (i + 1);
		break;
	}

	cout << x + 1 << " " << y + 1 << endl;

	return 0;
}