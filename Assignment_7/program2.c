//Accept amount in US dollar and return its corresponding value in Indian currency. Consider 1$ as 70 rupees.

#include<stdio.h>


int DollarToINR(int iNo)
{
    int iINR = 0;
    
    
    iINR = iNo * 70;
    
    return iINR;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d", &iValue);
    
    iRet = DollarToINR(iValue);    
    
    printf("Value in INR is %d\n", iRet);
    
    return 0;
}

