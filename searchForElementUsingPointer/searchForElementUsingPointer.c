//5. Write a C program to search an element in array using pointers.

#include<stdio.h>
#include<stdbool.h>	//for boolean data type.

void input_for_array(int *ptr, int no_of_elements);
void seaching_element(int *ptr, int no_of_elements, int element_to_search, bool *flag);
void display_result(bool *flag, int element_to_search);

int main(void)
{
	int input_array[30] = {0};	// Initially the value of all elements in the array is zero.
	int no_of_elements = 0, i = 0, element_to_search = 0;
	int *ptr = NULL;
	bool flag = false;
	
	printf(" Enter the number of elements in the array: ");
	scanf("%d", &no_of_elements);
	
	// Taking input for the array.
	ptr = input_array;
	input_for_array(ptr, no_of_elements);
	
	
	printf("\n Enter the element you want to search in the array: ");
	scanf("%d", &element_to_search);
	// Getting result.
	seaching_element(input_array, no_of_elements, element_to_search, &flag);
	
	display_result(&flag, element_to_search);
	
	return 0;
}

void input_for_array(int *ptr, int no_of_elements)
{
	int i = 0;
	printf("\n Enter the %d values (sepatated by space): ", no_of_elements);
	for(i; i<no_of_elements; i++)
	{
		scanf("%d", ptr);
		ptr++;
	}
}

void seaching_element(int *ptr, int no_of_elements, int element_to_search, bool *flag)
{
	int i = 0;
	for(i = 0; i< no_of_elements; i++)
	{
		if(*ptr == element_to_search)
		{
			*flag = true;
			break;
		}
		ptr++;
	}
}

void display_result(bool *flag, int element_to_search)
{
	if(*flag == true)
	{
		printf("\n %d is found.", element_to_search);
	}
	else{
		printf("\n %d is not found.", element_to_search);
	}
}
