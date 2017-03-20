#include <iostream>
using namespace std;
int num = 0;
bool prime = false;
int main() {
	cout << "Give me a number, preferably a positive integer." << endl;
	cin >> num;
	while (1) {
		prime = true;
		num++;

		for (int i = 2; i < num; i++)
			if (num%i == 0)
				prime = false;

		if (prime == 1) {
			cout << "Your first/next prime number is " << num << "." << endl;
			return 0;
		}
	}
}