#include "test.h"

// Negative tests
void test01() {
	int* array = nullptr;
	int size = 0;
	int expected = 0;
	print_test(array, size, expected, "test01");
}

void test02() {
	int* array = nullptr;
	int size = -5;
	int expected = 0;
	print_test(array, size, expected, "test02");
}

void test03() {
	int* array = nullptr;
	int size = 5;
	int expected = 0;
	print_test(array, size, expected, "test03");
}

// Boundet tests
void test04() {
	int size = 1;
	int* array = new int[size] { 1 };
	int expected = 0;
	print_test(array, size, expected, "test04");
	delete[] array;
}

void test05() {
	int size = 2;
	int* array = new int[size] { 1, 2 };
	int expected = 2;
	print_test(array, size, expected, "test05");
	delete[] array;
}

void test06() {
	int size = 2;
	int* array = new int[size] { 2, 1 };
	int expected = 2;
	print_test(array, size, expected, "test06");
	delete[] array;
}

void test13() {
	int size = 5;
	int* array = new int[size] { 1, 1, 1, 1, 1 };
	int expected = 0;
	print_test(array, size, expected, "test13");
	delete[] array;
}

// Basic case tests
void test07() {
	int size = 5;
	int* array = new int[size] { 1, 2, 3, 5, 4 };
	int expected = 5;
	print_test(array, size, expected, "test07");
	delete[] array;
}

void test08() {
	int size = 5;
	int* array = new int[size] { 1, 2, 5, 3, 4 };
	int expected = 2;
	print_test(array, size, expected, "test08");
	delete[] array;
}

void test09() {
	int size = 5;
	int* array = new int[size] { 1, 5, 2, 3, 4 };
	int expected = 5;
	print_test(array, size, expected, "test09");
	delete[] array;
}

void test10() {
	int size = 5;
	int* array = new int[size] { 1, 2, 7, 4, 5 };
	int expected = 5;
	print_test(array, size, expected, "test10");
	delete[] array;
}

void test11() {
	int size = 5;
	int* array = new int[size] { 1, 7, 2, 5, 3 };
	int expected = 5;
	print_test(array, size, expected, "test11");
	delete[] array;
}

void test12() {
	int size = 5;
	int* array = new int[size] { 7, 2, 5, 3, 4 };
	int expected = 5;
	print_test(array, size, expected, "test12");
	delete[] array;
}