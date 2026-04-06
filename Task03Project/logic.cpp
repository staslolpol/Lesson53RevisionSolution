// Task 03 [The sum II]
// Сумма 
// 
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму чисел от N до M.

#include "logic.h"

int sum(int n, int m) {

	if (m < n) {
		int t = m;
		m = n;
		n = t;
	}

	if (m == n) {
		return n;
	}

	return n + sum(n + 1, m);
}