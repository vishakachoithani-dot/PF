
#include <stdio.h>
int main() {
    int totalSlots, bookedSlots, availableSlots;
    int totalSlots = 10;
    int bookedSlots = 8;

    if (totalSlots == bookedSlots) {
        printf("No gym slots are available.\n");
    } else {
        printf("Gym slots are available.\n");
    }
    return 0;
}
