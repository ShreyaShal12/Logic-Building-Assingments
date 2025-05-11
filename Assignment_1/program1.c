#include<stdio.h>

float Divide(int iNo1, int iNo2)
{
    float iAns = 0.0f;
    
    if(iNo2 == 0)
    {
        return -1.0f;
    }
    else{

    iAns = (float)iNo1/iNo2;
    return iAns;
}
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    
    float iRet = 0.0f;
    
    iRet = Divide(iValue1, iValue2);
    
    if(iRet == -1.0f)
    {
        printf("Error: Division by zero\n");
    }
    else
    {
        printf("Division is %.2f\n", iRet);
    }
    
    return 0;
}