#include<stdio.h>
int n,m;
int f(int a, int b, int c){
    if(b==0) return 1;
    if(a<b) return 0;
    if(c>=2) return f(a-1,b,0);
    else return f(a-1,b, 0)+f(a-1,b-1,c+1);
}
int main(){
    scanf("%d%d",&n,&m);
    printf("%d",f(n,m,0));
}