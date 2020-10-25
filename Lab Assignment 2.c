#include<stdio.h>
#include<stdlib.h>
main()
{
	int choice, i, j, r, c, r2, c2,row1,column1,row2,column2, arr1[20][20],arr2[20][20],a[10][3],b[10][3],non_zero_val1,non_zero_val2;
	char ch;
	printf("\n Enter the number of rows: ");
	scanf("%d",&r);
	printf("\n Enter the number of columns: ");
	scanf("%d",&c);
	
	printf("\nEnter elements of 1st matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n enter: ");
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d   ",arr1[i][j]);
			if (j == c - 1) 
                printf("\n \n");
		}
	}
	
	do
	{
		printf("\n Select from the following choices. \n ");
		printf("\n Type 1 for ADDITION.");
		printf("\n Type 2 for SUBTRACTION.");
		printf("\n Type 3 for MULTIPLICATION.");
		printf("\n Type 4 for FINDING GRATEST NUMBER IN EACH ROW.");
		printf("\n Type 5 for ADDITION OF MAJOR DIAGONAL ELEMENTS.");
		printf("\n Type 6 for SPARSE MATRIX REPRESENTATION FOR A GIVEN MATRIX.");
		printf("\n Type 7 for SPARSE MATRIX ADDITION. ");
		printf("\n Type 8 for SPARSE MATRIX TRANSPOSE. ");
		printf("\n Enter your choice: ");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
				printf("\n Enter the number of rows for matrix 2: ");
				scanf("%d",&r2);
				printf("\n Enter the number of columns for matrix 2: ");
				scanf("%d",&c2);
				if(r==r2 && c==c2)
				{
					printf("\nEnter elements of 2nd matrix:\n");
	                for(i=0;i<r;i++)
	                {
		                for(j=0;j<c;j++)
		                    {
		                    	printf("\n enter: ");
		                      	scanf("%d",&arr2[i][j]);
	                        }
	                }
	                for(i=0;i<r;i++)
                	{
	                	for(j=0;j<c;j++)
	                	{
	                		printf("%d   ",arr2[i][j]);
		                	if (j == c - 1) 
                                printf("\n \n");
	                	}
	                }
	                Addition(arr1,arr2,r,c);
				}

				else
				    printf("\n Can't Add unequal matrix");
				break;
			
			case 2:
				printf("\n Enter the number of rows for matrix 2: ");
				scanf("%d",&r2);
				printf("\n Enter the number of columns for matrix 2: ");
				scanf("%d",&c2);
				if(r==r2 && c==c2)
				{
					printf("\nEnter elements of 2nd matrix:\n");
	                for(i=0;i<r;i++)
	                {
		                for(j=0;j<c;j++)
		                    {
		                    	printf("\n enter: ");
		                      	scanf("%d",&arr2[i][j]);
	                        }
	                }
	                for(i=0;i<r;i++)
                	{
	                	for(j=0;j<c;j++)
	                	{
	                		printf("%d   ",arr2[i][j]);
		                	if (j == c - 1) 
                                printf("\n \n");
	                	}
	                }
	                Subtraction(arr1,arr2,r,c);
				}
				    
				else
				    printf("\n Can't Subtract unequal matrix");
				break;
			
			case 3:
				printf("\n Enter the number of rows for matrix 2: ");
				scanf("%d",&r2);
				printf("\n Enter the number of columns for matrix 2: ");
				scanf("%d",&c2);
				if(c==r2)
				{
					printf("\nEnter elements of 2nd matrix:\n");
	                for(i=0;i<c;i++)
	                {
		                for(j=0;j<c2;j++)
		                    {
		                    	printf("\n enter: ");
		                      	scanf("%d",&arr2[i][j]);
	                        }
	               }  
	               for(i=0;i<c;i++)
                	{
	                	for(j=0;j<c2;j++)
	                	{
	                		printf("%d   ",arr2[i][j]);
		                	if (j == c2 - 1) 
                                printf("\n \n");
	                	}
	                }
	               Multiplication(arr1,arr2,r,c,c2);
				}
				else
					printf("\n Can't Multiply.");
				break;
			
			case 4:
				printf("\n Enter the number of rows for matrix 2: ");
				scanf("%d",&r2);
				printf("\n Enter the number of columns for matrix 2: ");
				scanf("%d",&c2);
				printf("\nEnter elements of 2nd matrix:\n");
	            for(i=0;i<r2;i++)
	            {
		            for(j=0;j<c2;j++)
		                {
	                    	printf("\n enter: ");
	                      	scanf("%d",&arr2[i][j]);	   
					    }
	            }  
	            for(i=0;i<r2;i++)
                	{
	                	for(j=0;j<c2;j++)
	                	{
	                		printf("%d   ",arr2[i][j]);
		                	if (j == c2 - 1) 
                                printf("\n \n");
	                	}
	                }
				Greatest_number_each_row_matrix1(arr1,r,c);
				
				Greatest_number_each_row_matrix2(arr2,r2,c2);
				break;
			case 5:
				printf("\n Enter the number of rows for matrix 2: ");
				scanf("%d",&r2);
				printf("\n Enter the number of columns for matrix 2: ");
				scanf("%d",&c2);
				printf("\nEnter elements of 2nd matrix:\n");
	            for(i=0;i<r2;i++)
	            {
		            for(j=0;j<c2;j++)
		                {
	                    	printf("\n enter: ");
	                      	scanf("%d",&arr2[i][j]);	   
					    }
	            }  
	            for(i=0;i<r2;i++)
                	{
	                	for(j=0;j<c2;j++)
	                	{
	                		printf("%d   ",arr2[i][j]);
		                	if (j == c2 - 1) 
                                printf("\n \n");
	                	}
	                }
				Addition_diagonal_ele_matrix1(arr1,r);
				
				Addition_diagonal_ele_matrix2(arr2,r2);
				break;
			
			case 6:
				printf("\n Enter the number of rows for matrix: ");
				scanf("%d",&r2);
				printf("\n Enter the number of columns for matrix: ");
				scanf("%d",&c2);
				printf("\nEnter elements for sparse matrix:\n");
	            for(i=0;i<r2;i++)
	            {
		            for(j=0;j<c2;j++)
		                {
	                    	printf("\n enter: ");
	                        scanf("%d",&arr2[i][j]);	   
					    }
	            }  
				Sparse_matrix_represnt(arr2,r2,c2);
				break;
			case 7:
				printf("\n enter the number of rows and columns for sparse matrix 1: ");
	            scanf("%d %d",&row1,&column1);
	            printf("\n Enter the number of NON ZERO VALUES: ");
	            scanf("%d",&non_zero_val1);
	            a[0][0]=row1;
	            a[0][1]=column1;
	            a[0][2]=non_zero_val1;
	
            	for(i=1;i<=non_zero_val1;i++)
            	{
            		printf("\n Enter the row index, column index, the non- zero value: ");
            	    scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
            	}
	
            	printf("\n enter the number of rows and columns for sparse matrix 2: ");
            	scanf("%d %d",&row2,&column2);
            	printf("\n Enter the number of NON ZERO VALUES: ");
            	scanf("%d",&non_zero_val2);
            	b[0][0]=row2;
            	b[0][1]=column2;
            	b[0][2]=non_zero_val2;
	
	            for(i=1;i<=non_zero_val2;i++)
	            {
	            	printf("\n Enter the row index, column index, the non- zero value: ");
	                scanf("%d %d %d",&b[i][0],&b[i][1],&b[i][2]);
	            }
	            Sparse_matrix_addition(a,b);
	            break;
	        
	        case 8:
	        	printf("\n enter the number of rows and columns for sparse matrix 1: ");
	            scanf("%d %d",&row1,&column1);
	            printf("\n Enter the number of NON ZERO VALUES: ");
	            scanf("%d",&non_zero_val1);
	            a[0][0]=row1;
	            a[0][1]=column1;
	            a[0][2]=non_zero_val1;
	
            	for(i=1;i<=non_zero_val1;i++)
            	{
            		printf("\n Enter the row index, column index, the non- zero value: ");
            	    scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
            	}
	        	Transpose_matrix(a);
				break;
	        	
			default:
				printf("\n WRONG CHOICE.");
				break;
		}printf("\n Type 'y' to run this again: \n ");
        fflush(stdin);
        scanf("%c", &ch);
	}while(ch=='y');
	fflush(stdin);
}

