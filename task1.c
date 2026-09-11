
#include <stdio.h>

int main() {
    int totalSlots, bookedSlots, availableSlots;

    // Input total and booked slots
    printf("Enter total gym slots: ");
    scanf("%d", &totalSlots);

    printf("Enter booked slots: ");
    scanf("%d", &bookedSlots);

    // Calculate available slots
    availableSlots = totalSlots - bookedSlots;

    // Check slot availability
    if (availableSlots > 0) {
        printf("Gym slots are available.\n");
        printf("Available slots: %d\n", availableSlots);
    } else {
        printf("No gym slots are available.\n");
    }

    return 0;
}
