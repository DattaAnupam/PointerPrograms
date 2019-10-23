//4. Write a C program to reverse an array using pointers.
#include<stdio.h>

void input(int *ptr, int *no_of_elements);
void reverse_arr(int *ptr, int *no_of_elements);
void display(int *inp_arr, int *no_of_elements);

int main(void)
{
	int inp_arr[30];
	int no_of_elements;
	
	printf(" Enter the number of elements of the array: ");
	scanf("%d", &no_of_elements);
	
	// Taking inputs for the array.
	input(inp_arr, &no_of_elements);
	
	// Showing the values of the array before it is reversed.
	printf("\n Array before reversing the elements.\n");
	printf(" ----------------------------------");
	display(inp_arr, &no_of_elements);
	
	// revering the array.
	reverse_arr(inp_arr, &no_of_elements);
	
	// Showing the values of the array before it is reversed.
	printf("\n Array before reversing the elements.\n");
	printf(" ----------------------------------");
	display(inp_arr, &no_of_elements);
	
	return 0;
}

void input(int *ptr, int *no_of_elements)
{
	int i;
	
	printf("\n Enter %d values for the array (sepatated by space): ", *no_of_elements);
	for(i = 0; i<*no_of_elements; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
}

void reverse_arr(int *ptr, int *no_of_elements)
{
	int i, t;
	int temp_arr[*no_of_elements];
	
	//Coping the elements in the original array into another array.
	for(t = 0; t<*no_of_elements; t++)
	{
		temp_arr[t] = *ptr;
		ptr++;
	}
	ptr--;
	for(i=0; i<*no_of_elements; i++)
	{
		*ptr = temp_arr[i];
		ptr--;
	}
	printf("\n");
}

void display(int *inp_arr, int *no_of_elements)
{
	int i = 0;
	printf("\n Elements in the array: ");
	for(i; i<*no_of_elements; i++)
	{
		printf(" %d ", *inp_arr);
		inp_arr++;
	}
	printf("\n");
}