int Addition(int arr1[][20], int arr2[][20], int r, int c)
{
	int i,j,sum[20][20];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]= arr1[i][j]+arr2[i][j];
		}
	}
	printf("\n THE SUM = \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d   ",sum[i][j]);
			if (j == c - 1) 
                printf("\n \n");
		}
	}
}

int Subtraction(int arr1[][20], int arr2[][20], int r, int c)
{
	int i,j,subtract[20][20];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			subtract[i][j]= arr1[i][j]-arr2[i][j];
		}
	}
	printf("\n THE SUBTRACTION = \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d   ",subtract[i][j]);
			if (j == c - 1) 
                printf("\n \n");
		}
	}
}

int Multiplication(int arr1[][20], int arr2[][20], int r, int c, int c2)
{
	int i,j,k, multiply[20][20];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c2;j++)
		{
			multiply[i][j] = 0;
		}
	}
	for (i=0;i<r;i++) 
	{
	    for (j=0;j<c2;j++)
		{
		    for (k=0;k<c;k++)
			{
				multiply[i][j] = multiply[i][j]+arr1[i][k] * arr2[k][j];
            }
        }      
    }
	printf("\n THE MULTIPLICATION = \n ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d   ",multiply[i][j]);
			if (j == c2 - 1) 
                printf("\n \n");
		}
	}
}

