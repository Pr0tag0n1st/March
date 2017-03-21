#include <iostream>   //Made by Jose Medina and Teodoro Martinez
using namespace std;
#include <string>
int main() {
	string game[5];
	cout << "What is your favortie game good sir?" << endl;
	for (int i = 0; i < 5; i++) {
		getline(cin, game[i]);
		if (game[i].compare("E.T.")==0)
			cout << "Hey!  I love that game!  You're pretty cool!" << endl;
		else if (game[i].compare("Overwatch")==0)
			cout << "You're weird I dont like you" << endl;
	}
	cout << "So, your favorite games are..." << endl;
	for (int i = 0; i < 5; i++) {
		cout << game[i] << endl;
		
	}
	system("Pause");
}