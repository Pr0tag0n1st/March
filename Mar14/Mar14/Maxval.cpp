#include <iostream>
using namespace std;
int nums[3];
int maxval;
int main() {
	cout << "Give me three different positive integers." << endl;
	for (int i = 0; i < 3; i++) {
		cin >> nums[i];
	}
	if (nums[0] > nums[1] && nums[0] > nums[2])
		maxval = nums[0];
	else if (nums[1] > nums[0] && nums[1] > nums[2])
		maxval = nums[1];
	else if (nums[2] > nums[0] && nums[2] > nums[1])
		maxval = nums[2];
	else
		cout << "I told you different and positive integers." << endl;
	cout << "So, "<<maxval<<" is the greatest number you gave me." << endl;
}