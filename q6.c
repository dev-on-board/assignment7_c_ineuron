//Write a program to print all Prime numbers under 100
#include<stdio.h>
int main(){
    for(int n=1;n<=100;n++){
    int count=0;
      for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }    
    if(count==2)
    printf("%d ",n);
}
}
