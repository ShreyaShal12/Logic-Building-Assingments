
#include<stdio.h>

void Number(int iNo)

{ 
    if(iNo < 50)
    {
        printf("small");
    
    }
    if((iNo>50)  && (iNo<100))
    {
        printf("medium");

    }
    else if(iNo >100)
    {
        printf("large");
    }
}


int main() {

int iValue = 0;

printf("Enter number"); scanf("%d",&iValue);

Number(iValue);

return 0;

}
