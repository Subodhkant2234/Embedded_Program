#include<stdio.h>

void printm(int nr,int nc,int[][nc]);
void print2(int,int,int (*)[]);

typedef int (*pmtype)[4];
void print3(int,int,pmtype);

int main()
{
	int m[3][4]={0};
	printm(3,4,m);
	print2(3,4,m); //print2(3,4,&m[0])
	print3(3,4,m);
	return 0;
}
void print3(int nr,int nc,pmtype pm)
{

}
//void printm(int marr[][4],int nr,int nc)
void printm(int nr,int nc,int marr[][nc])
{

}
void print2(int nr,int nc,int (*pm)[nc])
{

}
