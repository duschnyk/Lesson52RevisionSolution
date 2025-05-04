#pragma once
#include <Windows.h>
#include <iostream>
#include <string>
#include "logic.h"
using namespace std;

string convert(double* array, int size);
void print_test(double* array, int size, int expected, string name);