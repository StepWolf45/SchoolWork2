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
	int min = number % 10;
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
	int max2 = 0;
	int max = itc_max_num(number);
	if (number < 0) {
		number *= -1;
	}
	if (number < 10) {
		return -1;
	}
	while (number > 0) {
		if (number % 10 > max2 && number % 10 != max) {
			max2 = number % 10;
		}
		number /= 10;
	}
	if (max==0){
		return max;
	}
	return max2;
}

int itc_second_simple_max_num(long long number) {
	int max2 = 0;
	int max = itc_max_num(number);
	if (number < 10) {
		return -1;
	}
	if (number < 0) {
		number *= -1;
	}
	while (number > 0) {
		if (number % 10 > max2 && number % 10 != max) {
			max2 = number % 10;
		}
		number /= 10;
	}
	if (max2 == 0) {
		return -1;
	}
	return max2;
}
