#include<stdio.h>
#include<stddef.h>

typedef struct data
{
     char Data1;
     int Data2;
     unsigned short Data3;
     unsigned short Data4;

}__attribute__((packed, aligned(2))) sampleStruct; 
						// we can keep alignment in 2^n where n=0,1,2.... and size of struct is multiple 
						    // of alignment.  
    struct foo {
	    long    p;
            char    a;
            short   b;
	    char    o1;
	    char    o;
            int     c;
    }__attribute__((packed, aligned(4))); 
/*This packed attribute can be used to pack an entire structure, as shown above, or it can be used only to pack a number of specific fields
 within a structure. 
 This is not a good thing when we want to overlay a structure on top of a memory location Typically driver data structures do not have even 
byte padding for the individual fields. Because of this, the gcc attribute ((packed)) is 
used to tell the compiler not to place any "memory holes" within a structure.*/

int main()
{

	int i = 0;
	sampleStruct a = {'F', 65535, 255, 255};
	char *p ;
	p = (char *)&a;
	printf("%ld\n", offsetof(struct data,Data1));
	printf("%ld\n", offsetof(struct data,Data2));
	printf("%ld\n", offsetof(struct data,Data3));
	printf("%ld\n", offsetof(struct data,Data4));
	printf("The size of struct:%d\n", sizeof(sampleStruct));
	printf("The size of foo :%d\n", sizeof(struct foo));
//	for (i = 0; i < 10; i++) {
//		printf("The value is:%d\n", p[i]);
//	}
	return 0;
}
