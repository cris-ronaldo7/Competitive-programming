#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int arr[10]={0};
    char c[1000];
    scanf("%s",c);
    int i;
    for(i=0;i<strlen(c);i++)
    {
        if((int)c[i]-'0' < 10)
        arr[(int)c[i]-'0']++;
    }   
    for(i=0;i<10;i++)
    printf("%d ",arr[i]);
    return 0;
}
