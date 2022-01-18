#include <stdio.h>

int isempty(int arr)
{
	if(arr[0] == NULL)
		return 1;
	else
		return 0;
}

int isfull(int arr)
{
	if(arr[9] != NULL)
		return 1;
	else
		return 0;
}

int pop(int arr, int top)/*input = arr, top | output = top*/
{
	printf("%d\n",arr[top]);
	top = top - 1;
	return top;
}


int main(void)
{
	int arr[10] = {0};
	int top = 0;
	int key = 0;

}


