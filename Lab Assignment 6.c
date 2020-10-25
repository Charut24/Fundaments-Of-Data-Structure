#include<stdio.h>
#include<stdlib.h>
void Bubble_sort(int array[], int n);
void Insertion_sort(int array[], int n);
void Selection_sort(int array[], int n);

main()
{
	int array[50], n, choice, i;
	char ch;
	do
	{
		printf("\n Enter total number of elements of array: ");
	    scanf("%d",&n);
	    printf("\n Enter elements : ");
	    for(i=0;i<n;i++)
	    {
		    scanf("%d",&array[i]);
		    printf("\n");
    	}
	
	    printf("\n Select from the following. ");
    	printf("\n 1. BUBBLE SORT ");
    	printf("\n 2. INSERTION SORT ");
    	printf("\n 3. SELECTION SORT ");
    	printf("\n Enter your choice: ");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:
    			Bubble_sort(array,n);
    			break;
    		
    		case 2:
    			Insertion_sort(array,n);
    			break;
    		
    		case 3:
    			Selection_sort(array,n);
    			break;
    		
    		default:
    			printf("\n WRONG CHOICE. ");
    			break;
		}printf("\n Type 'y' to run this again: \n ");
        fflush(stdin);
        scanf("%c", &ch);
	}while(ch=='y');
	fflush(stdin);
	return 0;
}

void Bubble_sort(int array[], int n)
{
   int i, j, k, temp;
   printf("\n Unsorted Data: ");
   for(k=0;k<n;k++)
   {
      printf("\t%d",array[k]);
   }
   printf("\n ");
   for(i=0;i<n-1;i++)
   {
        for(j=0;j<n-(i+1);j++)
		{
            if(array[j]>array[j + 1])
			{
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
        printf("\n After pass %d : ", i+1);
        for (k=0;k<n;k++)
		{
            printf("\t%d",array[k]);
        }
    }
}

void Insertion_sort(int array[], int n)
{
	int i,j,k,temp;
	printf("\n Unsorted Data: ");
    for(k=0;k<n;k++)
    {
       printf("\t%d",array[k]);
    }
    printf("\n ");
    for(i=0;i<n;i++)
    {
    	j=i;
    	while(j<=i && j>0)
    	{
    		if(array[j]<array[j-1])
    		{
    			temp = array[j];
    			array[j] = array[j-1];
    			array[j-1] = temp;
			}
			j--;
		}
		printf("\nAfter pass %d : ", i+1);
        for (k=0;k<n;k++)
		{
            printf("\t%d",array[k]);
        }
	}
}

void Selection_sort(int array[], int n)
{
	int i,j,k,temp,min,position;
	printf("\n Unsorted Data: ");
    for(k=0;k<n;k++)
    {
       printf("\t%d",array[k]);
    }
    printf("\n ");
	for(i=0;i<n-1;i++)
	{
	    min=i; 
		for(j=i+1;j<n;j++) //comparisons
        {
		    if(array[min]>array[j])
            {
            	min=j;
            }
        }
        temp=array[i];
		array[i]=array[min];
		array[min]=temp;
		printf("\nAfter pass %d : ", i+1);
        for (k=0;k<n;k++)
	    {
            printf("\t%d",array[k]);
        }
    }
}
