#include<stdio.h>

void TableRev(int iNo)
{
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
    int iMult = 0;
    
    
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
    
    TableRev(iValue);
    
    return 0;
}
