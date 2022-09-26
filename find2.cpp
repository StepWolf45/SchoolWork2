#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;


int itc_null_count(long long number) {
	int kol = 0;
	while (number > 0) {
		if (number % 10 == 0) {
			kol++;
		}
		number /= 10;
	}
	return kol;

}
int itc_len_num(long long number) {
	int kol = 0;
	while (number > 0) {
		kol++;
		number /= 10;
	}
	return kol;
}
int itc_sum_num(long long number) {
	int sum = 0;
	while (number > 0) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}
long long itc_multi_num(long long number) {
	int prois = 1;
	while (number > 0) {
		prois *= number % 10;
		number /= 10;
	}
	return prois;
}