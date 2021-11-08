#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int lNumber(int num)
{
    return floor(log10(abs(num))) + 1;
}

int sumArmstrong(int num, int nDigits, int sum)
{   
    if(lNumber(num) == 1)
    {
        return pow((num % 10), nDigits);
    }
    int temp = pow((num % 10), nDigits);
    sum = temp + sumArmstrong(num / 10, nDigits, sum);
    return sum;
}
int isArmstrong(int num)
{
    int nDigits = lNumber(num), sum = 0;
    sum = sumArmstrong(num, nDigits, sum);
    if(sum == num)
    {
        return 1;

    }
    else
    {
        return 0;
    }
}


int revers(int num)
{
    int digit = (int)log10(num);
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + revers(num/10));
}

int isPalindrome(int p){
if(p == revers(p)){
return 1;
} 
return 0;
}

