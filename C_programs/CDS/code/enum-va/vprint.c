#include<stdio.h>
#include<stdarg.h>

int main()
{
	vprint("idc",23,2.3,'A');
	vprint("fics",5.6f,46,'@',"hello");
	vprint("cd",'~',7.25);
	return 0;
}
void vprint(const char* ps,...)
{
	va_list ap;
	va_start(ap,ps);

	int i;char ch;
	//for(ptr=ps;*ptr;ptr++)
	for(i=0;(ch=ps[i])!='\0';i++)
	{
		switch(ch) {
			case 'i': x=va_arg(ap,int);
				  //print x
				  break;
			case 'f': y=va_arg(ap,float);
				  //print y
				  break;
			//case 'd':
			//case 'c':
			//case 's':
		}
	}
	va_end(ap);
}
	

