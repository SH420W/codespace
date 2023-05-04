#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int points = get_int("How many points did you lose?");
    const int NUM = 2;

    if(points < NUM)
    {
        printf("you good \n");
    }
    else if (points > NUM)
    {
        printf("oof \n");
    }
    else
    {
          printf("same \n");
    }
}