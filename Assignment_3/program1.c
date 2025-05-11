#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;
    
    if(iNo <= 0)
    {
        printf("Please enter positive number\n");
        return;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iEven);
        iEven = iEven + 2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}