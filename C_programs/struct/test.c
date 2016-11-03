#include<stdio.h>
int main()
{
struct ABC{
	char abc[10];
	int a;	
};
struct ABC xyz = {{0}}; // 
	printf("Warning Suppress in struct init xyz.a:%d xyz.abc:%s\n", xyz.a, xyz.abc);
}

/*Since your first member in the structure is an array you need:
static pkt_t stats = {{0}};
Outer braces are for the struct, inner braces are for the array.*/
/*
One way is to initialize every member of the struct inside the braces, rather than relying on the implicit zero filling. For array members, you need another {} which is likely causing the warning. */
