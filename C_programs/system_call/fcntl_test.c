#include<stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	int flags;
	int fd, fd1 = 0;
	fd = open("./test.c", O_RDWR);
	printf("The opened file descriptor:%d\n", fd);
	flags = fcntl(fd, F_GETFL);
	if (flags == -1) {
		perror("fcntl1");
		return -1;
       }
	flags = flags | O_NONBLOCK;       // To set in nonblocking mode 
	if (fcntl(fd, F_SETFL, flags) == -1) {
		perror("fcntl2");
		return -1;
        }
	flags = fcntl(fd, F_GETFL);
	if (flags == -1) {
		perror("fcntl3");
		return -1;
       }
	return 0;                         // To see the correct flags of file status see strace ./a.out
}
