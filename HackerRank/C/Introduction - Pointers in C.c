#include <stdio.h>

void update(int *a,int *b) {
    int c=*a- *b;
    *a=*a + *b;
    if(c <0)
    c=c*-1;
    *b=c;


}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}