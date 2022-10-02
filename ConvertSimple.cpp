#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;


long long itc_bin_num(long long number) {
	long long h = 1;
	while (number != 0) {
		h *= 10;
		h += number % 2;
		number /= 2;
	}
	return reverse(h) / 10;

}

long long itc_oct_num(long long number) {
	long long h = 1;
	while (number != 0)
	{
		h *= 10;
		h += number % 8;
		number /= 8;
	}
	return reverse(h) / 10;

}

int itc_rev_bin_num(long long number) {
	long long res = 0, kol = 0;
	while (number > 0) {
		res += (number % 10 * itc_pow(2, kol));
		kol++;
		number /= 10;
	}
	return res;
}

int itc_rev_oct_num(long long number) {
	long long res = 0, kol = 0;
	while (number > 0) {
		res += (number % 10 * itc_pow(8, kol));
		kol++;
		number /= 10;
	}
	return res;
}
