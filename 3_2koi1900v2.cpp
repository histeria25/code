#include<stdio.h>
long long int s[1000002], n, m;
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d",&s[i]);
        s[i]+=s[i-1];
    }
    scanf("%lld",&m);
    for(int i=0;i<m;i++){
        long long int x,y;
        scanf("%lld%lld",&x,&y);
        for(int j=0;j<=n;j++){
            if(s[j]*y==(s[n]-s[j])*x) {
                printf("%lld\n",j);
                break;
            }else if(s[j]*y>(s[n]-s[j])*x){
                printf("%lld\n",j-1);
                break;
            }
        }
    }
}