#include<stdio.h>
#define MAX 100

int dec,top,stack[MAX];

void Push()
{
	while(dec>0) 
	{
        int remainder=dec%2;
        dec=dec/2;
        if(top>=MAX)
            printf("Stack overflow!");
        else
		{
            top++;
            stack[top]=remainder; 
		}
	}
}

void Pop()
{
	int i;
	printf("No. in binary is:");
	for(i=top;i>0;i--)
	
    	{
		    printf("%d",stack[i]);
		    top--;
	    }
}

main()
{
	printf("\n ENTER ANY POSITIVE NUMBER: ");
	scanf("%d",&dec);
	
	Push();
	Pop();
	return 0;
}


