#include<stdio.h>

struct {   //anonymous,tag name is optional
	int x;
	int y;
	int z;
};

typedef struct sample{
	int x;
	int y;
	double z;
	float y;
}smptype; //smptype is an alias.not a variable
//typedef struct sample smptype
typedef smptype* pstype;
//typedef struct sample* pstype;

int main()
{
	smptype s1;

}
void test(smptype* ptr) //void test(pstype ptr)
{


}

