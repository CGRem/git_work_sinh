#include "function.h"
//кириллица
int func_r() {
	return 50;
}

int console_diagr_mass(short diagram[10])
{
	int max_stolb = 0;
	for (int num_stolb = 0; num_stolb < 10; num_stolb++)
	{
		if (diagram[num_stolb] > max_stolb) { max_stolb = diagram[num_stolb]; };
	}
	return max_stolb;
}
