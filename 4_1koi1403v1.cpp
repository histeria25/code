#include<stdio.h>
long long int n,m,memo[1001][1001];
long long int f(long long int a, long long int b){
    if(a<0 or b<0) return 0;
    if(memo[a][b]>0) return memo[a][b];
    if(a<b) return 0;
    if(b==0 and a) return memo[a][b]=1;
    if(a==b and b<=2) return memo[a][b]=1;
    return memo[a][b]=(f(a-1,b)+f(a-2,b-1)+f(a-3,b-2))%1000000007;
}
int main(){
    scanf("%lld%lld",&n,&m);
    printf("%lld",f(n,m));
}