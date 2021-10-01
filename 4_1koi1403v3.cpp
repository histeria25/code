#include<stdio.h>
int n,m;
long long int memo[1001][1001][3];
long long int f(int a,int b,int c){
    if(memo[a][b][c]!=-1) return memo[a][b][c];
    if(a<b) return memo[a][b][c]=0;
    if(b==1){
        if(c==2) return memo[a][b][c]=a-1;
        else return memo[a][b][c]=a;
    }
    if(!b and a) return memo[a][b][c]=1;
    if(c==2) return memo[a][b][c]=f(a-1,b,0)%1000000007;
    else return memo[a][b][c]=(f(a-1,b,0)+f(a-1,b-1,c+1))%1000000007;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int a=0;a<=n;a++) for(int b=0;b<=m;b++) for(int c=0;c<=2;c++) memo[a][b][c]=-1;
    printf("%lld",f(n,m,0));
}