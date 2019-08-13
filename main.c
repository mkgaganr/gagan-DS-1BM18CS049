#include <stdio.h>
#include <stdlib.h>
#define max 5
int top=-1,stack[max];
void push();
void pop();
void display();
int main()
{
	int ch;
	while(1)
	{
		printf("\n *** stack menu ***");
		printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:exit(1); 
			break;
			default:printf("error");
			
		}
	}
	return 0;
}
void push()
{
	int val;
	if(top==max-1)
	{
		printf("\n stack is full\n");
	}
	else
	{
		printf("enter ele to push:");
		scanf("%d",&val);
		top=top+1;
		stack[top]=val;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		printf("\n deleted ele is %d",stack[top]);
		top=top-1;
	}
}
void display()
{
	int j;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("\n stack is \n");
		for(j=0;j<top-1;j++)
			printf("%d\n",stack[j]);
	}
}

