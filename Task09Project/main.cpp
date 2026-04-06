#include "logic.h"

int main() {
	int number = 0;

	cout << "Please, input number: ";
	cin >> number;

	int msg = sum(number);

	cout << "The sum of multiples of 5 " << number << ": " << msg << endl;

	return 0;
}