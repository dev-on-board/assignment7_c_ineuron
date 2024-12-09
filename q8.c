// Write a program to find next Prime number of a given number
#include<stdio.h>
int main(){
    int n1,n,count;
    printf("enter a number : ");
    scanf("%d",&n1);
    for(n=n1;;n++){
       count=0;
      for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }    
    if(count==2){
     printf("%d ",n);
    break;
    }
    
}
}