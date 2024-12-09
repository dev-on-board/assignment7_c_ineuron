//rite a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main(){
    int n1,n2;
    printf("enter two numbers : ");
    scanf("%d%d",&n1,&n2);
    for(int n=n1;n<=n2;n++){
    int count=0;
      for(int i=1;i<=n;i++){
        if(n%i==0)
        count++;
    }    
    if(count==2)
    printf("%d ",n);
}
}