int Greatest_number_each_row_matrix1(int arr1[][20], int r, int c)
{
	int i=0, j, max = 0,Greatest_number[r];
    while (i<r)
    {
        for (j = 0;j<c;j++)
		{ 
            if (arr1[i][j] > max)
               max= arr1[i][j]; 
        } 
        Greatest_number[i] = max; 
        max= 0; 
        i++; 
    }
    printf("\n Greatest numbers in each row of Matrix 1 = ");
    for(i = 0; i<r;i++)
    {
        printf("%d ",Greatest_number[i]);
        printf("\n \n");
    }
    
}
int Greatest_number_each_row_matrix2(int arr2[][20], int r, int c)
{
	int i=0, j, max = 0,Greatest_number[r];
    while (i<r)
    {
        for (j = 0;j<c;j++)
		{ 
            if (arr2[i][j] > max)
               max= arr2[i][j]; 
        } 
        Greatest_number[i] = max; 
        max= 0; 
        i++; 
    }
    printf("\n Greatest numbers in each row of Matrix 2 = ");
    for(i = 0; i<r;i++)
    {
    	printf("%d ",Greatest_number[i]);
        printf("\n \n");
	}
}

int Addition_diagonal_ele_matrix1(int arr1[][20], int r)
{
	int i,j, sum=0;
	for(i=0;i<r;i++)
	{
		sum=sum+arr1[i][i];
	}
	printf("\n FOR MATRIX 1:  Sum of diagonal elements= %d",sum);
}

int Addition_diagonal_ele_matrix2(int arr2[][20], int r)
{
	int i,j, sum=0;
	for(i=0;i<r;i++)
	{
		sum=sum+arr2[i][i];
	}
	printf("\n FOR MATRIX 2: Sum of diagonal elements= %d",sum);
}

