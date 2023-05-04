#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose?")

    if(points < 2)
    {
        printf("you good \n");
    }
    else if (points > 2)
    {
        printf("oof \n");
    }
    else
    {
          printf("same \n");
    }
}