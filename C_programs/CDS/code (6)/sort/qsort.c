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
	qsort(arr,0,n-1);
	printf("sorted elements are\n");
	for(i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("\n");
	return 0;
}
void qsort(int *arr,int lb,int ub)
{
	if(lb>=ub) return;
	
	int down=lb,up=ub,pivot=arr[lb],pos,t;
	while(down<up)
	{
		while(arr[down] <= pivot && down < ub)
			down++;
		while(arr[up] > pivot)
			up--;
		if(down<up) {
			t=arr[down];
			arr[down]=arr[up];
			arr[up]=t;
		}
	}
	pos=up;
	if(pos!=lb) {
		arr[lb]=arr[pos];
		arr[pos]=pivot;
	}

	qsort(arr,lb,pos-1);
	qsort(arr,pos+1,ub);
}





