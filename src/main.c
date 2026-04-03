#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure
struct Vehicle {
    int id;
    char name[50];
    char type[20];
    float mileage;
};

struct Vehicle *fleet = NULL;
int count = 0;

// Add Vehicle
void addVehicle() {
    struct Vehicle *temp;
    temp = realloc(fleet, (count + 1) * sizeof(struct Vehicle));

    if (temp == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    fleet = temp;

    printf("Enter Vehicle ID: ");
    scanf("%d", &fleet[count].id);

    printf("Enter Vehicle Name: ");
    scanf(" %[^\n]", fleet[count].name);

    printf("Enter Vehicle Type: ");
    scanf("%s", fleet[count].type);

    printf("Enter Mileage: ");
    scanf("%f", &fleet[count].mileage);

    count++;
    printf("Vehicle added successfully!\n");
}

// Display Vehicles
void displayVehicles() {
    if (count == 0) {
        printf("No vehicles available.\n");
        return;
    }

    printf("\n--- Vehicle List ---\n");
    for (int i = 0; i < count; i++) {
        printf("\nID: %d", fleet[i].id);
        printf("\nName: %s", fleet[i].name);
        printf("\nType: %s", fleet[i].type);
        printf("\nMileage: %.2f\n", fleet[i].mileage);
    }
}

// Search Vehicle
void searchVehicle() {
    int id, found = 0;
    printf("Enter ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (fleet[i].id == id) {
            printf("\nVehicle Found!\n");
            printf("Name: %s\nType: %s\nMileage: %.2f\n",
                   fleet[i].name, fleet[i].type, fleet[i].mileage);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Vehicle not found.\n");
}

// Update Vehicle
void updateVehicle() {
    int id, found = 0;
    printf("Enter ID to update: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (fleet[i].id == id) {
            printf("Enter new Name: ");
            scanf(" %[^\n]", fleet[i].name);

            printf("Enter new Type: ");
            scanf("%s", fleet[i].type);

            printf("Enter new Mileage: ");
            scanf("%f", &fleet[i].mileage);

            printf("Vehicle updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Vehicle not found.\n");
}

// Delete Vehicle
void deleteVehicle() {
    int id, found = 0;
    printf("Enter ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (fleet[i].id == id) {

            for (int j = i; j < count - 1; j++) {
                fleet[j] = fleet[j + 1];
            }

            count--;

            if (count == 0) {
                free(fleet);
                fleet = NULL;
            } else {
                struct Vehicle *temp = realloc(fleet, count * sizeof(struct Vehicle));
                if (temp != NULL)
                    fleet = temp;
            }

            printf("Vehicle deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Vehicle not found.\n");
}

// Main
int main() {
    int choice;

    do {
        printf("\n===== Vehicle Fleet Management =====\n");
        printf("1. Add Vehicle\n");
        printf("2. Delete Vehicle\n");
        printf("3. Update Vehicle\n");
        printf("4. Search Vehicle\n");
        printf("5. Display Vehicles\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addVehicle(); break;
            case 2: deleteVehicle(); break;
            case 3: updateVehicle(); break;
            case 4: searchVehicle(); break;
            case 5: displayVehicles(); break;
            case 6: free(fleet);
                    printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 6);

    return 0;
}
