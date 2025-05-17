
#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum1 = 0;    
    int iSum2 = 0; 
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum1 = iSum1 + iCnt;
        }
        else
        {
            iSum2 = iSum2 + iCnt;
        }
    }
    printf("%d\n",iSum1);
    printf("%d\n",iSum2);
    return iSum1 - iSum2
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = FactDiff(iValue);
    
    printf("Difference between sum of factors and non-factors is: %d\n", iRet);
    
    return 0;
}