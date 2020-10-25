#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int add(int);
int reverse(int);
int average(int);
int tri_table(int);
void word(char*);

main()
{
	int choice,num;
	char n[5],ch;
	do
	{
		printf("\n Select from the following choices.");
		printf("\n \nType 1 for Sum of Digits of a number.");
		printf("\n \nType 2 for Reverse the digits of a number. ");
		printf("\n \nType 3 for Average of 'n' numbers inputted");
		printf("\n \nType 4 for Generating a table of triangular numbers for 'n' numbers.");
		printf("\n \nType 5 for Printing number in words.");
		printf("\n \nEnter your choice : ");
		scanf("%d",&choice);
		switch (choice)
		{
			case 1:
			printf("\n \t SUM OF DIGITS OF A NUMBER\t \n ");
			printf("Enter the number whose digits you want to add = ");
	        scanf("%d",&num);

            printf("Sum  = %d ",add(num));
	        break;
	        
	        case 2:
	        	printf("\n \t REVERSE THE DIGITS OF A NUMBER \t \n ");
	        	printf("Enter any number which you want to reverse = ");
	        	scanf("%d",&num);
	        	
	        	printf("reversed number = %d ",reverse(num));
	        	
	        	if(num==reverse(num))
	        	
	        		printf("\n It is a plaindrome.");
				
				else
				    printf("\n Not a palindrome.");
				
				break;
			
			case 3:
				printf("\n \t AVERAGE OF 'n' NUMBERS \t \n");
				printf("How many numbers you want to enter  : ");
				scanf("%d",&num);
				
				printf("Average of entered numbers = %d ", average(num));
				break;
			
			case 4:
				printf("\n \t GENERATING A TABLE TRIANGULAR NUMBERS OF 'n' NUMBERS \t \n ");
				printf("\n How many numbers triangle you want : ");
				scanf("%d",&num);
				
				tri_table(num);
				break;
		
		    case 5:
			    printf("\n \t PRINTING NUMBER IN WORDS \t \n");
			    printf(" Enter the number you want to print in words : ");
			    scanf("%s",&n);
			
			    word(n);
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
}

int add(int number)
{
	int sum=0;
	while(number!=0)
	{
		sum=sum+number%10;
		number=number/10;
	}
	return sum;
}

int reverse(int number)
{
	int i=0;
	while(number>0)
	{
		i = i*10 + number%10;
		number = number/10;
	}
	return i;
}

int average(int number)
{
	int i,n,avg=0;
	
	for(i=0;i<number;i++)
	{
		printf("Enter : " );
		scanf("%d",&n);

		avg+=n;
	}
	avg= avg/number;
	return avg;
}

int tri_table(int number)
{
	int i, j = 1, k = 1; 
  
    // For each iteration increase j by 1 
    // and add it into k 
    for (i = 1; i <= number; i++) 
	{ 
        printf(" %d ", k); 
        j = j + 1; // Increasing j by 1 
        k = k + j; // Add value of j into k and update k 
    } 
}

void word(char *num)
{
	int len = strlen(num); // Get number of digits in given number 
  
    /* Base cases */
    if (len == 0)
	{ 
        printf("empty string\n"); 
        return; 
    } 
    if (len > 4)
	{ 
        printf("Length more than 4, number not supported\n"); 
        return; 
    } 
  
    /* The first string is number used, it is to make array indexing simple */
    char *single_digits[] = { "zero", "one", "two","three", "four","five","six", "seven", "eight", "nine"}; 
  
    /* The first string is numbert used, it is to make array indexing simple */
    char *two_digits[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen","fifteen", "sixteen","seventeen", "eighteen", "nineteen"}; 
  
    /* The first two string are numbert used, they are to make array indexing simple*/
    char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"}; 
  
    char *tens_power[] = {"hundred", "thousand"}; 
  
    /* Used for debugging purpose only */
    printf("\n%s: ", num); 
  
    /* For single digit number */
    if (len == 1) 
	{ 
        printf("%s\n", single_digits[*num - '0']); 
        return; 
    } 
  
    /* Iterate while num is not '\0' */
    while (*num != '\0') 
	{ 
  
        /* Code path for first 2 digits */
        if (len >= 3) 
		{ 
            if (*num -'0' != 0) 
			{ 
                printf("%s ", single_digits[*num - '0']); 
                printf("%s ", tens_power[len-3]); // here len can be 3 or 4 
            } 
            --len; 
        } 
  
        /* Code path for last 2 digits */
        else 
		{ 
            /* Need to explicitly handle 10-19. Sum of the two digits is used as index of "two_digits" array of strings */
            if (*num == '1') 
			{
				int sum = *num - '0' + *(num + 1)- '0'; 
                printf("%s\n", two_digits[sum]); 
                return;
			}
			else if (*num == '2' && *(num + 1) == '0') 
			{ 
                printf("twenty\n"); 
                return; 
            } 
  
            /* Rest of the two digit numbers i.e., 21 to 99 */
            else 
			{ 
                int i = *num - '0'; 
                printf("%s ", i? tens_multiple[i]: ""); 
                ++num; 
                if (*num != '0') 
                    printf("%s ", single_digits[*num - '0']); 
            } 
        } 
        ++num;  
    }
}
