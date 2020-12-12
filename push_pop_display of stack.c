#include<stdio.h>
void push();
void pop();
void dis();
int stack[5];
int top=-1;
main()
{
	int d,option;
	do
	{
		printf("\n\n______________________________STACK OPERATIONS______________________________\n\n");
		printf("\nCHOOSE YOUR DESIRED OPERATION:\n1.PUSH\n2.POP\n3.DISPLAY\n");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				dis();
				break;
			default:
				printf("\nWRONG CHOICE!");
		}
		printf("\n\nWOULD YOU LIKE TO:\n1.CHOOSE ANOTHER OPERATION\n2.LEAVE\n");
		scanf("%d",&d);
	}
	while(d==1);
}
void push()
{
	int value;
	if(top==4)
	{
		printf("\nOVERFLOW ERROR!");
	}
	else
	{
		printf("\nENTER THE VALUE YOU WANT TO PUSH:");
		scanf("%d",&value);
		top=top+1;
		stack[top]=value;
		printf("\n\nTOP VALUE:%d",stack[top]);
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nUNDERFLOW ERROR!");
	}
	else
	{
		printf("\nPOPPED VALUE IS:%d",stack[top]);
		top--;
		printf("\n\nTOP VALUE:%d",stack[top]);
	}
}
void dis()
{
	
	int i;
	if(top>=0)
	{
		printf("\n\nTHE STACK:\n");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
			printf("\n");
		}
		printf("\nTOP VALUE:%d",stack[top]);
	}
	else
	{
		printf("\nUNDERFLOW ERROR!");
	}
}
