#include "util.h"

string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(*(array + i)) + " ";
	}
	return s;
}

void print_test(int* array, int size, int* expected, string test_name) {
	HANDLE h;
	h = GetStdHandle(STD_OUTPUT_HANDLE);

	bool result = true;
	
	if (size > 0 && array != nullptr) {
		for (int i = 0; i < size; i++)
		{
			if (array[i] != expected[i]) {
				result = false;
				break;
			}
		}
	}
	else {
		result = false;
	}

	SetConsoleTextAttribute(h, (0 | 15));
	cout << test_name << " --> ";

	string msg;

	if (result) {
		msg = "PASS(green)";
		// background  color
		SetConsoleTextAttribute(h, ((2 << 4) | 15));
	}
	else {
		msg = "FAIL(red)";
		SetConsoleTextAttribute(h, ((4 << 4) | 15));
	}

	cout << msg << endl;
	SetConsoleTextAttribute(h, (0 | 15));

	if (!result && size > 0 && array != nullptr) {
		cout << "Current array: " << convert(array, size) << endl;
		cout << "Expected array: " << convert(expected, size) << endl;
	}

	SetConsoleTextAttribute(h, (0 | 14));
	cout << "-----------------------------------" << endl;
	SetConsoleTextAttribute(h, (0 | 15));
}