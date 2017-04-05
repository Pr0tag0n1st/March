#include <iostream>
using namespace std;
#include <string>
int main() {
	string word[5];
	for (int i = 0; i < 5; i++) {
		cout << "Give me a word." << endl;
		getline(cin, word[i]);
		}
	if (word[2].compare("shamrock") == 0)
	cout << "You guessed the word! You get a pot of gold." << endl;
	else
		cout << "Go away, nerd." << endl;
}