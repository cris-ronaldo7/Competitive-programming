#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    if(((k-1) | k) <=n)
    printf("%d\n",k-1);
    else
    printf("%d\n",k-2);

    if((k-1 & k-2) ==0)
    {if(k==3)
    printf("%d\n",0);
    else
    printf("%d\n",k-2);}
    else 
    printf("%d\n",k-1);

    printf("%d\n", k-1);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
