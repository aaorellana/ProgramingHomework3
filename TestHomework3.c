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
	assert(sorted5[1] == unsorted5[1]);
	assert(sorted5[2] == unsorted5[2]);
	assert(sorted5[4] == unsorted5[4]);
	
	//test that the function does not mess up a one element array
	assert(sorted4[0] == unsorted4[0]);
	
	//tests that it does not mess up a sorted array
	assert(test_sorted1[1] == test_unsorted2[1]);
	assert(test_sorted1[4] == test_unsorted2[4]);
	assert(test_sorted1[2] == test_unsorted2[2]);
	
	//compares the same index of the sorted and unsorted array
	//they all should equal since the unsorted should be sorted now
	assert(sorted[1] == unsorted1[1]);
	assert(sorted[4] == unsorted1[4]);
	assert(sorted[2] == unsorted1[2]);
	
	assert(sorted1[1] == unsorted2[1]);
	assert(sorted1[4] == unsorted2[4]);
	assert(sorted1[2] == unsorted2[2]);
	
	assert(sorted2[1] == unsorted3[1]);
	assert(sorted2[3] == unsorted3[3]);
	assert(sorted2[2] == unsorted3[2]);
	
	
	return 0;
}