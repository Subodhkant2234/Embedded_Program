#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include<stdlib.h>
#include <sys/types.h>

#define FILENAME "/home/subodh/Embedded/c_pgms/hello.txt" 

int main(int argc, char **argv)
{
    int n;
    struct stat fileStat;
    FILE *fp = fopen(FILENAME, "w");
    if (fp == NULL) {
	perror("open");
	exit(EXIT_FAILURE);
	}

   printf("Enter n: ");
   scanf("%d",&n);
   fprintf(fp,"%d",n);
   fclose(fp);
   int ret = stat(FILENAME , &fileStat);
   if (ret == -1) {
        perror("error in stat");
        exit(-1);
    }

    if(stat(FILENAME ,&fileStat) < 0)    
   // if(stat(argv[1],&fileStat) < 0)    
       return 1;
 
    printf("---------------------------\n");
    printf("File Size: \t\t%d bytes\n",fileStat.st_size);
    printf("Number of Links: \t%d\n",fileStat.st_nlink);
    printf("File inode: \t\t%d\n",fileStat.st_ino);
 
    printf("File Permissions: \t");
    printf( (S_ISDIR(fileStat.st_mode)) ? "d" : "-");
    printf( (fileStat.st_mode & S_IRUSR) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWUSR) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXUSR) ? "x" : "-");
    printf( (fileStat.st_mode & S_IRGRP) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWGRP) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXGRP) ? "x" : "-");
    printf( (fileStat.st_mode & S_IROTH) ? "r" : "-");
    printf( (fileStat.st_mode & S_IWOTH) ? "w" : "-");
    printf( (fileStat.st_mode & S_IXOTH) ? "x" : "-");
    printf("\n\n");
 
    printf("The file %s a symbolic link\n", (S_ISLNK(fileStat.st_mode)) ? "is" : "is not");
 
    return 0;
}
