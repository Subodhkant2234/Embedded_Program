#include<stdio.h>

#define MAX 5

struct stack
{
	int arr[MAX];
	int top;
};
//preferably use typedef sstack, pstack
//provide prototypes
int main()
{
	struct stack s1;
	s1.top=-1;
	int x;
	push(&s1,10);
	push(&s1,20);
	push(&s1,25);
	pop(&s1);
	push(&s1,30);
	//push 40,50
	push(60);
	//pop 2 times
	display(&s1);
	//pop 3 times
	x=pop(); //x==INT_MIN?

	return 0;
}
void push(struct stack* ps,int val)
{
	if(isfull(ps))
	{
		printf("stack is full,overflow\n");
		return;
	}
	ps->top++;
	ps->arr[ps->top]=val;
	//ps->arr[++ps->top]=val;
}
int pop(struct stack* ps)
{
	if(isempty(ps)) {
		printf("empty,underflow\n");
		return INT_MIN;
		//assuming INT_MIN is not validdata
	}
	int val=ps->arr[ps->top];
	ps->top--;
	printf("popped element is:%d\n",val);
	return val;
}
void display(struct stack* ps)
{
	int i;
	for(i=ps->top;i>=0;i--)
		printf("%d\t",ps->arr[i]);
	printf("\n");
}
int isfull(struct stack* ps)
{
	return ps->top==(MAX-1);
}
int isempty(struct stack* ps)
{
	return ps->top==-1;
}





