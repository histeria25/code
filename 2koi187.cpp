#include<stdio.h>
int n, y;
int main(){
    scanf("%d",&n);
    for(int x=1;x<=n;x++) {
        if(n%x==0) y+=x;
    }
    printf("%d",y);
}