#include <stdio.h>

#define NUMBER_OF_PYRAMIDS = 2

void get_height_of_pyramids(int height);
int main(void)
{
    int height;
    do
    {
        // Request user input for the height of the pyramids

        printf("Enter height of pyramids: ");

        // Append the user input for to the height variable

        scanf("%i", &height);
    } 
    while (height < 1 || height > 8);

    // Call the get_height_of_pyramids function and pass it the height variable

    get_height_of_pyramids(height);
}

void get_height_of_pyramids(int height)
{
    // Outer loop for determing the number of rows for the pyramids
    for (int i = 1; i <= height; i++)
    {
        // Inner loops for the first pyramid
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        // space between the pyramids
        printf("  ");

        // Inner loop for the second pyramid
        for (int l = 1; l <= i; l++)
        {
            printf("#");
        }

        printf("\n");
    }
}