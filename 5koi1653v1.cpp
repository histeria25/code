#include<stdio.h>
int n;
int f(int x){
    if(x<=2) return x;
    return (f(x-1)+f(x-2))%1000000007;
}
int main(){
    scanf("%d",&n);
    printf("%d",f(n));
}