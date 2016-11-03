#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>

int main()
{
   int n;
   struct stat buf;
   FILE *fptr;
   fptr=fopen("/home/subodh/Embedded/c_pgms/hello.txt","w");
   if(fptr==NULL){
      printf("Error!");   
      exit(1);             
   }
   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fptr,"%d",n);   
   int ret = stat("/home/subodh/Embedded/c_pgms/hello.txt", &buf);
   if (ret == -1) {
	perror("error in stat");
   	exit(-1);
    }	
   printf("The size:%d\n", (int)buf.st_size);
   fclose(fptr);
   return 0;
}
