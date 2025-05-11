#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is Even\n");
          return TRUE;
    }
    
    
    else
    {
        printf("Number is Odd\n");
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkEven(iValue);
    
    
    return 0;
}