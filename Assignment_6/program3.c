
#include<stdio.h>

int Factorial(int iNo)

{

int iCnt = 0;
int iSum = 1;
for(iCnt = 1; iCnt <= iNo; iCnt++)
{

   iSum = iSum * iCnt;

   }
   return iSum;
}

int main() {

int iValue = 0,iRet = 0;

printf("Enter number:\n");

scanf("%d",&iValue);



iRet = Factorial(iValue);

printf("Factorial of number is %d", iRet);

return 0;
}