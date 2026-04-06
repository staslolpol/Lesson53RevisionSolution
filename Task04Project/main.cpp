#include "logic.h"

int main() {
	int number = 0;

	cout << "Please, input number: ";
	cin >> number;

	int msg = sum_of_cubes(number);

	cout << "The sum of cuber " << number << " : " << msg << endl;

	return 0;
}