#include<stdio.h>
#include<string.h>

void Create();
void Insert_elements();
void Modify();
void Delete();
void Display();
int count=0;

struct student
{
	char name[50];
	long long int prn;
	float per;
};
struct student s[100];

main()
{
	int choice;
	char ch;
	do
	{
		printf("\n Select from the following choices: ");
	    printf("\n 1. Create");
		printf("\n 2. Insert");
		printf("\n 3. Modify");
		printf("\n 4. Delete");
		printf("\n 5. Display");
	    printf("\n ENTER YOUR CHOICE: ");
	    scanf("%d",&choice);
	    
	    switch(choice)
	    {
	    	case 1:
	    		Create();
	    		break;
	    	
	    	case 2:
	    		Insert_elements();
	    		break;
	    	
	    	case 3:
	    		Modify();
	    		break;
	    	
	    	case 4:
	    		Delete();
	    		break;
	    	
	    	case 5:
	    		Display();
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

void Create()
{
	int num,i;
	printf("\n Enter the number of records you want to enter: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n Enter name:  ");
		fflush(stdin);
		scanf("%s",s[i].name);
		printf(" Enter PRN: ");
		scanf("%d",&s[i].prn);
		printf(" Enter percentage: ");
		scanf("%f",&s[i].per);
		count++;
	}
}

void Insert_elements()
{
	int i,num;
	printf("\n Enter the number of records you want to enter: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n Enter name, PRN , percentage of students: ");
		fflush(stdin);
		scanf("%s%d%f",s[count].name,&s[count].prn,&s[count].per);
		count++;
	}
}

void Modify()
{
	int i,p,ch=0,choice;
	float percen;
	char n[20],student_name[10];
	printf("\n Select the choice.");
	printf("\n 1. to modify name.");
	printf("\n 2. to modify prn. ");
	printf("\n 3. to modify percentage. ");
	printf("\n 4. to modify all the elements.");
	printf("\n Enter choice: ");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("\n Name of student whose records you want to modify: ");
	    fflush(stdin);
	    scanf("%s",&n);
	    for(i=0;i<count;i++)
        {
	        if((strcmp(s[i].name,n))==0)
		    {
		        printf("\nEnter new name of student:");
	            fflush(stdin);
	            scanf("%s",student_name);
	            strcpy(s[i].name,student_name);
	            ch++;
	        }
	    }
}
		if(choice==2)
		{
	    	printf("\n Name of student whose records you want to modify: ");
         	fflush(stdin);
	        scanf("%s",&n);
	    	for(i=0;i<count;i++)
	        {  
	            if((strcmp(s[i].name,n))==0)
	            {
	            	printf("\n Enter prn: ");
	                scanf("%d",&p);
	                s[i].prn=p;
	                ch++;
				}
		    }
	    }
		
		if(choice==3)
		{
	    	printf("\n Name of student whose records you want to modify: ");
         	fflush(stdin);
	        scanf("%s",&n);
	    	for(i=0;i<count;i++)
	        {  
	            if((strcmp(s[i].name,n))==0)
	            {
	            	printf("\n Enter percentage: ");
	                scanf("%f",&percen);
	                s[i].per = percen;
	                ch++;
				}
		    }
		}
		
		if(choice==4)
		{
			printf("\n Name of student whose records you want to modify: ");
         	fflush(stdin);
	        scanf("%s",&n);
			
	        for(i=0;i<count;i++)
	        {
		        if((strcmp(s[i].name,n))==0)
	        	{
		    	printf("\nEnter new name of student:");
	            fflush(stdin);
	            scanf("%s",student_name);
			    printf("\n Enter prn: ");
	            scanf("%d",&p);
	            printf("\n Enter percentage: ");
	            scanf("%f",&percen);
	            strcpy(s[i].name,student_name);
			    s[i].prn = p;
			    s[i].per=percen;
			    ch++;
	     	    }
        	}
        }
	if(ch==0)
	    {
	    	printf("\nNot found!");
		}
}

void Delete()
{
	int i=0,j=0,ch=0;
	char n[20];
	printf("\n Enter the name of student whose record you want to delete: ");
	fflush(stdin);
	scanf("%s",&n);
	for(i=0;i<count;i++)
	    {
	       if((strcmp(s[i].name,n))==0)
	        {
	        	while(i<count)
	        	{
	        		strcpy(s[i].name,s[i+1].name);
					s[i].prn=s[i+1].prn;
	        		s[i].per=s[i+1].per;
	        		i++;
				}
				j++;
				ch++;
		    }
	    }
	if(ch==0)
	    {
	    	printf("\nNot found!");
		}
	if(j!=0)
	{
        count--;
	}	    
	Display();
}

void Display()
{
	int i=0;
	printf("\n the entered students details are : ");
	printf("\n NAME \tPRN \t Percentage \n ");
	for(i=0;i<count;i++)
	{
		printf("\n");
		printf("%s \t%d \t%f ",s[i].name,s[i].prn,s[i].per);
	}
}



