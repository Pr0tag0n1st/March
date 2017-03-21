#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
int data[100];
void random();
int main() {
	srand(static_cast<unsigned int>(time(0)));


}
void random() {
	for (int i = 1; i < 100; i++) 
		int data[i] = rand() % 1000 + 1;
}