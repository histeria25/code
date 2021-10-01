#include<stdio.h>
int s[100001], n, k;
int main(){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++) {
        scanf("%d",&s[i]);
        if(s[i]==k) {printf("%d",i); return 0;}
    }
    printf("-1");
}