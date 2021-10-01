#include<stdio.h>
int a,b,c,d,y;
int main(){
    scanf("%d%d%d%d",&a,&b,&c,&d);
    for(int x=a;x!=b;x=x%100+1){
        if(x==c or x==d) y++;
    }
    if(y==1) printf("cross");
    else printf("not cross");
}