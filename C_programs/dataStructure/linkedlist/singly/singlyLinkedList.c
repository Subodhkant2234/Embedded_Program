#include<stdlib.h>
#include<stdio.h>
struct node{
		int info;
		struct node *link;
};

struct node *reverseList(struct node *start);
struct node * delAtEnd(struct node *start);
struct node *delAtBeg(struct node *start);
void search(start, data);
struct node *addatend(struct node *start, int data);
void count(struct node *start);
void display(struct node *start);
struct node *create_list(struct node *start);
struct node *addatbeg(struct node *start, int data);
int main(int argc, char *argv[])
{
		struct node *start = NULL;
		int data, choice, item, pos;
		while(1) {
				printf("1. Create List\n");
				printf("2. Display\n");
				printf("3. Count \n");
				printf("4. Search\n");
				printf("5. Add at end\n");
				printf("6. Add at beginning\n");
				printf("7. delete at end\n");
				printf("8. delete at beginning\n");
				printf("9. quit\n");
				printf("10. reverse\n");
				printf("Enter your Choice\n");
				scanf("%d", &choice);
				switch(choice) {
						case 1: 
								start = create_list(start);
								break;
						case 2: 
								display(start);
								break;
						case 3: 
								count(start);
								break;
						case 4: 
								printf("Enter the element to be searched\n");
								scanf("%d", &data); 
								search(start, data);
								break;
						case 5: 
								printf("Enter the element to be add\n");
								scanf("%d", &data); 
								start = addatend(start, data);
								break;
						case 6:
								printf("Enter the element to be add\n");
								scanf("%d", &data); 
								start = addatbeg(start, data);
								break;
						case 7:
								start= delAtEnd(start);								
								break;
						case 8:
								start = delAtBeg(start);
								break;
						case 9: 
								exit(1);
						case 10:
								start = reverseList(start);
						default:
								printf("Wrong Choice\n");
				}



		}

}
struct node *create_list(struct node *start)
{
		int i, n, data;
		printf("Enter the number of nodes\n");
		scanf("%d", &n);	
		start = NULL;
		if(n == 0) 
				return start;
		printf("Enter the Element to be inserted\n");
		scanf("%d", &data);
		start = addatbeg(start, data);
		for(i = 2; i <= n; i++) {
				printf("Enter the element to be inserted\n");
				scanf("%d", &data);
				start= addatend(start, data);
		}
		return start;
}

struct node *addatbeg(struct node *start, int data)
{
		struct node *tmp;
		tmp = (struct node *)malloc(sizeof(struct node)); 
		tmp->info = data;
		tmp->link = start;
		start = tmp;
		return start;
}

struct node *addatend(struct node *start, int data)
{
		struct node *tmp, *p;
		tmp = (struct node *)malloc(sizeof(struct node)); 
		tmp->info = data;
		p = start;
		while(p->link){
				p = p->link;
		}
		p->link = tmp;
		tmp->link=NULL;
		return start;
}

void display(struct node *start)
{
		struct node *p = start;
		while(p){	
				printf("Data:%d\n", p->info);
				p = p->link;
		}
}
void count(struct node *start)
{
		int count = 0;
		struct node *p = start;
		while(p){	
				count++;
				p = p->link;
		}
		printf("Total Count=%d\n", count);
}
void search(start, data)
{
		struct node *p = start;
		while(p) {
				if(p->info == data){
						printf("element %d Matched found in a list\n", data);
						break;
				}
				p = p->link;
		}
}

struct node * delAtEnd(struct node *start)
{
	struct node *p = start;
	struct node *tmp;
	while(p->link->link) {
		p = p->link;
	}
	printf("data before end:%d\n", p->info);
	tmp = p->link;
	free(tmp);
	p->link = NULL;
	return start;
}

struct node *delAtBeg(struct node *start)
{
	struct node *p = start;
	start = start->link;
	free(p);
	return start;
}
struct node *reverseList(struct node *start)
{
	struct node *prev, *ptr, *next;
	prev=NULL;
	ptr=start;
	while(ptr != NULL) {
		next = ptr->link;
		ptr->link = prev;
		prev = ptr;
		ptr = next;
	}
	start = prev;
	return start;
}
