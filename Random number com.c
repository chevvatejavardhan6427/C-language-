#include <stdio.h>   // for printf()
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time(), used to seed rand()

int main() {
    srand(time(0));           // Seed the random number generator with current time
                              // This ensures different random numbers each run

    int num = rand();         // Generate a random number (0 to RAND_MAX)
    
    int ans = (rand() % 100) + 1;  
                              // Generate a random number from 1 to 100
                              // rand() % 100 → gives 0 to 99
                              // +1 shifts the range to 1 to 100

    printf("%d\n", ans);      // Print the random number to the console

    return 0;                 // End of the program
}
