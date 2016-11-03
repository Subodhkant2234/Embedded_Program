#include <stdio.h>
#include <stdlib.h>

struct da {
	int st;
	char *array;
};

void bexit(int status, void *argv)
{	
	struct da *lda;

	lda = (struct da *)argv;
 	printf("Address of lda->array is %p\n", lda->array);
	printf("Status = %d Pointer value = %p \n", status, lda->array);
	
}

int main()
{

	char ch;
	int ret;
	int pid,stat_loc=0;

	char pk_arr[]={'1','2','3'};
	struct da *argh;
	argh = (struct da *)malloc(sizeof(struct da));
	argh->array = pk_arr;
	argh->st    = 9;
 	printf("Address of da->array is %p\n", argh->array);
	on_exit(bexit, argh);
	printf("This is the last statement of code\n");
	return 0;
}
