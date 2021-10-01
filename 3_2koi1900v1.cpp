#include<stdio.h>
long long int s[1000002], n, m;
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) scanf("%d",&s[i]);
    scanf("%lld",&m);
    for(int i=0;i<m;i++){
        int x,y;
        scanf("%lld%lld",&x,&y);
        for(int j=0;j<=n;j++){
            int hapx,hapy;
            hapx=hapy=0;
            for(int k=0;k<=j;k++) hapx+=s[k];
            for(int k=j+1;k<=n;k++) hapy+=s[k];
            if(hapx*y==hapy*x) {
                printf("%lld\n",j);
                break;
            }else if(hapx*y>hapy*x){
                printf("%lld\n",j-1);
                break;
            }
        }
    }
}