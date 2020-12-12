#include<stdio.h>
#include<string.h> 

void push_output(char x);
void push_stack(char y);
char pop_stack();

char output[50];
char stack[50];
int output_top=-1;
int stack_top=-1;
int output_count=0;
int stack_count=0;
main()
{
	int d,i,j,k;
	char x;
	char exp[50];
	do
	{
		printf("\n\n___________________________________INFIX TO POSTFIX___________________________________\n\n");
		printf("\nENTER INFIX EXPRESSION:");
		fflush(stdin);
		scanf("%s",&exp);
		for(i=0;i<strlen(exp);i++)
		{
			if((exp[i]>='A' && exp[i]<='Z') || (exp[i]>='a' && exp[i]<='z') || (exp[i]>='1' && exp[i]<='9'))
			{
				push_output(exp[i]);
			}
			else
			{
				if(exp[i]=='^')
				{
					push_stack(exp[i]);
				}
				else if(exp[i]=='/' &&(stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^'))
				{
					x=pop_stack();
					push_output(x);
					k=0;
					while(k<strlen(stack))
					{
						if(stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^')
				        {
					        x=pop_stack();
					        push_output(x);
				        }
				        else
				        {
				        	break;
						}
						k++;
					}
				    push_stack(exp[i]);
				}
				else if(exp[i]=='*' &&(stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^'))
				{
					x=pop_stack();
					push_output(x);
					k=0;
					while(k<strlen(stack))
					{
						if(stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^')
				        {
					        x=pop_stack();
					        push_output(x);
				        }
				        else
				        {
				        	break;
						}
						k++;
					}
				    push_stack(exp[i]);
				}
				else if(exp[i]=='+' &&(stack[stack_top]=='+' || stack[stack_top]=='-' || stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^'))
				{
					x=pop_stack();
					push_output(x);
					k=0;
					while(k<strlen(stack))
					{
						if(stack[stack_top]=='+' || stack[stack_top]=='-' || stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^')
				        {
					        x=pop_stack();
					        push_output(x);
				        }
				        else
				        {
				        	break;
						}
						k++;
					}
				    push_stack(exp[i]);
				}
				else if(exp[i]=='-' &&(stack[stack_top]=='+' || stack[stack_top]=='-' || stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^'))
				{
					x=pop_stack();
					push_output(x);
					k=0;
					while(k<strlen(stack))
					{
						if(stack[stack_top]=='+' || stack[stack_top]=='-' || stack[stack_top]=='*' || stack[stack_top]=='/' || stack[stack_top]=='^')
				        {
					        x=pop_stack();
					        push_output(x);
				        }
				        else
				        {
				        	break;
						}
						k++;
					}
				    push_stack(exp[i]);
				}
				else if((exp[i]=='+' || exp[i]=='-') && stack[stack_top]=='(')
				{
					push_stack(exp[i]);
				}
				else if((exp[i]=='*' || exp[i]=='/') && (stack[stack_top]=='(' || stack[stack_top]=='+' || stack[stack_top]=='-'))
				{
					push_stack(exp[i]);
				}
				else if(exp[i]=='(')
				{
					push_stack(exp[i]);
				}
				else if(exp[i]==')')
				{
					j=0;
					while(stack[stack_top]!='(')
					{
						x=pop_stack();
						push_output(x);
					}
					if(stack[stack_top]=='(')
					{
						x=pop_stack();
					}
				}
				else
				{
					push_stack(exp[i]);
				}
					
			}
		}
		while(stack_top!=-1)
		{
			x=pop_stack();
			if(x!='(' && x!=')')
			{
				push_output(x);
			}
		}
		printf("\nYOUR POSTFIX EXPRESSION: %s",output);
		printf("\n\nWOULD YOU LIKE TO:\n1.REPEAT OPERATION\n2.LEAVE?\n");
		fflush(stdin);
		scanf("%d",&d);
		memset(stack,0,sizeof(stack)); //used to clear and set all elements of stack as 0
		stack_count=0;
		memset(output,0,sizeof(output)); //used to clear and set all elements of output as 0
		output_count=0;
		stack_top=-1;
		output_top=-1;
	}
	while(d==1);
}
void push_output(char x)
{
	output_top=output_top+1;;
	output[output_top]=x;
	output_count++;
}
void push_stack(char y)
{
	stack_top=stack_top+1;;
	stack[stack_top]=y;
	stack_count++;
}
char pop_stack()
{
	stack_count--;
	return stack[stack_top--];
}
