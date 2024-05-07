#include<stdio.h>

int Count(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit >5)
        {
            iCnt++;
        }
        iNo=iNo/10;

    
    }
    return iCnt;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=Count(iValue);
    printf("Count of number grater then 5 are :%d\n",iRet);
    return 0;
}