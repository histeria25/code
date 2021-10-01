#include<stdio.h>
long long int n, hap;
int main(){
    scanf("%lld",&n);
    for(long long int i=1;i*i<=n;i++){
        if(n%i==0) {
            hap+=i;
            if(i!=n/i) hap+=n/i;
        }
    }
    printf("%lld",hap);
}