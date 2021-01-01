// PROGRAM AND FUNCTION FOR INSERTION SORT

#include<stdio.h>
#include<conio.h>
void insertion_sort(int[],int);

int main()
{
	int n,i;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	
	int arr[n];
	printf("Enter the elements of array\n");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	insertion_sort(arr,n);
	
	printf("array after sorting using insertion sort is\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}

void insertion_sort(int arrr[],int size)
{
	int i,temp,j;
	
	for(i=1;i<size;i++)
	{
		temp=arrr[i];
		
		for(j=i-1;j>=0 && arrr[j]>temp;j--)
		{
			arrr[j+1]=arrr[j];
		}
		
		arrr[j+1]=temp;	
	}
		
}
