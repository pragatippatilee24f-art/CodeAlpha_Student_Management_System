#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, searchId, found;

    while (1) {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Student ID: ");
                scanf("%d", &s[n].id);

                printf("Enter Student Name: ");
                scanf(" %[^\n]", s[n].name);

                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);

                n++;
                printf("Student Added Successfully!\n");
                break;

            case 2:
                if (n == 0) {
                    printf("No Records Found!\n");
                } else {
                    printf("\nStudent Records:\n");
                    for (int i = 0; i < n; i++) {
                        printf("ID: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n\n", s[i].marks);
                    }
                }
                break;

            case 3:
                printf("Enter Student ID to Search: ");
                scanf("%d", &searchId);

                found = 0;
                for (int i = 0; i < n; i++) {
                    if (s[i].id == searchId) {
                        printf("\nStudent Found:\n");
                        printf("ID: %d\n", s[i].id);
                        printf("Name: %s\n", s[i].name);
                        printf("Marks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if (!found) {
                    printf("Student Not Found!\n");
                }
                break;

            case 4:
                printf("Exiting Program...\n");
                return 0;

            default:
                printf("Invalid Choice!\n");
        }
    }

    return 0;
}
