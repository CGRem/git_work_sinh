#include "function.h"
#include <iostream>
using namespace std;
#define DEF_INDENT 0
#define DEF_RAW_COUNT 100
//кириллица
int func_r() {
	return 50;
}

int console_diagr_mass(int diagram[DEF_RAW_COUNT]){
	//find max value diagram. count = количество, number = текущий номер, 
	short max_value_raw = 0;
	for (int num_row = 0; num_row < DEF_RAW_COUNT; num_row++) {
		if (diagram[num_row] > max_value_raw) { max_value_raw = diagram[num_row]; }
		}
	cout << max_value_raw << endl;

	//отработка графического поля
	short width_canvas = DEF_RAW_COUNT;
	short height_canvas = max_value_raw + DEF_INDENT;
	for (int num_height_canvas = 0; num_height_canvas < height_canvas; num_height_canvas++) {
		for (int num_width_canvas = 0; num_width_canvas < width_canvas; num_width_canvas++) {
			if (num_height_canvas >= (height_canvas - diagram[num_width_canvas] + DEF_INDENT)) {
				cout << "*";
			}
			else { cout << " "; }
		}
		cout << " " << endl;
	}
	
	return 0;
	}


	/*int max_stolb = 0;
	for (int num_stolb = 0; num_stolb < 10; num_stolb++)
	{
		if (diagram[num_stolb] > max_stolb) { max_stolb = diagram[num_stolb]; };
	}
	return max_stolb;
}*/
