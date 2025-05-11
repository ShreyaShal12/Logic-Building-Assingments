#include<stdio.h>
void Display(int iNo)

{

int iCnt = 0;
iCnt = 5;
// Write Updater

while(iCnt >= iNo)

{

printf( "%d : * \n",iCnt);
iCnt--;
}

}

int main()

{

int iValue = 0;

printf("Enter number\n");

scanf("%d",&iValue);

Display (iValue);

return 0;

}