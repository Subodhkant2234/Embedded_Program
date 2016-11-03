#include<stdio.h>
#include<malloc.h>

struct node
{
	int data;
	struct node* next;
};

typedef struct node snode;
typedef struct node* psnode; //typedef snode* psnode;

psnode start=NULL;

int main()
{
	insbeg(30);
	insbeg(20);
	insbeg(10);
	insbeg(12);
	display();
	delbeg(); //12
	insend(40);
	insend(50);
	rdisplay(start);
	delend();
}
void rdisplay(psnode p)
{
	if(p==NULL) return;
	printf("%d\n",p->data);
	rdisplay(p->next);
}
void delend()
{
	if(start==NULL) { printf("empty\n"); return; }
	
	psnode plast,prev=NULL,pcur=start;
	while(pcur->next) {
		prev=pcur;
		pcur=pcur->next;
	}
	plast=pcur;
	if(prev)
		prev->next=NULL;
	else
		start=NULL;

	int val=plast->data;
	free(plast);
	printf("Data of deleted node:%d\n",val);
	//print or return val
}
void insend(int val)
{
	psnode pnew=malloc(sizeof(snode));
	pnew->data=val;
	pnew->next=NULL;

	if(start==NULL)
		start=pnew;
	else {
		psnode plast,pcur=start;
		while(pcur->next) pcur=pcur->next;
			plast=pcur;
		plast->next=pnew;
	}
}
void insbeg(int val)
{
	psnode pnew=malloc(sizeof(snode));
	pnew->data=val;
	pnew->next=start;
	start=pnew;
}
void delbeg()
{
	if(start==NULL) {
		printf("list is empty");
		return;
	}
	psnode pdel=start;
	start=pdel->next;
	int val=pdel->data;
	free(pdel);
	
	printf("deleted node data:%d\n",val);
	//print or return val
}
void display()
{
	psnode pcur=start;
	while(pcur)  //while(p!=NULL)
	{
		printf("%d\t",pcur->data);
		pcur=pcur->next;
	}
	printf("\n");
}








