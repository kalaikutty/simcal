
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"evaluation_of_postfix.c"

struct history
{
    char expression[20];
    int result;
};
typedef struct history history;
history num_of_hisory[50];

void display()
{
    printf("-------------------------------------------\n");
    printf("|%-7s||%-20s||%-10s|\n","S_no","Expression","result");
    printf("-------------------------------------------\n");
    for (int i = 0; i < 5; i++)
    {
        printf("|%-7d||%-20s||%-10d|\n",i+1,num_of_hisory[i].expression,num_of_hisory[i].result);
    }
    printf("-------------------------------------------\n");
}


int out(int x)
{
         printf("Go to menu press 0\n");
        scanf("%d",&x);
        return x;
        system("clear");
}

// Driver program to test above functions 
int main()
{
    int choice;
    int i = 0,x;
    
                        char temp[20];
            int solution = 0;
    do
    {
        
        i = i % 5;
        printf("----------------------------------------------------------------------------------------\n");
	    printf("|			CALCULATER 	        	                               |\n");
	    printf("----------------------------------------------------------------------------------------\n");
	    printf("|%-86s|\n","Menu");
	    printf("----------------------------------------------------------------------------------------\n");
	    printf("|%-20s||%-20s||%-20s||%-20s|\n","Put calculation - 1","History - 2","Clear history - 3","Exit -0");
	    printf("----------------------------------------------------------------------------------------\n");

            printf("Enter the expression\n");
            get(temp); 
            copystr(temp,num_of_hisory[i].expression);
            printf("%d \n",i);
	        infixToPostfix(temp);
            solution = evaluatePostfix(temp);
	        printf("postfix evaluation: %d\n", evaluatePostfix(temp));
            num_of_hisory[i].result = solution;
        
            display();
            i++;
        scanf("%d",&choice);
    } while (i != 4 || choice != 0);
   


    return 0;

}





