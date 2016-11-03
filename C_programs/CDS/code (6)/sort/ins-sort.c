#include<stdio.h>

int main()
{
	int n=10,i,k,pivot;

	int arr[n];
	srand(getpid());
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%100;
		printf("%d\t",arr[i]);
	}

	for(k=1;k<n;k++)
	{
		pivot=arr[k];
		//for(i=k-1;i>=0 && arr[i]>pivot; i--)
		//	arr[i+1]=arr[i];
		//arr[i+1]=pivot;
		for(i=k; i>0 && arr[i-1]>pivot;i--)
			arr[i]=arr[i-1];
		arr[i]=pivot;
	}
	printf("sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}





