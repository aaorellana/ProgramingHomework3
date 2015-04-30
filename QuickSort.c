#include "QuickSort.h"

void swap(int *array, int i, int j);
//help from Introduction to Algorithms third edition

//divides the problem into sub problems
void quickSort(int *array, int p, int r)
{
	int q;
	if(p < r)
	{
		q = partition(array, p, r);
		quickSort(array, p, q - 1);
		quickSort(array, q + 1, r);
	}
}

//creates partition
int partition(int *array, int p, int r)
{
	int i;
	int x;
	int j;
	int temp;
	
	x = array[r];
	i = p - 1;
	
	for(j = p; j < r; j++)
	{
		if(array[j] <= x)
		{
			i = i + 1;
			//swaps the elements
			swap(array, i, j);
			
		}
	}
	//swaps the elements
	swap(array, i + 1, r);
	
	return i + 1;
}

void swap(int *array, int i, int j)
{
	int temp;

	temp = array[j];
	array[j] = array[i];
	array[i] = temp;
	
}

