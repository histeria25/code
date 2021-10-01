#include<stdio.h>
int n;
long long int memo[10001];
long long int f(int x){
	if(memo[x]) return memo[x];
	if(x==1) return 1;
    if(x==2) return 3;
    return memo[x]=(f(x-1)+f(x-2)*2)%1000000007;
}
int main(){
    scanf("%d",&n);
    printf("%lld",f(n));
}