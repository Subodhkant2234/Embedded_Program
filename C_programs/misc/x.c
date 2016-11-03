#include<stdio.h>
int main()
{
	int val = 0;
	 FILE *fc = NULL;
	 fc = fopen("/home/subodh/Embedded/C_programs/misc/sent_count.txt","w+");
                        if (fc == NULL){
                                perror("sent_count");
                        }
	printf(" fc val:%d\n",(unsigned long)fc);
	fscanf(fc, "%u", &val);
	printf("val:%d\n", val);
	return 0;
}
