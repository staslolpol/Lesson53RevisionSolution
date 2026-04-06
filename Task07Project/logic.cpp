// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.
#include "logic.h" 
int count_of_odd_digits(int number) {

    number = number < 0 ? -number : number;

    if (number == 0) {
        return 0;
    }

    int last_digit = number % 10;

    last_digit = last_digit % 5 == 0 ? last_digit : 0;

    return last_digit + count_of_odd_digits(number / 10);
}


