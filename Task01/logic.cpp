// [The Number of zero elements]
// Количество нулевых элементов
//
// Дан вектор вещественных значений. Необходимо разработать
// функцию(или программу), которая подсчитывает количество
// нулевых элементов вектора. Если вектор задан некорректно,
// то функция(программа) должна возвратить - 1.

#include "logic.h"

int count_zero_elements(double* array, int size) {
	if (size <= 0 || array == nullptr)
	{
		return -1;
	}

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) == 0)
		{
			count++;
		}
	}

	return count;
}