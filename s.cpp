#include "middle.h"
#include <iostream>
using namespace std;

void itc_num_print(int number) {
	cout << number;
}
int itc_len_num(long long number) {
	int kol=0;
	while (number > 0) {
		kol++;
		number /= 10;
	}
	return kol;
}
int itc_sum_num(long long number) {
	int sum = 0;
	while (number > 0) {
		sum += number%10;
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
int itc_max_num(long long number) {
	int max = 0;
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
	while (number > 0) {
		if (number % 10 < min) {
			min = number % 10;
		}
		number /= 10;
	}
	return min;
}
long long itc_rev_num(long long number) {
	long long newnum = 0;
	while (number > 0) {
		newnum = newnum * 10 + number % 10;
		number /= 10;
	}
	return newnum;

}
int itc_null_count(long long number) {
	int kol = 0;
	while (number > 0) 
	{
		if (number % 10 == 0) {
			kol++;
		}
		number /= 10;
	}
	return kol;

}
bool itc_mirror_num(long long number) {
		int revnum = itc_rev_num(number);
		return revnum == number;
}
int itc_mirror_count(long long number) {
	int kol = 0;
	for (int i = 1; i <= number; i++) {
		if (itc_mirror_num(i)) {
			kol++;
		}
	}
	return kol;
}
int itc_second_max_num(long long number) {
	int max2 = 0;
	int max = itc_max_num(number);
	if (number < 10) {
		return -1;
	}
	while (number > 0) {
			if (number % 10 > max2 && number % 10 != max) {
				max2 = number % 10;
			}
			number /= 10;
	}	
	return max2;
}
int itc_second_simple_max_num(long long number) {
	int max2 = 0;
	int max = itc_max_num(number);
	if (number < 10) {
		return -1;
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
long long itc_bin_num(long long number) {
	long long h = 1;
	while (number)
	{
		h *= 10;
		h += number % 2;
		number /= 2;
	}
	return itc_rev_num(h) / 10;

}
long long itc_oct_num(long long number){
	long long h = 1;
	while (number)
	{
		h *= 10;
		h += number % 8;
		number /= 8;
	}
	return itc_rev_num(h) / 10;

}
int itc_rev_bin_num(long long number){
    long long res = 0, kol = 0;
    while (number > 0){
        res += number % 10 * itc_pow(2, kol);
        kol++;
        number /= 10;
    }
    return res;
}
int itc_rev_oct_num(long long number){
    long long res = 0;
    long long kol = 0;
    while (number > 0){
        res += number % 10 * itc_pow(8, kol);
        kol++;
        number /= 10;
    }
    return res;
}
