// [The Last local maxima]
// Последний локальных максимум
//
// Дан вектор целочисленных значений. Необходимо разработать
// функцию(или программу), которая находит значение последнего
// локального максимума вектора. Если вектор не содержит локальных
// максимумов или вектор задан некорректно, то функция(программа)
// должна возвратить ноль.

#include "logic.h"

int get_last_local_maxima(int* array, int size) {
	if (size <= 1 || array == nullptr)
	{
		return 0;
	}

	if (array[size - 1] > array[size - 2]) {
		return array[size - 1];
	}

	for (int i = size - 2; i > 0; i--)
	{
		if (array[i] > array[i - 1] && array[i] > array[i + 1]) {
			return array[i];
		}
	}

	if (array[0] > array[1]) {
		return array[0];
	}
	

	return 0;
}