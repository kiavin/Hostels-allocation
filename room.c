#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student {
    char name[50];
    char reg_no[20];
    char gender[10];
    char hostel_name[50];
    int room_no;
};

int main() {
    int choice;
    struct student students[50];
    int num_students = 0;
    srand(time(NULL));
        printf("-----------------------WELCOME TO----------------------------\n");
        printf("-------------------TUM HOSTEL BOOKING-------------------------\2 \n\n\n");
    do {
        printf("\nPress 1 to book a room\nPress 2 to display all bookings\nPress 3 to clear a room \npress 4 to exit\n");
        printf("-------------------------------------------------------\n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter full name(without spacing):");
                scanf("%s",students[num_students].name);
                printf("Enter registration number(xxxx/yyyj/yyyy):");
                scanf("%s", students[num_students].reg_no);
                printf("Enter gender(male or female): ");
                scanf("%s", students[num_students].gender);
                printf("Enter hostel name(obote(if male),uhuru(if female): ");
                scanf("%s", students[num_students].hostel_name);
                students[num_students].room_no = rand() % 100 + 1;

               printf("\nMake payments of ksh 6750 to \n .TUM PAYBILL NUMBER : 4045313--\n .ACCOUNT NAME is your registration number  %s \n",(students[num_students].reg_no) ) ;     
                printf("--------------------------------------------------");
                printf("\nHello  %s, ",students[num_students].name ) ;
                printf("\nRoom booked successfully. Room number is %d.\n", students[num_students].room_no);
                printf("\n--------------------------------------------------");
                 printf("\n*Take your keys and mattress from the reception.*\n");
                num_students++;
                break;

            case 2:
                printf("All bookings:\n");
                printf("%-25s%-20s%-10s%-10s%-10s\n","NAME","REGISTRATION NO.","GENDER","HOSTEL","ROOM NO.");
                printf("------------------------------------------------------------------------\n");
                int i;
                for ( i = 0; i < num_students; i++) {
                    printf("%-25s|%-20s|%-10s|%-10s|%-10d|\n", students[i].name, students[i].reg_no, students[i].gender, students[i].hostel_name, students[i].room_no);
                }
               
                break;

            case 3:
                printf("\nEnter room number to clear: ");
                int room_no;
                scanf("%d", &room_no);
                for (i = 0; i < num_students; i++) {
                    if (students[i].room_no == room_no) {
                    printf("_____\n");
                        printf("Room cleared successfully.%d\n", room_no);
                    printf("_____\n");
                        int j;
                        for ( j = i; j < num_students - 1; j++) {
                            students[j] = students[j+1];
                        }
                        num_students--;
                        break;
                    }
                }
                break;
            case 4:
                printf("\n----Thank you---------------------!");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (0);

    return 0;
}