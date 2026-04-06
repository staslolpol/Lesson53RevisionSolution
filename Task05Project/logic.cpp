// Task 05 [The number of digits]
// Количество цифр числа
// 
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество цифр в заданном целом числе.
#include "logic.h"

int number_of_digits(int number) {
	if (number == 0) {
		return 1;
	}
	number = number < 0 ? -number : number;

	if (number < 10) {
		return 1;
	}
	
	return 1 + number_of_digits(number / 10);
}

