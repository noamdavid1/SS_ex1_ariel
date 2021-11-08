#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int sumArmstrong(int num, int length){
    static int sum=0;
    int temp;
    if(num==0){
        return sum;
    }temp=num%10;
    sum=sum+pow(temp,length);
    sumArmstrong((num/10),length);
}

int isArmstrong(int a){
int l= floor(log10(abs(a))+1);
if(a==sumArmstrong(a,l)){
    return 1;
}else{
   return 0; 
}
} 

int revers(int num){
    static int sum=0; 
    int temp;
    if(num==0){
        return sum;
    }
    temp=num%10;
    sum=(sum*10)+temp;
     revers(num/10);
}

int isPalindrome(int p){
if(p==revers(p)){
return 1;
} 
return 0;
}
