//Write a program to check whether a given number is there in the Fibonacci
//series or not.
#include<stdio.h>
int main(){
    int n;
    printf("enter fibonnaci number you want to check: ");
    scanf("%d",&n);
    int prev=0,cur=1,next=0;
    for(int i=1;1;i++){
        prev=cur;
        cur=next;
        next=cur+prev;
        if(next==n){
            printf("yes, it is in fibonnaci series");
            break;
        }
        if(next>n){
            printf("no ,it is not in the fibonacci series");
            break;
        }
    }
    return 0;
}