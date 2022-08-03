int main(void)
{
    int height, row, space, column; // declare variables
    do
    {
        height = get_int("Enter size: ");
    }
    while (height < 1 || height > 8);  // height neither less than 1 nor greater than 8

    for (row = 0; row < height; row++)
    {
        for (space = 0; space < height - row - 1; space++) // I print a new space
        {
            printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
            printf("#"); // # = the bricks of the pyramid
        }
        printf("\n"); // the line break will visually create the pyramid
    }
}