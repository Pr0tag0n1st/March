#include <iostream> //Made by Trevin and TJ 
using namespace std;
int One;
int Two;
int Three;
void Function();//execute order 66//Function declaration
int main() {
	Function();//order 66 has been executed//Function call
}
void Function() {//kills all jedi in perfect order. usually.//Function definition
	cout << "you want functions? we got 'em." << endl;
	cout << "Give us three different random numbers.  We will put them in ascending order." << endl;
	cin >> One;
	cin >> Two;
	cin >> Three;
	if (One > Two && Two > Three)//Ton of calculations
		cout << Three << ", " << Two << ", " << One << endl;
	else if (Two > Three&&Three > One)
		cout << One << "," << Three << "," << Two << endl;
	else if (Three > One && One > Two)
		cout << Two << ", " << One << ", " << Three << endl;
	else if (One > Three&&Three > Two)
		cout << Two << "," << Three << "," << One << endl;
	else if (Two > One && One > Three)
		cout << Three << ", " << Two << ", " << One << endl;
	else if (Three > Two&&Two > One)
		cout << One << "," << Two << "," << Three << endl;
	else
		cout << "I said different." << endl;//needed for commit

	

 
}