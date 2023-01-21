#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

// Height (Y Axis)
for (int y = 0; y < n; y++)

    {
        // Width (X Axis)
        for (int x = n-y-1; x < n; x++)

        {
            // Print a brick
            printf("#");
        }
        // Move to the next row
        printf("\n");
    }

}