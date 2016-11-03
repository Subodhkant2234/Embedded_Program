#include<stdio.h>

int main()
{
	int *parr,*ptr;
	//parr=malloc(40); //malloc(n*sizeof(int))
	parr=calloc(10,sizeof(int));

	int i;ptr=parr;
	for(i=0;i<10;i++)
	{
		//*ptr=rand()%100;
		*(parr+i)=rand()%100;
		printf("val is %d\n",parr[i]);
		//ptr++;
	}
	//*(parr+15)=18;
	//int x=parr[12];

	free(parr);
	//free(modified parr)

	int n=10;
	double *qarr;
	//qarr=malloc(n*sizeof(double));
	qarr=calloc(n,sizeof(double));

	for(i=0;i<n;i++)
	{
		qarr[i]=pow(0.25,i);
		//print qarr[i], *(qarr+i);
		//print *q++;

	}
	free(qarr);
	//free(parr);

	return 0; //any unallocated healp blocks are freed
}
