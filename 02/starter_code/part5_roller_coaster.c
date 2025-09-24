// part5_roller_coaster
//
// This program was written by Conrad Vernon, Z111111
// on [24/09/2025
//
// This program:
// 1. Scans in the users height.
//
// 2. If the height is 0 or less, 
//    it should print an error message
//
// 3. If the height is below the minimum height, 
//    it should print a message telling the user they 
//     are not tall enough to ride
// 
// 4. If the height is above the minimum but below the ride alone threshold,
//    it should print a message telling the user they can ride with an adult
//
// 5. If the height is or is above the ride alone threshold, 
//    it should print a message telling the user they can ride.

#include <stdio.h>

#define MINIMUM_HEIGHT 100
#define RIDE_ALONE_THRESHOLD 160

int main(void) {
    printf("Enter your height: ");
    double height;
    scanf("%lf", &height);

    if (height <= 0) {
        printf("INVALID HEIGHT\n");
    } else if (height < MINIMUM_HEIGHT) {
        printf("not tall enough to ride\n");
    } else if (MINIMUM_HEIGHT < height && height < RIDE_ALONE_THRESHOLD) {
        printf("can ride with an adult\n");
    } else {
        printf("can ride alone\n");
    }

    return 0;
}
