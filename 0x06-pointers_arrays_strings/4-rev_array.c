/**
* reverse_array - reverses an array of int
*@a: pointer to int array
*@n: number of ints to swap
*
* Return: none
*/

#include "main.h"

void reverse_array(int *a, int n)
{
	int *ptr = a;
	int i;
	int temp;
	int j = ((int) sizeof(a) / (int) sizeof(int));



	for (i = 0; i <= n; i++)
	{

		temp = ptr[i];
		ptr[i] = ptr[j - i - 1];
		ptr[j - i - 1] = temp;
	}

}
