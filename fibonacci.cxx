#include <iostream>

using namespace std;

int main (int argcount, char** argvector) {

	// basic variables
	int num, temp; 
	unsigned long result = 1;
	unsigned long f_1 = 1;
	unsigned long f_2 = 1;

	// prompt user to input a number
	cout << "Please enter a positive, non-negative integer number: ";
	cin >> num;

	// check if correct 
	if (num < 1) {
		cout << "Did I fucking stutter?" << endl;
		return -1;
	} else if (num > 93) {
		cout << "Are you fucking kidding me?" << endl;
		return -1;
	}

	// compute the right fibonacci number, iterate as far as necessary
	for (int i=3; i<=num; i++) {

		// store the old value of result and compute the new
		temp = result;
		result = f_1 + f_2;

		// get the new values of f_1 and f_2
		f_1 = f_2;
		f_2 = result;
	}

	// output result to user
	cout << "The " << num;

	// check which ending to use
	if (num%10 == 1)
		cout << "-st ";
	else if (num%10 == 2)
		cout << "-nd ";
	else if (num%10 == 3)
		cout << "-rd ";
	else if (num%10 >= 4)
		cout << "-th ";

	// do the rest
	cout << "Fibonacci number is: " << result << endl;

	// return to caller
	return 0;
}
