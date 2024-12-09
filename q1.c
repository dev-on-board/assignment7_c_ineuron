//Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>
int main(){
    int n;
    printf("enter fibonnaci position you want to print: ");
    scanf("%d",&n);
    int prev=0,cur=1,next=0;
    for(int i=1;i<=n;i++){
        prev=cur;
        cur=next;
        next=cur+prev;
        
    }
    printf("%d ",next);
    
    return 0;
}