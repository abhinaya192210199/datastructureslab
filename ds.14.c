#include<stdio.h>
void push(char element,char stack[],int*top,int stacksize)
{
	if(*top==-1)
	{
		stack[stacksize-1]=element;
		*top=stacksize-1;
	}
	else if(*top==0)
	{
		printf("the stack is already full.\n");
	}
	else
	{
		stack[(*top)-1]=element;
		(*top)--;
	}
}
void pop(char stack[],int*top,int stacksize)
{
	if(*top==-1)
	{
		printf("the stack is empty.\n");
	}
	else
	{
		printf("element popped: %c\n",stack[(*top)]);
		if((*top)==stacksize-1)
		{
			(*top)=-1;
		}
		else
		{
			(*top)++;
		}
	}
}
int main()
{
	int stacksize=4;
	char stack[stacksize];
	int top=-1;
	push('a',stack,&top,stacksize);
	printf("element on top:%c\n",stack[top]);
	push('b',stack,&top,stacksize);
	printf("element on top:%c\n",stack[top]);
	pop(stack,&top,stacksize);
	printf("element on top:%c\n",stack[top]);
	pop(stack,&top,stacksize);
	printf("top:%d\n",top);
	pop(stack,&top,stacksize);
	return 0;
}

