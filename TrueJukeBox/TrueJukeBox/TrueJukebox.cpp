#include <Windows.h>
#include <iostream>
using namespace std;
void jukebox(char choice);

int main() {
	char choice='a';
	cout << "Welcome to my jukebox program!  This time, we can actually play music for you!" << endl;
	cout << "What song would you like to play?  Before we start, I must warn you that I am a huge nerd." << endl; 
	cout << "You have five choices: Champion Cynthia's theme (c), The Other Promise (p), The Heirs to Eternity (h), The 13th Struggle (s), or In the Final (F)." << endl;
	cin >> choice;
	jukebox(choice);
}//lower file sizes
void jukebox(char choice) {
	switch (choice) {
	case 'c':
	cout << "Now, you must face the most powerful trainer of all time." << endl;
		PlaySound(TEXT("Cynthia.wav"), NULL, SND_FILENAME);
		
		break;
	case 'p':
		PlaySound(TEXT("Promise.wav"), NULL, SND_FILENAME);
		cout << "" << endl;
		break;
	case 'h':
		PlaySound(TEXT("Eternity.wav"), NULL, SND_FILENAME);
		cout << "" << endl;
		break;
	case's':
		PlaySound(TEXT("Struggle.wav"), NULL, SND_FILENAME);
		cout << "" << endl;
		break;
	case 'f':
		PlaySound(TEXT("Final.wav"), NULL, SND_FILENAME);
		cout << "" << endl;
	}
}