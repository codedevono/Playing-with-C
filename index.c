#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a = 15;
    printf("%p\n", (void*)&a);   // print address of a
    printf("%lld\n", a);         // print value of a

    long long x = 10;
    long long *b = &x;           // b points to x
    printf("%p\n", (void*)b);    // address stored in b
    printf("%lld\n", *b);        // value at that address (10)

    long long c[] = {1, 3, 4, 5};
    long long d[] = {7, 8, 9, 10};

    printf("sizeof(c) = %zu\n", sizeof(c));
    printf("sizeof(long long*) = %zu\n", sizeof(long long*));

    long long* p = d;            // safe pointer to d[0]
    printf("%lld\n", *p);        // prints 7



    printf("%zu\n", sizeof(int*));
printf("%zu\n", sizeof(long long*));
printf("%zu\n", sizeof(char*));


    return 0;
}
