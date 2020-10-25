#include<stdio.h>
int Binary_search_iterative(int array[], int num, int search);
int Binary_search_Recursion(int array[], int N, int num, int search);
void Linear_search(int array[],int num,int search);

main()
{
	int i, array[50], num, search, choice, Found;
	char ch;
	
	do
	{
		printf("\n Select from the following options. ");
	    printf("\n 1. BINARY SEARCH WITH ITERATION.");
	    printf("\n 2. BINARY SEARCH WITH RECURSION. ");
	    printf("\n 3. LINEAR SEARCH. ");
	    printf("\n Enter choice: ");
	    scanf("%d",&choice);
	    switch(choice)
	    {
		    case 1:
		    	printf("\n Enter the number of elements : ");
            	scanf("%d",&num);
            	printf("Enter %d integer(s)( ascending order)\n", num);
            	for (i = 0; i < num; i++)
	                scanf("%d", &array[i]);
	            printf("\n Array : ");
            	printf("\n POSITION\t\tELEMENT ");
            	for(i=0;i<num;i++)
            	{
            		printf("\n%d\t\t\t%d\n",i,array[i]);
            	}
            	printf("\n Enter a number to search\n");
	            scanf("%d", &search);
			    if((Binary_search_iterative(array,num,search)) == -1)
			    {
			    	printf("\n Element not found. ");
				}
				else
				{
					printf("\n Element found at position(first occurence) %d ",(Binary_search_iterative(array,num,search)));
				}
			    break;
		
		    case 2:
		    	printf("\n Enter the number of elements : ");
            	scanf("%d",&num);
            	printf("Enter %d integer(s)( ascending order)\n", num);
            	for (i = 0; i < num; i++)
	                scanf("%d", &array[i]);
	            printf("\n Array : ");
            	printf("\n POSITION\t\tELEMENT ");
            	for(i=0;i<num;i++)
            	{
            		printf("\n%d\t\t\t%d\n",i,array[i]);
            	}
            	printf("\n Enter a number to search\n");
	            scanf("%d", &search);
			    if((Binary_search_Recursion(array,0,num,search)) == -1)
			    {
			    	printf("\n Element not found. ");
				}
				else
				{
					printf("\n Element found at position(first occurence) %d ",Binary_search_Recursion(array,0,num,search));
				}
			    break;
			    
			case 3:
				printf("\n Enter the number of elements : ");
            	scanf("%d",&num);
            	printf("Enter %d integer(s)\n", num);
            	for (i = 0; i < num; i++)
	                scanf("%d", &array[i]);
	            printf("\n Array : ");
            	printf("\n POSITION\t\tELEMENT ");
            	for(i=0;i<num;i++)
            	{
            		printf("\n%d\t\t\t%d\n",i,array[i]);
            	}
            	printf("\n Enter a number to search\n");
	            scanf("%d", &search);
			    Linear_search(array,num,search);
			    break;
		
	    	default:
			    printf("\n WRONG CHOICE. ");
	    }
	    printf("\n Enter y to run again and n to exit.");
	    printf("\n Enter (y/n): ");
	    fflush(stdin);
	    scanf("%c",&ch);
	}while(ch == 'y');
	fflush(stdin);
	return 0;
}

int Binary_search_iterative(int array[], int num, int search)
{
	int begin, end, middle, i, temp=0;
	begin=0;
	end=num-1;
	while(begin<=end)
	{
		middle = (begin+end)/2;
		if(array[middle] == search)
		{
			return middle;
		}
		if(array[middle]>search)
		{
			end = middle - 1;
		}
		if(array[middle] < search)
		{
			begin = middle + 1;
		}
	}
	return -1;
}

int Binary_search_Recursion(int array[], int N, int num, int search)
{
	int begin = N, end = num, middle;
	if (end >= begin)
	{
        middle = (begin + end)/2;
        if (array[middle] == search)
        {
        	return middle;
		}
        if (array[middle] > search)
        {
        	return Binary_search_Recursion(array, N, middle-1, search);
		}
        return Binary_search_Recursion(array, middle+1, num, search);
    }
   return -1;
}

void Linear_search(int array[],int num,int search)
{
	int i,temp=0;
	for(i=0;i<num;i++)
	{
		if(array[i]==search)
		{
			printf("\n Element found at position %d ",i);
			temp++;
		}
	}
    if (temp == 0)
      printf("\n %d isn't present in the array.\n", search);
    else
      printf("\n %d is present %d times in the array.\n", search,temp);
}
