#include<stdio.h>
int n,m;
int f(int a, int b){
    if(b==0) return 1;
    if(a<b) return 0;
    return f(a-1,b)+f(a-2,b-1)+f(a-3,b-2);
}
int main(){
    scanf("%d%d",&n,&m);
    printf("%d",f(n,m));
}