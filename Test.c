#include <stdio.h>
#define MAX 10

int top = -1;
int top1 = -1;
int top2 = -1;
int table1[MAX], table2[MAX], stack[MAX];

void push(int plate)
{
  if(top > MAX)
    printf("Stack is full\n");
  else
    stack[++top] = plate;
}

void push1(int plate)
{
  if(top1 > MAX)
    printf("Table 1 is full\n");
  else
    table1[++top1] = plate;
}

void push2(int plate)
{
  if(top2 > MAX)
    printf("Table 2 is full\n");
  else
    table2[++top2] = plate;
}

void display()
{
  printf("The content of Stack are: ");
  for(int i = 0; i < top; i++)
    printf("%d ", stack[i]);
  printf("\n");
}

void display1()
{
  printf("The content of Table 1 are: ");
  for(int i = 0; i < top1; i++)
    printf("%d ", table1[i]);
  printf("\n");
}

void display2()
{
  printf("The content of Table 2 are: ");
  for(int i = 0; i < top2; i++)
    printf("%d ", table2[i]);
  printf("\n");
}

int main()
{
  int i, plate;
  for(i = 0; i < MAX; i++)
    push(i);
  for(i=0;i<top;i++)
{
 if(stack[i]%2 == 0)
   push1(i);
 else
   push2(i);
 }
  display();
  display1();
  display2();
return 0;
}
