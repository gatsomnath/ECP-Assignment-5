/* 1. Write a program to accept marks of five subjects, calculate its total and average. */

#include<stdio.h>

int w;
int main()
{
    printf("Enter the number of elements");
    scanf("%d",&w);
	int arr[w];
	printf("Enter the marks of 5 sub:\n");
	for (int i = 0;i<w;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array:");
	for(int i=0;i<w;i++)
	{
		printf("%-4d",arr[i]);
	}
	printf("\n");
	int sum = total(arr,w);
	printf("sum=%d",sum);
    printf("Avg=%d",(sum/w));
	
}

int total(int arr[],int n)
{
	int c=0;
	for(int i=0;i<w;i++)
	{
	c+=arr[i];
	}
	return c;
}
