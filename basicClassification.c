#include<stdio.h>

int isPrime(int p){
    int flag=0,i=0;
    for ( i = 2; i <p; i++)
    {
        if(p%i==0){
            return flag;
            break;}
    }
            flag=1;
            return flag;
         }
int func(int f){
    int a=1;
    for (int i = f; i >0; i--)
    {
        a=a*i;
    }return a;
}

int isStrong(int num){
    int temp=num, sum=0,digit;
    while (temp!=0)
    {
    digit=temp%10;
    sum=sum+func(digit);
    temp=temp/10;
    }
    if(sum==num)
    {
        return 1;
    }
    return 0;
}
