#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;


void itc_num_print(int number) {
	cout << number;
}

long long reverse(long long number) {
	long long newnum = 0;
	if (number < 0)
		number *= -1;
	while (number > 0) {
		newnum = newnum * 10 + number % 10;
		number /= 10;
	}
	return newnum;

}
long long itc_rev_num(long long number) {
	return itc_len_num(reverse(number));
}

bool itc_mirror_num(long long number) {
	int revnum = reverse(number);
	return revnum == number;
}

int itc_mirror_count(long long number) {
	int kol = 0;
	for (long long i = 1; i <= number; i++) {
		if (itc_mirror_num(i)) {
			kol++;
		}
	}
	return kol;
}