int Sparse_matrix_represnt(int arr2[][20],int r2,int c2)
{
	int i, j, k,b[20][3];
    k = 1;
    b[0][0] = r2;
    b[0][1] = c2;
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            if (arr2[i][j] != 0)
            {
                b[k][0] = i;
                b[k][1] = j;
                b[k][2] = arr2[i][j];
                k++;
            }
        }
        b[0][2] = k - 1;
    }
    c2 = b[0][2];
    printf("\nSparse form - list of 3 triples\n\n");
    printf("row\tcolumn\tvalue\n");
    for (i = 0; i <= c2; i++)
    {
        printf("%d\t%d\t%d\n", b[i][0], b[i][1], b[i][2]);
    }
} 

int Sparse_matrix_addition(int a[][3],int b[][3])
{
	int result[20][3],i=0,j=0,k=0,m,n,temp;
	if(a[0][0]!=b[0][0] || a[0][1]!=b[0][1])
	{
		printf("\n addition not possible unequal size.");
		exit(0);
	}
	result[0][0]=a[0][0];
	result[0][1]=a[0][1];         //saving the no. of rows and columns in resultant matrix
	
	m=a[0][2];  //non zero values in matrix a
	n=b[0][2];  //non zero values in matrix b
	
	while(i<=m && j<=n)
	{
		if(a[i][0]<b[j][0])
		{
			result[k][0]=a[i][0];
			result[k][1]=a[i][1];
			result[k][2]=a[i][2];
			k++;
			i++;
		}
		else if(a[i][0]>b[j][0])
		{
			result[k][0]=b[j][0];
			result[k][1]=b[j][1];
			result[k][2]=b[j][2];
			k++;
			j++;
		}
		else if(a[i][1]<b[j][1])
		{
			result[k][0]=a[i][0];
			result[k][1]=a[i][1];
			result[k][2]=a[i][2];
			k++;
			i++;
		}
		else if(a[i][1]>b[j][1])
		{
			result[k][0]=b[j][0];
			result[k][1]=b[j][1];
			result[k][2]=b[j][2];
			k++;
			j++;
		}
		else
		{
			result[k][0]=a[i][0];
			result[k][1]=a[i][1];
			result[k][2]=a[i][2] + b[j][2];
			k++;
			i++;
			j++;
		}
	}
	while(i<=m)
	{
		result[k][0]=a[i][0];
		result[k][1]=a[i][1];
		result[k][2]=a[i][2];
		k++;			
		i++;
	}
	while(j<=n)
	{
		result[k][0]=b[j][0];
		result[k][1]=b[j][1];
		result[k][2]=b[j][2];
		k++;
		j++;
	}
	result[0][2]=k-1;   //assign result[0][2] as k-1 which shows it contains all non zero terms
	temp= result[0][2];
	printf("row\tcolumn\tvalue\n");
	for(i=0;i<=temp;i++)
	{
		printf("\n%d\t%d\t%d",result[i][0],result[i][1],result[i][2]);
	}
}

Transpose_matrix(int a[][3])
{
	int i, j, k,n,num;
	int transpose[10][3];
	transpose[0][0]=a[0][1];
	transpose[0][1]=a[0][0];
	transpose[0][2]=a[0][2];
	
	k=1;
	n=a[0][2];
	
	for(i=0;i<a[0][1];i++)
		for(j=1;j<=n;j++)
			//if a column number of current triple==i then insert the current triple in transpose
			if(i==a[j][1])
			{
				transpose[k][0]=i;
				transpose[k][1]=a[j][0];
				transpose[k][2]=a[j][2];
				k++;
			}

   num=transpose[0][2];	//no of 3-triples
	
	printf("\nAfter Transpose:\n");
	
	printf("\nrow\t\tcolumn\t\tvalue\n");
	for(i=0;i<=num;i++)
		printf("%d\t\t%d\t\t%d\n",transpose[i][0],transpose[i][1],transpose[i][2]);
}

