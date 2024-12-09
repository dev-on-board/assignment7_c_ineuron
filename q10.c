//Write a program to print all Armstrong numbers under 1000

#include<stdio.h>
#include<math.h>
int main(){
      int n,n1,count,n2,rem,sum;
      for(n=1;n<1000;n++){
        count=0,sum=0;
        n1=n;
      while(n1!=0){
        n1=n1/10;
        count++;
      }
      //printf("%d\n",count);
      n2=n;
      do{
         rem=n2%10;
         sum=sum+(int)(round(pow(rem,count)));
         n2=n2/10;
      }while(n2!=0);
      //printf("%d",sum);
      if(sum==n)
      printf("%d ",n);
      
    }
}