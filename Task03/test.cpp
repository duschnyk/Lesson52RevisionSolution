#include "test.h"

// Negative tests
void test01() {
	double* array = nullptr;
	int size = 0;
	int expected = 0;
	print_test(array, size, expected, "test01");
}

void test02() {
	double* array = nullptr;
	int size = -5;
	int expected = 0;
	print_test(array, size, expected, "test02");
}

void test03() {
	double* array = nullptr;
	int size = 5;
	int expected = 0;
	print_test(array, size, expected, "test03");
}

// Boundet tests
void test04() {
	int size = 1;
	double* array = new double[size] { 1.1 };
	int expected = 1;
	print_test(array, size, expected, "test04");
	delete[] array;
}

void test05() {
	int size = 2;
	double* array = new double[size] { 1.2, 2.3};
	int expected = 2;
	print_test(array, size, expected, "test05");
}

void test06() {
	int size = 5;
	double* array = new double[size] { -1.1, 1.2, -1.3, 1.4, -1.5 };
	int expected = 2;
	print_test(array, size, expected, "test06");
	delete[] array;
}

void test07() {
	int size = 1;
	double* array = new double[size] { 0.0 };
	int expected = 1;
	print_test(array, size, expected, "test07");
	delete[] array;
}

void test08() {
	int size = 5;
	double* array = new double[size] { 0.0, 0.0, 0.0, 0.0, 0.0 };
	int expected = 5;
	print_test(array, size, expected, "test08");
	delete[] array;
}

void test09() {
	int size = 5;
	double* array = new double[size] { 1.2, -5.5, 1.2, -5.5, 1.2 };
	int expected = 5;
	print_test(array, size, expected, "test09");
	delete[] array;
}

void test10() {
	int size = 3;
	double* array = new double[size] { 1.1, 1.1, 1.1};
	int expected = 3;
	print_test(array, size, expected, "test10");
	delete[] array;
}

// Basic case tests
void test11() {
	int size = 5;
	double* array = new double[size] { 0.0, 1.2, 0.0, 2.3, 0.0};
	int expected = 4;
	print_test(array, size, expected, "test11");
	delete[] array;
}

void test12() {
	int size = 5;
	double* array = new double[size] { 1.2, 0.0, 1.1, 0.0, 1.2};
	int expected = 4;
	print_test(array, size, expected, "test12");
	delete[] array;
}