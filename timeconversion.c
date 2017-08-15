#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

char* timeAM(char *s, int len) {
    if(*(s+0) == '1' && *(s+1) == '2') {
            *(s+0) = '0';
            *(s+1) = '0';
            *(s+len-2) = '\0';
    } else {
        *(s+len-2) = '\0';
    }
    return s;
}
char* timePM(char *s, int len) {
    if(*(s+0) == '1' && *(s+1) == '2') {
            *(s+len-2) = '\0';
    } else {
        *(s+0) = 1 + *(s+0);
        *(s+1) = 2 + *(s+1);
        *(s+len-2) = '\0';
    }
    return s;
}

char* timeConversion(char* s) {
    int len = strlen(s);
    if(*(s+len-2) == 'A') {
        timeAM(s,len);
    } else {
        timePM(s,len);      
    }
    return s;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result_size;
    char* result = timeConversion(s);
    printf("%s\n", result);
    return 0;
}
