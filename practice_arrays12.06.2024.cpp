/*arrays passes as pointer taking its base address when a function calls and returns with a base
address when function wants to return an array*/
//program on printing the duplicate elements only once in a given array 
/*
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements in an array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements of the array are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("The duplicate elements are: \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				printf("%d\n",arr[i]);
				break;
			}
		}
	}
	return 0;
}
*/



// product of array except itself
/*
#include<stdio.h>
int main()
{
	int n,p=1,i,j;
	printf("Enter the size of the arrays\n");
	scanf("%d",&n);
	int arr[n],prod[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements of the array are\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("The product array will be: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				continue;
			}
			else
			{
				p = arr[j]*p;
			}
		}
		prod[i]=p;
		p = 1;
	}
	for(i=0;i<n;i++)
	{
		printf("%d  ",prod[i]);
	}
	return 0;
}
*/

















