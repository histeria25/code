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
        if(x==0) printf("0\n");
        else{
            int start, end;
            start=0;
            end=n+1;
            while(start<end){
                int mid = (start+end)/2;
                if(s[mid]*y<=(s[n]-s[mid])*x) start=mid+1;
                else end=mid;
            }
            printf("%d\n",start-1);
        }
    }
}