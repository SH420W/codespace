#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Your answer? ");
    if (c == 'y' || c == 'Y ')
    {
    printf("You agreed\n");
    }
    else {
    printf("You disagreed\n");
    }
}