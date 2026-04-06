#include "logic.h"

int main() {
	int number = 0;

	cout << "Please, input number: ";
	cin >> number;

	int msg = number_of_digits(number);

	cout << "The number of digits " << number << ": " << msg << endl;

	return 0;
}