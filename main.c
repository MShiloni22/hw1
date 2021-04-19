#include <stdio.h>

void swap(int *a, int *b);
int bitAnd(int x, int y);
int getByte(int x, int y);


int main()
{
    /* int a, b;
    printf("choose two integers for swap function:\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    int x, y;
    printf("choose two integers for bitAnd function:\n");
    scanf("%d%d", &x, &y);
    printf("result = %d\n", bitAnd(x, y));
    int c, d;
    printf("choose two integers for getByte function:\n");
    scanf("%x%d", &c, &d);
    printf("result = %x\n", getByte(c, d)); */
    return 0;
}


void swap(int *a, int *b)
// without temp variable
{
    *a = *a^*b;
    *b = *b^*a;
    *a = *a^*b;
}


int bitAnd(int x, int y)
/*
* bitAnd ‐ x&y using only ~ and |
* Example: bitAnd(6,5) = 4
* Legal ops: ~ |
* Max ops: 8 */
{
    return (~(~x|~y));
}


int getByte(int x, int y)
/*
* getByte ‐ Extract byte n from word x
* Bytes numbered from 0 (LSB) to 3 (MSB)
* Examples: getByte(0x12345678,1) = 0x56
* Legal ops: ! ~ & ^ | + << >>
* Max ops: 6
*/
{
    int mask = ((1 << 8) - 1);
    x = x >> (y << 3);
    return (x&mask);
}