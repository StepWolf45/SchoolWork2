#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_max_num(long long number) {
	int max = 0;
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		if (number % 10 > max) {
			max = number % 10;
		}
		number /= 10;
	}
	return max;
}

int itc_min_num(long long number) {
	int min = 10;
	if (number == 0) {
		return 0;
	}
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		if (number % 10 < min) {
			min = number % 10;
		}
		number /= 10;
	}
	return min;
}

int itc_second_max_num(long long number) {
	int max = itc_max_num(number);
	int max2 = 0;
	if (number < 0) {
		number = -number;
	}
	if (number < 10) {
		return -1;
	}
	while (number > 0) {
		if (max2 < number % 10 && number % 10 != max)
			max2 = number % 10;
		if (number % 10 == max)
			max = 10;
		number = number / 10;
	}
	return max2;
}

int itc_second_simple_max_num(long long number) {
	if (itc_second_max_num(number) == itc_max_num(number))
		return -1;
	return itc_second_max_num(number);
}
