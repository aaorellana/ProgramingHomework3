//Andres Orellana
//Tests
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "QuickSort.h"

void randomize_array(int *array, int size);

int main(void)
{  
	int unsorted1[6] = {0, 1, 3, 2, 4, 0}; 
	int sorted[6] = {0, 0, 1, 2, 3, 4}; 
	int unsorted2[6] = {0, 20, 11, 11, 47, 32};
	int sorted1[6] = {0, 11, 11, 20, 32, 47};
	int unsorted3[6] = {0, 24, 1, 36, 5, 2};
	int sorted2[6] = {0, 1, 2, 5, 24, 36};
	int test_sorted1[6] = {0, 1, 2, 3, 4, 5};
	int test_unsorted2[6] = {0, 1, 2, 3, 4, 5};
	int sorted4[1] = {1};
	int unsorted4[1] = {1};
	int sorted5[6] = {0, 0, 0, 0, 0, 0};
	int unsorted5[6] = {0, 0, 0, 0, 0, 0};
	
	//sorts the unsorted arrays
	quickSort(unsorted1, 1, 5);
	quickSort(unsorted2, 1, 5);
	quickSort(unsorted3, 1, 5);
	quickSort(test_sorted1, 1, 5);
	quickSort(unsorted4, 1, 1);
	quickSort(unsorted5, 1, 5);
	
	//tests that repeating element array wont get messed up
	assert(1 == test(sorted5, unsorted5, 1, 5));
	
	//test that the function does not mess up a one element array
	assert(1 == test(sorted4, unsorted4, 1, 1));
	
	//tests that it does not mess up a sorted array
	assert(1 == test(test_sorted1, test_unsorted2, 1, 5));
	
	//compares the same index of the sorted and unsorted array
	//they all should equal since the unsorted should be sorted now
	assert(1 == test(sorted, unsorted1, 1, 5));
	
	assert(1 == test(sorted1, unsorted2, 1, 5));
	
	assert(1 == test(sorted2, unsorted3, 1, 5));
	
	return 0;
}

int test(int *array1, int *array2, int begin, int end)
{
	int i;
	int passed = 1; //1 means true
	
	for(i = begin; i < end; i++)
	{
		if(array1[i] != array2[i])
		{
			passed = 0;
		}	
	}
	
	return passed;
}