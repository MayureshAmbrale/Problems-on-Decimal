#include<stdio.h>

int SumOddDigits(int iNo)
{
    int iCnt=0;
    int iDigit=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo!=0)
    {
        iDigit=iNo%10;
        if(iDigit%2!=0)
        {
        iSum=iSum+iDigit;
        }
        iNo=iNo/10;

    
    }
    return iSum;

}
int main()
{
    int iValue=0;
    int iRet=0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet=SumOddDigits(iValue);
    printf("Sum of odd digits is  :%d\n",iRet);
    return 0;
}