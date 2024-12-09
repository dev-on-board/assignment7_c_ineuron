//Write a program to check whether two given numbers are co-prime
//numbers or not
#include<stdio.h>
int main(){
    int n1,n2,hcf;
    printf("enter two numbers :");
    scanf("%d%d",&n1,&n2);
    int num=n1<n2?n1:n2;
    for(int i=1;i<=num;i++){
        if(n1%i==0 & n2%i==0){
             hcf=i;
        }
    }
    if(hcf==1)
    printf("both numbers are coprime :) ");
    else
    printf("no , not coprime :(");
}