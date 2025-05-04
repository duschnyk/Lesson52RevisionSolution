#include "test.h"

// Negative tests
void test01() {
	int* array = nullptr;
	int size = 0;
	int* expected = nullptr;
	print_test(array, size, expected, "test01");
}

void test02() {
	int* array = nullptr;
	int size = -5;
	int* expected = nullptr;
	print_test(array, size, expected, "test02");
}

void test03() {
	int* array = nullptr;
	int size = 5;
	int* expected = nullptr;
	print_test(array, size, expected, "test03");
}

// Boundet tests
void test04() {
	int size = 1;
	int* array = new int[size] { 1 };
	int* expected = new int[size] { 1 };
	print_test(array, size, expected, "test04");
	delete[] array;
	delete[] expected;
}

void test05() {
	int size = 2;
	int* array = new int[size] { 1, 1 };
	int* expected = new int[size] { 1, 1 };
	print_test(array, size, expected, "test05");
	delete[] array;
	delete[] expected;
}

void test06() {
	int size = 2;
	int* array = new int[size] { 1, 2 };
	int* expected = new int[size] { 2, 1 };
	print_test(array, size, expected, "test06");
	delete[] array;
	delete[] expected;
}

// Basic case tests
void test07() {
	int size = 3;
	int* array = new int[size] { 1, 2, 3 };
	int* expected = new int[size] { 3, 2, 1 };
	print_test(array, size, expected, "test07");
	delete[] array;
	delete[] expected;
}

void test08() {
	int size = 4;
	int* array = new int[size] { 1, 2, 3, 4 };
	int* expected = new int[size] { 4, 3, 2, 1 };
	print_test(array, size, expected, "test08");
	delete[] array;
	delete[] expected;
}

void test09() {
	int size = 10;
	int* array = new int[size] { 1, 3, 2, 5, 4, 7, 6, 9, 8, 0 };
	int* expected = new int[size] {0, 8, 9, 6, 7, 4, 5, 2, 3, 1 };
	print_test(array, size, expected, "test09");
	delete[] array;
	delete[] expected;
}

void test10() {
	int size = 9;
	int* array = new int[size] { 1, 3, 2, 5, 4, 7, 6, 9, 8 };
	int* expected = new int[size] {8, 9, 6, 7, 4, 5, 2, 3, 1 };
	print_test(array, size, expected, "test10");
	delete[] array;
	delete[] expected;
}