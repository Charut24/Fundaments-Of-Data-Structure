#include<stdio.h>
#include<string.h>
char stack[30];
void push(char a);
char pop();
int top=-1;
main()
{
	int d,i;
	char x;
	int temp=1;
	char arr[30];
	do
	{
		printf("\n\n___________________________________WELL-FORMED PARENTHESES___________________________________\n\n");
		printf("\nENTER A STRING: ");
		fflush(stdin);
		scanf("%s",&arr);
		int l=strlen(arr);
		for(i=0;i<l;i++)    //for loop for scanning the string entered   1 opening parenthese - push on stack 2 closing brackets pop it out
		{
			if(arr[i]=='(' || arr[i]=='{' || arr[i]=='[')
			{
				push(arr[i]);
			}
			else if(arr[i]==')' || arr[i]=='}' || arr[i]==']')
			{
				if(top==-1)
				{
					temp=0;   //this is for invalid expression
				}
				else
				{
					x=pop();
					if(arr[i]==')' &&(x=='{' || x=='['))
					{
						temp=0;
					}
					if(arr[i]=='}' &&(x=='(' || x=='['))
					{
						temp=0;
					}
					if(arr[i]==']' &&(x=='{' || x=='('))
					{
						temp=0;
					}
				}
			}
			else
			{
				temp=1;           // this is for valid expression
			}
		}
		if(top>=0)
		{
			temp=0;
		}
		if(temp==1)
		{
			printf("\nIT IS A WELL-FORMED PARENTHESES.");
		}
		else
		{
			printf("\nIT IS NOT A WELL-FORMED PARENTHESES.");
		}
		printf("\n\nWOULD YOU LIKE TO: 1 REPEAT OPERATION AND 0 TO LEAVE?  \n");
		fflush(stdin);
		scanf("%d",&d);
	}
	while(d==1);
}

void push(char a)
{
	stack[++top]=a;        // pushing the variable on the stack  
}
char pop()
{
	return stack[top--];            // poping out the expression entered in the stack
}
