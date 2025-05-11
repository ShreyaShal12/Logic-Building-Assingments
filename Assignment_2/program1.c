#include<stdio.h>
void Display(int iNo)

{

int iCnt = 0;
iCnt = 1;
// Write Updater

while(iCnt <=iNo)

{

printf( "%d : * \n",iCnt);
iCnt++
}

}

int main()

{

int iValue = 0;

printf("Enter number");

scanf("%d\n",&iValue);

Display (iValue);

return 0;

}