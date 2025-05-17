//Write a program which accept N and print first 5 multiples of N.

//Input: 4

//Output: 4 8 12 16 20

#include<stdio.h>

//Function to display first 5 multiples of input number
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    //Loop to print first 5 multiples
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n", iNo * iCnt);    //Print each multiple
    }
    
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    MultipleDisplay(iValue);
    
    return 0;
}