#include <stdio.h>
struct Point {
	int x;
	int y;
};

int main()
{
	int x = 0;
	struct Point p1 = {10, 20};
	//struct Point p2 = p1; // works: contents of p1 are copied to p2
	struct Point p2;
	p2=p1;
	printf(" p2.x = %d, p2.y = %d\n", p2.x, p2.y);
	//if (p1 == p2) {   /* Compiler error Can't check equality on whole structure */
	//	printf("Both Structures are equal\n");
	//}
	x = ((p1.x == p2.x) && (p1.y == p2.y)) ? 1 : 0;
	if(x == 1) 
		printf("Structure is same\n");   
	else 
		printf("Struct is not same\n");
	getchar();
	return 0;
}
