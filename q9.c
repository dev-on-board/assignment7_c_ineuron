//Write a program to check whether a given number is an Armstrong number
//or not


#include<stdio.h>
#include<math.h>
int main(){
      int n,n1,count=0,n2,rem,sum=0;
      printf("enter a number :");
      scanf("%d",&n);
      n1=n;
      while(n1!=0){
        n1=n1/10;
        count++;
      }
      printf("%d",count);
      n2=n;
      do{
         rem=n2%10;
         sum=sum+(round(pow(rem,count)));
         n2=n2/10;
      }while(n2!=0);
      printf("\n%d",sum);
      if(sum==n)
      printf("\nit is a armstrong number ");
      else
      printf("\nit is not a armstrong number ");

}