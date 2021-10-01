#include<stdio.h>
int n,m,S[1000001];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&S[i]);
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int s, start, mid, end;
        scanf("%d",&s);
        start=0, end=n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(S[mid]<s) start=mid+1;
            else if(S[mid]>s) end=mid-1;
            else {
                printf("%d\n",mid+1);
                break;
            }
        }
        if(start>end) printf("-1\n");
    }
}