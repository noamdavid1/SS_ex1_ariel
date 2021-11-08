#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPalindrome(int p){
int sum=0,r,temp;
temp=p;
while(temp>0){
r=temp%10;
sum=(sum*10)+r;
temp=temp/10;    
}if(sum==p){
    return 1;
}
else{
    return 0;
}
}
int isArmstrong(int a){
    int sum=0,r,temp=a;
    int l=floor(log10(abs(a))+1);
    while(temp>0){
        r=temp%10;
        sum=sum+pow(r,l);
        temp=temp/10;
    }if(sum==a){
        return 1;
    }else{
        return 0;
    }
}
