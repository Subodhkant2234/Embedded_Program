#include<stdio.h>
#include<malloc.h>

int main()
{
	int nr=3,nc=5,i,j;

	int (*pm)[5];  //int pm[3][5];
	pm=malloc(nr*nc*sizeof(int)); //calloc(nr*nc,4);

	for(i=0;i<nr;i++) {
		for(j=0;j<nc;j++)
		{
			pm[i][j]=rand()%100;
			//print pm[i][j]
		}
	}
	free(pm);

	int m=5,n;

	int **parr,a[5], b[10];
	parr=malloc(m*sizeof(int*));
	
	parr[0]=malloc(5*4);
	parr[1]=a;
	parr[2]=malloc(3*4);
	parr[3]=b;
	parr[4]=malloc(6*4);

	//for(i=0;i<m;i++) { n=?
	//for(j=0;j<n;j++)
	//	parr[i][j]
	//}
	
	//free(parr[0]);
	//free(parr[2]);
	//free(parr[4]);	
	//free can't be used on parr[1],parr[3],becz stack
	free(parr);

	//deallocate rows created on heap first, then free
	//array of pointers
	
	return 0;
}



