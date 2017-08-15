#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }
    int max = height[0];
    for(int i = 1; i < n; i++) {
        if(height[i] > max) {
            max = height[i];
        }
    }
    if(max-k < 0){
       printf("%d",0); 
    } else 
        printf("%d",max-k);
    return 0;
}
