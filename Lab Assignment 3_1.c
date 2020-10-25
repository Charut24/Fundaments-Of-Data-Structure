#include<stdio.h>
#include<string.h>

int count=0;
struct student
{
	char name[30];
	int prn;
	float per;	
};

void Create(struct student *a)       // value at the base address 
{
	int i,n;
	printf("\n Total number of records you want to enter: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n\nEnter student %d details:\n",i+1);
		printf("\n Enter Name: ");
		fflush(stdin);
		scanf("%s",(a+i)->name);
		printf("\n Enter PRN: ");
		scanf("%d",&(a+i)->prn);
		printf("\n Enter Percentage: ");
		scanf("%f",&(a+i)->per);
		
		count++;	
	}
}

void Insert(struct student *a)
{
	int i,num;
	printf("\n Enter the number of records you want to enter: ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("\n\nEnter student %d details:\n",i+1);
		printf("\n Enter name, PRN , percentage of students: ");
		fflush(stdin);
		scanf("%s%d%f",(a+count)->name,&(a+count)->prn,&(a+count)->per);
		count++;
    }
}

void Modify(struct student *a)    //call by referecne
{ 
	int i,student_prn,ch=0,choice;
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
	        if((strcmp((a+i)->name,n))==0)
		    {
		        printf("\nEnter new name of student:");
	            fflush(stdin);
	            scanf("%s",student_name);
	            strcpy((a+i)->name,student_name);
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
	            if((strcmp((a+i)->name,n))==0)
	            {
	            	printf("\n Enter prn: ");
	                scanf("%d",&student_prn);
	                (a+i)->prn=student_prn;
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
	            if((strcmp((a+i)->name,n))==0)
	            {
	            	printf("\n Enter percentage: ");
	                scanf("%f",&percen);
	                (a+i)->per = percen;
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
		        if((strcmp((a+i)->name,n))==0)
	        	{
		    	printf("\nEnter new name of student:");
	            fflush(stdin);
	            scanf("%s",student_name);
			    printf("\n Enter prn: ");
	            scanf("%d",&student_prn);
	            printf("\n Enter percentage: ");
	            scanf("%f",&percen);
	            strcpy((a+i)->name,student_name);
			    (a+i)->prn = student_prn;
			    (a+i)->per=percen;
			    ch++;
	     	    }
        	}
        }
	if(ch==0)
	{
		printf("\nNot found!");
	}
	else
	{
		printf("\n RECORD MODIFIED.");
	}
}

void Delete(struct student *a)
{
	int i=0,ch=0;
	char n[20];
	printf("\n Enter the name of student whose record you want to delete: ");
	fflush(stdin);
	scanf("%s",&n);
	for(i=0;i<count;i++)
	    {
	       if((strcmp((a+i)->name,n))==0)
	        {
	        	while(i<count)
	        	{
	        		a[i]=a[i+1];
	        		i++;
				}
				ch++;
				count--;
		    }
	    }
	if(ch==0)
	{
		printf("\n Not Found.");
	}    
}

void Display(struct student *a)
{
	int i;
	printf("\n DETAILS OF THE STUDENT.");
	printf("\n NAME \tPRN \tPERCENTAGE\n ");
	for(i=0;i<count;i++)
	{
		printf("\n%s\t %d\t %f\t",a->name,a->prn,a->per);
		a++;   // incrementation of a will point to next record as i value changes.
	}
}

int main()
{
	int num,c;
	struct student s[20];  //we have to use pointers so we have declared this inside main()
	
	do
	{
		printf("\n Select fron the following choice: ");
		printf("\n 1. Create");
		printf("\n 2. Insert");
		printf("\n 3. Modify");
		printf("\n 4. Delete");
		printf("\n 5. Display");
		printf("\n Enter the choice: ");
		scanf("%d",&num);
		switch(num)
		{
			case 1:
				Create(s);
				break;
			case 2:
				Insert(s);
				break;
			case 3:
				Modify(s);
				break;
			case 4:
				Delete(s);
				break;
			case 5:
				Display(s);
				break;
			default:
				printf("\n WRONG CHOICE.");
		}
		printf("\n Enter 1 to continue and 0 to end: ");
		scanf("%d",&c);
	}while(c!=0);
}


