#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");
    long z = x + y;
    printf("%li\n", z);
}