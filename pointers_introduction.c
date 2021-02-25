// a simple showcase of how pointers work showed with a function that calculates a sum and an absolute difference of two numbers 

#include <stdio.h>

void update(int *a,int *b) {
      
    *a = *a + *b;
    *b = abs(*a-(2**b));
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
