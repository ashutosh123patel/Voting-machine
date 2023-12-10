#include <stdio.h>
#include <conio.h>
#include <string.h>
int main() {
    char name[100];
    char gender;
    int a = 0, b = 0, c = 0, d = 0,choice,age,flag=0;
	printf("--------------------VOTE FOR INDIA'S FUTURE--------------------\n");
    while (1) 
	{
        printf("\nEnter Voter's Name: ");
        scanf("%s", name);

        printf("Enter Voter's Age: ");
        scanf("%d", &age);

        printf("Enter Voter's Gender (M/F): ");
        scanf(" %c",&gender);
        printf("\n*****************VERIFICATION*****************\n");
		if (gender=='M')
		{printf(" NAME: Mr. %s ", name);}
		else if (gender=='F')
		{printf(" NAME: Ms. %s ", name);}
		else
		 {printf(" Invalid Choice!!!");
		 flag=1;
		 break;}
		printf("\n Voter Age is : %d \n",age);	
        if (age < 18)
			{
            printf("Sorry, %s, you are not eligible to vote.\n", name);
        	} 
		else 
			{
    			printf("\nPolitical Parties:\n");
    			printf("1-> BHARATIYA JANATA PARTY (B.J.P)\n");
    			printf("2-> SAMAJWADI PARTY (S.P)\n");
    			printf("3-> INDIAN NATIONAL CONGRESS (I.N.C)\n");
    			printf("4-> BAHUJAN SAMAJ PARTY (B.S.P)\n");
            	printf("Give the vote : ");
            	scanf("%d", &choice);

            	switch (choice) 
				{
                	case 1:
                    	a++;
                    	break;
               		case 2:
                    	b++;
                    	break;
                	case 3:
                    	c++;
                    	break;
                	case 4:
                    	d++;
                    	break;
                	default:
                    	printf("WRONG!!!\n");
            	}
        	}
        printf("Do you want to continue (Y/N): ");
        char ch = getch();
        if (ch !='Y') 
			{
            break;
        	}
    }
    if (a>b && a>c && a>d) 
	{
        printf("\n :WINNER PARTY IS: (B.J.P)\n");
    } else if (b>a && b>c && b>d) 
	{
        printf("\n :WINNER PARTY IS:(S.P)\n");
    } else if (c>a && c>b && c>d) 
	{
        printf("\n :WINNER PARTY IS:(I.N.C)\n");
    } else if (d>a && d>b && d>c) 
	{
        printf("\n :WINNER PARTY IS:(B.S.P)\n");
    } 
    else
	{
    	printf("try again!!!");
	}
    printf("\n-------Thanks for your voting---------\n");
    return 0;   
}

