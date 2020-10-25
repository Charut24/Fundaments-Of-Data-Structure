#include<stdio.h>
int insert_position(int,int,int [],int);
int insert_begin(int,int [],int);
int insert_end(int,int [],int);
int delete_position(int,int [],int);
int delete_element(int,int [],int);
int search_position(int,int [],int);
int search_element(int,int [],int);
int revert(int [],int);
main()
{
	int choice, pos, ele;
	char ch;
	int n, arr[20],i;
		
		printf("\n Enter the number of elements in an array: ");
	    scanf("%d",&n);
	    for (i = 0; i < n; i++) 
            arr[i] = i + 1; 
	    printf("\n enter the elements: ");
	    for(i=0;i<n;i++)
	    {
	    	scanf("%d",&arr[i]);
	    }
	    printf("\n ARRAY: ");
	    for(i=0;i<n;i++)
	    {
	    	printf("%d   ",arr[i]);
	    }
	    do
	   {
	    printf("\n \n Select from the following choices.");
	    printf("\n \n Type 1 for Insertion at a position in the array.");
	    printf("\n \n Type 2 for Insertion at beginning.");
	    printf("\n \n Type 3 for Insertion at end.");
	    printf("\n \n Type 4 for Delete by position.");
	    printf("\n \n Type 5 for Delete by element (first occurrence of element).");
	    printf("\n \n Type 6 for Search by position.");
	    printf("\n \n Type 7 for Search by element (present or not).");
	    printf("\n \n Type 8 for Revert the array (in place).");
	    printf("\n \n Enter your choice: ");
	    scanf("%d",&choice);
	
	    switch(choice)
	    {
		    case 1:
			    printf("\n INSERTION AT A POSITION IN THE ARRAY. ");
			    printf("\n Enter the position: ");
			    scanf("%d",&pos);
			
			    printf("\n Enter the element: ");
			    scanf("%d",&ele);
			    insert_position(pos,ele,arr,n);
			    break;
		 
	      	case 2:
			    printf("\n INSERTION AT BEGINING. ");
			    printf("\n Enter the element you want to insert at the begining: ");
			    scanf("%d", &ele);
			    insert_begin(ele,arr,n);
			    break;
		
		    case 3:
			    printf("\n INSERTION AT END. ");
			    printf("\n Enter the element you want to insert at the end: ");
			    scanf("%d", &ele);
			    insert_end(ele,arr,n);
			    break;
		
		    case 4:
    	        printf("\n DELETION BY POSITION. ");
		        printf("\n Enter the position of element you want to delete: ");
		    	scanf("%d", &pos);
		    	delete_position(pos,arr,n);
		    	break;
			
	    	case 5:
			    printf("\n DELETE BY ELEMENT (first occurrence of element). ");
			    printf("\n Enter the element you want to delete: ");
		    	scanf("%d", &ele);
		    	delete_element(ele,arr,n);
		    	break;
			
		    case 6:
	    	    printf("\n SEARCH BY POSITION. ");
		    	printf("\n Enter the position of element you want to search: ");
		    	scanf("%d", &pos);
		    	printf("\n Element found: %d ",search_position(pos,arr,n));
	    		break;
		
		    case 7:
		    	printf("\n SEARCH BY ELEMENT(present or not). ");
		    	printf("\n Enter the element you want to search: ");
	    		scanf("%d", &ele);
		    	int a=search_element(ele,arr,n);
		    	if(a!=-1)
	    			printf("\n Element found at position: %d ",a);
		    	else
	    		    printf("\n Element not found");
	    		break;
		
		    case 8:
		    	printf("\n REVERT THE ARRAY. ");
		    	revert(arr,n);
	    		break;
		
	    	default:
	    		printf("\n WRONG CHOICE. ");
		    	break;
	    }
	    printf("\n Type 'y' to run this again: \n ");
        fflush(stdin);
        scanf("%c", &ch);
	}while(ch=='y');
	fflush(stdin);
	return 0;
}

int insert_position(int p, int e, int array[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",array[i]);	
	}
	n++;
	for(i=n;i>=p;i--)
	    array[i] = array[i-1];
	array[p-1] = e;
	printf("\n \n  Modified array: ");
	for(i=0;i<n;i++)
	    printf("%d\t ", array[i]);
}

int insert_begin(int e, int array[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",array[i]);	
	}
	n++;
	for(i=n;i>=1;i--)
	    array[i] = array[i-1];
	    array[0]=e;
	printf("\n \n Modified array: ");
	for(i=0;i<n;i++)
	    printf("%d\t ", array[i]);
}

int insert_end(int e, int array[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",array[i]);	
	}
	array[n]=e;
	n++;
	printf("\n \n Modified array: ");
	for(i=0;i<n;i++)
	    printf("%d\t ", array[i]);
}

int delete_position(int p, int arr[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",arr[i]);	
	}
	for(i=p-1;i<n;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	printf("\n \n Modified array: ");
	for(i=0;i<n;i++)
	    printf("%d\t ", arr[i]);
}

int delete_element(int e, int arr[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",arr[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(e==arr[i])
		{
			arr[i]=0;
			break;
		}
	}
	printf("\n \n Modified array: ");
	for(i=0;i<n;i++)
	    printf("%d\t ", arr[i]);
}

int search_position(int p, int arr[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",arr[i]);	
	}
	return arr[p-1];
}

int search_element(int e, int arr[], int n)
{
	int i;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",arr[i]);	
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			return i+1;
		}
	}
	return -1;
}

int revert(int arr[],int n)
{
	int i,j,temp;
	printf("\n Original array: \n ");
	for(i=0;i<n;i++)
	{
	    printf(" %d\t",arr[i]);	
	}
	for(i=0,j=n-1;i<=j;i++,j--)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	printf("\n \n Modified array: ");
	for(i=0;i<n;i++)
	    printf("%d\t ", arr[i]);
}

