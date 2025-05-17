//Write a program which accept number from user and display its table.


#include<stdio.h>


void Table(int iNo)
{
    int iCnt = 0;
    int iMult = 0;    
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    
    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        iMult = iNo * iCnt;    
        printf("%d\n", iMult);
    }
}

void TableRev(int iNo)
{
    int iCnt = 0;
    int iMult = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        iMult = iNo * iCnt;
        printf("%d ", iMult);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Table(iValue);
    TableRev(iValue);
    
    return 0;
}