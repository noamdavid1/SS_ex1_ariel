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

int isStrong(int x){
int r=x, sum=0 ,k=x;
while (k!=0)
{
    r=r%10;
    sum=sum+func(r);
    k=k/10;
}if(sum==x) {
    return 1;
}else{
return 0;
}
} 

