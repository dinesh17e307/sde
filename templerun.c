#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n],ans[n];
    int i,j,val,m;
    int cnt=0;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        ans[i]=cnt+arr[i];
        cnt=cnt+arr[i];
    }
    int max=ans[n-1];
    scanf("%d",&m);
    for(j=0;j<m;j++){
        int cnt1=1;
        scanf("%d",&val);
        if (val>max){
            printf("%d\n",-1);
        }
        else{
            for(i=0;i<=m;i++){
                if(ans[i]<val){
                    cnt1++;
                }
                else{
                    printf("%d\n",cnt1);
                    break;
                }
            }
        }
        
        
    }
    return 0;
}

