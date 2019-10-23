//2. Write a C program to copy one array to ano_of_elementsther using pointers.

#include<stdio.h>
#include<stdlib.h>

void display_array(int *first_ptr, int *second_ptr, int no_of_elements);
void copy_array(int *first_ptr, int *second_ptr, int no_of_elements);

int main(void)
{
	int first_array[30], second_array[30] = {0};
	int *first_ptr = NULL, *second_ptr = NULL, i = 0, no_of_elements = 0;
	
	printf("Enter the number of elements in the array: ");
	scanf("%d", &no_of_elements);
	
	// Taking values for the first array.
	printf("\n Enter %d values of the array (separated by space): ", no_of_elements);
	for(i; i<no_of_elements; i++)
	{
		scanf("%d", &first_array[i]);
	}
	
	// Clearing the screen.
	system("cls");
	
	
	// Arrays before coping the elements.
	printf("\n Arrays before coping the elements.\n");
	printf(" ----------------------------------");
	display_array(first_array, second_array, no_of_elements);

	// Coping elements of first array into second array.
	copy_array(first_array, second_array, no_of_elements);
	
	// Arrays after coping the elements.
	printf("\n Arrays after coping the elements.\n");
	printf(" ----------------------------------");
	display_array(first_array, second_array, no_of_elements);
	
	return 0;
}

void display_array(int *first_ptr, int *second_ptr, int no_of_elements)
{
	int i = 0;
	printf("\n Elements in the first array: \t\t Elements in the second array: \n");
	for(i; i<no_of_elements; i++)
	{
		printf(" %d \t\t\t\t\t %d\n", *first_ptr, *second_ptr);
		first_ptr++;
		second_ptr++;
	}
	printf("\n");
	
}

void copy_array(int *first_ptr, int *second_ptr, int no_of_elements)
{
	int i = 0;
	
	for(i; i<no_of_elements; i++)
	{
		*second_ptr = *first_ptr;
		first_ptr++;
		second_ptr++;
	}
}