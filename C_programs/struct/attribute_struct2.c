#include <stdio.h>

struct test
	{
    	    unsigned char  field1;
    	    unsigned short field2;
	    unsigned int p;
    	    unsigned long  field3;
	    unsigned char field4;
	} __attribute__ ((__packed__)); 
	
	//This will ensure that all members of the structure are packed
	//Here packed means no padding is allowed in structure member memory and it will give actual size of structure .
	
int main()
{
	typedef  struct test test_t;
	test_t a;
	printf("sizeof = %d\n", sizeof(a));
	return 0;
}
/* _attribute__((packed)) ensures that structure fields align on one-byte boundaries. If you want to ensure that your structures have the same size on all processors, the packed attribute is how you tell gcc */
