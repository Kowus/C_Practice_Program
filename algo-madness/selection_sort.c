// Comment out this section if using the pebble SDK
#include <stdio.h>

// Uncomment this section if using the pebble SDK
//#include <pebble.h>

// Define number of values as 10
#define NUM_VALUES 10				// I could alternatively abandon this and use the sizeof() function

// Array of valuues to be sorted
int input_array[] = {5, 7, 2, 6, 4, 1, 9, 0, 3, 8};



void print_array(void)
{
	// Print all array values
	for(int i = 0; i < NUM_VALUES; i++)
	{
		printf("Element %d = %d\n", i, input_array[i]);
	}
	
	// Print Blank Line for readability
	printf(" \n");
}

void swap(int index, int new_index)
{
	// Make a temporary copy
	int temp = input_array[index];
	
	// Replace the old value with the new one
	input_array[index] = input_array[new_index];
	
	// Replace new value with the backed up old value
	input_array[new_index] = temp;
}

void selection_sort()
{
	printf("\nSelection Sort\n\n");
	// Check each value in the array
	for(int i = 0; i < NUM_VALUES; i++)
	{
		// Find the smallest value's index in the input array
		int min_index = i;
		
		// Check all values after the current one
		for(int j = i + 1; j < NUM_VALUES; j++)
		{
			if(input_array[j] < input_array[min_index])
			{
				min_index = j;
			}
		}
		
		if(min_index != i)
		{
			swap(i, min_index);
		}
	}
}




int main(void)
{
	// Print the array
	print_array();
	
	// Run algorithm
	selection_sort();
	
	// Print the new state of the array
	print_array();
	
	// Uncomment if Using the pebble SDK
	// Wait till user presses back key
	//app_event_loop();
	
	// Return 0 if program run without error
	return 0;
}

/*

Algorithm Explanation
							=============================================
	 The actual selection sort algorithm follows this set of rules:
		* For all elements in the array
		* Assume the current element index is the minimum
		* Test all subsequent indices to see if any hold a smaller value
		* If they do, replace the recorded smallest value index with this index
		* Once all values are tested, swap the current value with that at the
		* recorded index
		* Test the next array index
		
		Once every array element has been swapped with the next smallest
		value, it is sorted in ascending order. The implementation of this in C
		makes use of the for loop and if statement to test each value
		against a possibly smaller one:
===================
*/
