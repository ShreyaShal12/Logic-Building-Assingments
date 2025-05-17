
#include<stdio.h>

int EvenFactorial(int iNo)

{

int iCnt = 0;
int iSum1 = 1;
int iSum2 = 1;
for(iCnt = 1; iCnt <=iNo; iCnt++)
{
   if((iCnt % 2 )==0)
   {
        iSum1 = iSum1 * iCnt;
   }
   else
   {
iSum2 = iSum2 * iCnt;
   }
    }
    return iSum1-iSum2;
}



int main()

{

int iValue = 0,iRet = 0;

printf("Enter number");

scanf("%d",&iValue);



iRet = EvenFactorial(iValue);

printf("Even Factorial of number is %d", iRet);

return 0;
}