//1.	Write a C program to input and print array elements using pointers.
#include<stdio.h>

int main()
{
	int inp_arr[30], i, num;
	int *ptr;
	ptr = inp_arr;
	printf("Enter the number of elements you want to enter: ");
	scanf("%d", &num);
	for(i=0; i<num; i++)
	{
		printf("\nEnter value of the array: ");
		scanf("%d", ptr);
		ptr++;
		
	}
	
	// displaying the array
	//ptr=inp_arr;
	ptr=inp_arr;
	printf("\nElements in the array.");
	for(i=0; i<num; i++)
	{
		printf("\n%d", *ptr);
		ptr++;
	}
	return 0;
}


// inp_arr[] is an array of 30 elements. Which means it can hold only 30 values, which in this case must be integer, as the data type of it is "int"
