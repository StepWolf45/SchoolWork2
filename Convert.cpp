#include "middle.h"
#include "easy.h"
#include <iostream>
using namespace std;

int itc_covert_num(long long number, int ss) {
	long long h = 1;
	while (number)
	{
		h *= 10;
		h += number % ss;
		number /= ss;
	}
	return reverse(h) / 10;

}
int itc_rev_covert_num(long long number, int ss) {
	long long res = 0, kol = 0;
	while (number > 0) {
		res += (number % 10 * itc_pow(ss, kol));
		kol++;
		number /= 10;
	}
	return res;
}
