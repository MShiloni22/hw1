#include <stdio.h>

int bitAnd(int x, int y);
int getByte(int x, int y);
int logicalShift(int x, int n);


int main()
{
    /* int x, y;
    printf("choose two integers for bitAnd function:\n");
    scanf("%d%d", &x, &y);
    printf("result = %d\n", bitAnd(x, y));
    int c, d;
    printf("choose two integers for getByte function, first - integer, second - byte number:\n");
    scanf("%x%d", &c, &d);
    printf("result = %x\n", getByte(c, d)); */
    int a, b;
    printf("choose two integers for logicalShift function:\n");
    scanf("%x%d", &a, &b);
    printf("result = %x\n", getByte(a, b));
    return 0;
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
    int mask = ((1 << 8) + ~0);
    x = x >> (y << 3);
    return (x&mask);
}



int logicalShift(int x, int n)
/*
* logicalShift ‐ shift x to the right by n, using a logical shift
* Can assume that 0 <= n <= 31
* Examples: logicalShift(0x87654321,4) = 0x08765432
* Legal ops: ! ~ & ^ | + << >>
* Max ops: 20
*/
{
    x = x >> n;
    int mask = (1<<n)+(~0);
    mask = mask <<(32+(~n+1));
    x = x & ~mask;
    return x;
}