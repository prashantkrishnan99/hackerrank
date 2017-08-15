#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int height(int n) {
    int temp = 1;
    for(int i=1;i<=n;i++) {
        if(i%2!=0)
            temp*=2;
        if(i%2==0)
            temp++;
    }
    return temp;
}

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        printf("%d\n",height(n));
    }
    return 0;
}
