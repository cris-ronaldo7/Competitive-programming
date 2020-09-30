#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    char c;
    char cr[100];
    char crr[100000];
    scanf("%c",&c);
    printf("%c\n",c);

    scanf("%s",cr);
    printf("%s\n",cr);

    scanf("\n");
    scanf("%[^\n]%*c", crr);
    printf("%s",crr);

    return 0;
}