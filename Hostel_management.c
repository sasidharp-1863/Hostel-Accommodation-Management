#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    char name[50];
    int age;
    char room[10];
    char phone[15];
    int occupied;   // 1 = room booked, 0 = empty
};

struct Student hostel[MAX];

void addStudent() {
    int i;
    for(i = 0; i < MAX; i++) {
        if(hostel[i].occupied == 0) {
            printf("\n--- Add Student Details ---\n");
            printf("Enter Name: ");
            scanf("%s", hostel[i].name);

            printf("Enter Age: ");
            scanf("%d", &hostel[i].age);

            printf("Enter Room Number: ");
            scanf("%s", hostel[i].room);

            printf("Enter Phone Number: ");
            scanf("%s", hostel[i].phone);

            hostel[i].occupied = 1;

            printf("\nStudent added successfully!\n");
            return;
        }
    }

    printf("\nHostel Full! No rooms available.\n");
}

void viewStudents() {
    int i, found = 0;

    printf("\n--- Hostel Students List ---\n");

    for(i = 0; i < MAX; i++) {
        if(hostel[i].occupied == 1) {
            printf("\nName : %s", hostel[i].name);
            printf("\nAge  : %d", hostel[i].age);
            printf("\nRoom : %s", hostel[i].room);
            printf("\nPhone: %s\n", hostel[i].phone);
            found = 1;
        }
    }

    if(found == 0) {
        printf("\nNo students found.\n");
    }
}

void searchByRoom() {
    char roomNum[10];
    int i, found = 0;

    printf("\nEnter room number to search: ");
    scanf("%s", roomNum);

    for(i = 0; i < MAX; i++) {
        if(hostel[i].occupied == 1 && strcmp(hostel[i].room, roomNum) == 0) {
            printf("\n--- Student Found ---\n");
            printf("Name : %s\n", hostel[i].name);
            printf("Age  : %d\n", hostel[i].age);
            printf("Room : %s\n", hostel[i].room);
            printf("Phone: %s\n", hostel[i].phone);
            found = 1;
        }
    }

    if(found == 0) {
        printf("\nNo student found in this room.\n");
    }
}

void deleteStudent() {
    char roomNum[10];
    int i, found = 0;

    printf("\nEnter room number to vacate: ");
    scanf("%s", roomNum);

    for(i = 0; i < MAX; i++) {
        if(hostel[i].occupied == 1 && strcmp(hostel[i].room, roomNum) == 0) {
            hostel[i].occupied = 0;
            printf("\nRoom %s vacated successfully!\n", roomNum);
            found = 1;
            return;
        }
    }

    if(found == 0) {
        printf("\nRoom not found or already empty.\n");
    }
}

int main() {
    int choice;

    // Initialize all rooms as empty
    for(int i = 0; i < MAX; i++) {
        hostel[i].occupied = 0;
    }

    while(1) {
        printf("\n\n=== HOSTEL MANAGEMENT SYSTEM ===\n");
        printf("1. Add Student\n");
        printf("2. View All Students\n");
        printf("3. Search Student by Room\n");
        printf("4. Vacate Room\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: searchByRoom(); break;
            case 4: deleteStudent(); break;
            case 5: printf("\nExiting...\n"); return 0;
            default: printf("\nInvalid choice! Try again.\n");
        }
    }

    return 0;
}

