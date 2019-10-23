//3. Write a C program to swap two arrays using pointers.
#include<stdio.h>
#include<stdlib.h>

void inp_arr(int *ptr, int *no_of_elements);
void swap_array(int *first, int *second, int *no_of_elements);
void display(int *first, int *second, int *no_of_elements);

int main(void)
{
	//int first_arr[30], second_arr[30];
	int *first_ptr = NULL, *second_ptr = NULL;
	int no_of_elements;
	
	printf(" Enter the number of elements of the array: ");
	scanf("%d", &no_of_elements);
	
	// Dynamically allocating memeory for the array with required number of elements.
	first_ptr = (int *)malloc(sizeof(int) * no_of_elements);
	second_ptr = (int *)malloc(sizeof(int) * no_of_elements);
	
	// Taking inputs for the first array.
	//inp_arr(first_arr, &no_of_elements);
	inp_arr(first_ptr, &no_of_elements);
	// Taking inputs for the second array.
	//inp_arr(second_arr, &no_of_elements);
	inp_arr(second_ptr, &no_of_elements);
	
	// Showing the values of the arrays before they are swapped.
	printf("\n Arrays before swapping the elements.\n");
	printf(" ----------------------------------");
	//display(first_arr, second_arr, &no_of_elements);
	display(first_ptr, second_ptr, &no_of_elements);
	
	// Swapping the values of the arrays.
	//swap_array(first_arr, second_arr, &no_of_elements);
	swap_array(first_ptr, second_ptr, &no_of_elements);
	
	// Showing the values of the arrays after they are swapped.
	printf("\n Arrays after swapping the elements.\n");
	printf(" ----------------------------------");
	//display(first_arr, second_arr, &no_of_elements);
	display(first_ptr, second_ptr, &no_of_elements);
	
	return 0;
}

void inp_arr(int *ptr, int *no_of_elements)
{
	int i;
	
	printf("\n Enter %d values for the array (sepatated by space): ", *no_of_elements);
	for(i = 0; i<*no_of_elements; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
}

void swap_array(int *first, int *second, int *no_of_elements)
{
	int temp, i;
	for(i=0; i<*no_of_elements ; i++)
	{
		temp = *first;
		*first = *second;
		*second = temp;
		
		first++; 
		second++;
	}
}

void display(int *first, int *second, int *no_of_elements)
{
	int i = 0;
	printf("\n Elements in the first array: \t\t Elements in the second array: \n");
	for(i; i<*no_of_elements; i++)
	{
		printf(" %d \t\t\t\t\t %d\n", *first, *second);
		first++;
		second++;
	}
	printf("\n");
}

// This code contains dynamic memory allocation. As well as normal static array.  