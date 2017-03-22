#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int sum = 0;
int max = 0;
int slot = 0;
void random();
int main() {
	srand(static_cast<unsigned int>(time(0)));
	random();
	cout << "According to our data, the average was " << sum / 100 << " and the max was " << max << "." << endl;

}
void random() {
	for (int i = 0; i < 100; i++) {
		int num = rand() % 1000;
		sum = sum + num;
		if (num > max)
			max = num;
	}
}