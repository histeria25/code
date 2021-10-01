#include<stdio.h>
int n;
long long int memo[100001];
long long int f(int x){
    if(x<=2) return x;
    return memo[x]=(f(x-1)+f(x-2))%1000000007;
}
int main(){
    scanf("%d",&n);
    printf("%lld",f(n));
}