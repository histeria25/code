#include<stdio.h>  
#include<algorithm>  
using namespace std;  
int pos[4], line[101];  
int main() {  
    for(int i=0;i<4;i++) {  
        scanf("%d", &pos[i]);  
        line[pos[i]]=i/2;  
    }  
    sort(pos, pos+4);  
    if(line[pos[0]]!=line[pos[1]] && line[pos[1]]!=line[pos[2]]) printf("cross");  
    else printf("not cross");  
} 