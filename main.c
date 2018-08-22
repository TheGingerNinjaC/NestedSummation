// Chane van der Berg
// 11/08/2018
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Set variables
    double Z = 0.0;
    double X = 0.0;
    double Y = 0.0;
    double sum = 0.0;

    // Prompt and read user input
    printf("Give a value for Z: ");
    scanf("%lf", &Z);

    // X increases with every iteration
    for(X = 0 ; X <= Z ; X += 1)
        // Y increases with every iteration
        for(Y = 0 ; Y <= X + 1 ; Y += 1)
            // The formula that gets looped
            sum += Z/2*(X*X + Y + 1);

    // Output
    printf("The result of the summation is: %.2lf", sum);

    return 0;
}
