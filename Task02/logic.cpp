// [The Sum of elements]
// Сумма элементов
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию(или программу), которая вычисляет сумму элементов
// вектора, расположенных между первым и последним нулевыми
// элементами. Если вектор содержит только один нулевой элемент
// или не содержит вообще нулевых элементов, а также, если
// вектор задан некорректно, то функция(программа) должна
// возвратить ноль.

#include "logic.h"

int get_first_zero_index(int* array, int size) {

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == 0) {
			return i;
		}
	}

	return -1;
}

int get_last_zero_index(int* array, int size) {

	for (int i = size - 1; i >= 0; i--)
	{
		if (*(array + i) == 0) {
			return i;
		}
	}

	return -1;
}

int sum_elements(int* array, int size) {
	if (size <= 2 || array == nullptr)
	{
		return 0;
	}

	int sum = 0;

	int first = get_first_zero_index(array, size);
	int last = get_last_zero_index(array, size);

	for (int i = first + 1; i < last; i++)
	{
		sum += *(array + i);
	}

	return sum;
}