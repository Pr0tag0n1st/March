#include <iostream>
#include<math.h>
using namespace std;
double input = 0;
double input2 = 0;
double result = 0;
void math1();
void math2();
void math3();
int main() {

	math1();
	math2();
	math3();

}






















































void math1() {
	cout << "Give me a number." << endl;
	cin >> input;
	result = input + 3;
	cout << "The result is " << result << "." << endl;
}
void math2() {
	cout << "give me two numbers" << endl;
	cin >> input;
	cin >> input2;
	result = sqrt((input*input) + (input2*input2));
	cout << "The result is " << result << endl;
}
void math3() {
	cout << "give me a number" << endl;;
	cin >> input;
	result = input*input / 2;
	cout << "The result is " << result << "." << endl;



}
