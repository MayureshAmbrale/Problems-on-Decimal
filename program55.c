#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit=0;
    int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
    iDigit=iNo%10;
    iNo=iNo/10;
    iCnt++;
    }
    return iCnt;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=CountDigits(iValue);
    printf("Count is :%d\n",iRet);
    return 0;
}