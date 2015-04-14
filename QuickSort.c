#include "QuickSort.h"

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
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
		}
	}
	//swaps the elements
	temp = array[i + 1];
	array[i + 1] = array[r];
	array[r] = temp;
	
	return i + 1;
}


