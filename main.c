
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>



struct student {
    char name[50];
    char reg_no[20];
    char gender[10];
    char hostel_name[50];
    int room_no;
};

    int kevo() {
    int choice;
    struct student students[50];
    int num_students = 0;
    srand(time(NULL));
        printf("%50s","-------------------------WELCOME TO----------------------------\n");
        printf("%50s","-------------------TUM HOSTEL BOOKING-------------------------\2 \n\n\n");
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
                printf("Please confirm hostel name: ");
                scanf("%s", students[num_students].hostel_name);
                students[num_students].room_no = rand() % 100 + 1;

                printf("--------------------------------------------------");
                printf("\nHello  %s, ",students[num_students].name ) ;
                printf("\nRoom booked successfully. Room number is %d.\n", students[num_students].room_no);
                printf("\n--------------------------------------------------");
                printf("\n*Take your keys and mattress from the reception.*\n");
                printf("\nMake payments of ksh 6750 to \n\n\nTUM PAYBILL NUMBER : 4045313--\n\n\nACCOUNT NAME is your registration number  %s \n\n\n",(students[num_students].reg_no) ) ;     
                num_students++;
                break;

            case 2:
                printf("All bookings:\n\n");
                printf("\n%-25s%-20s%-10s%-10s\n","NAME","REGISTRATION NO.","HOSTEL","ROOM NO.");
                printf("------------------------------------------------------------------------\n");
                int i;
                for ( i = 0; i < num_students; i++) {
                    printf("%-25s|%-20s|%-10s|%-10d|\n", students[i].name, students[i].reg_no, students[i].hostel_name, students[i].room_no);
                    printf("=================================================================================\n\n\n");
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
            printf("=================================================================================\n\n\n");
                printf("\n--------------------------------------------Thank you---------------------------!\n\n\n");
                printf("=================================================================================\n\n\n");
                exit(0);
                break;

            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (1);

    }


int main(){
    char male = 'M';
    char female = 'F';
    char gender;
    char hostel_name;
    printf("===================================================================--HOSTEL ALLOCATION SYSTEM--===========================================================================================");
    printf("\n\n\n\n\n                     Enter gender (M/F):  ");
    scanf(" %c", &gender);

    if (gender=='M')
    {
        printf("=================================================================================\n\n\n");
        printf("%50s", "MALE HOSTELS\n\n\n");
        printf("=================================================================================\n");
        

        char hostel1 = 'A';
        char hostel2 = 'B';
        char hostel;


        printf("================================================================================\n\n\n");
        printf("%50s", "(A)  OUTSIDE THE SCHOOL \n\n",hostel1);
        printf("%50s", "  (B)  WITHIN THE SCHOOL \n\n\n",hostel2);
        printf("================================================================================\n");

        printf("%60s", "CHOOSE A LOCATION OF THE HOSTEL: ");
        scanf(" %c", &hostel);

        if (hostel=='A')
        {
            printf("%40s", "================================== EXTERNAL HOSTELS =====================================\n\n\n");

            printf("%50s", "(A) MAZRUI");
            printf("%60s", "(B) KIZIWI\n\n");
            printf("%50s", "(c) OTHAYA");
            printf("%58s", "(D) KISUMU\n\n");
            printf("%60s", "choose a hostel(choice in letters): ");
            scanf (" %c", &hostel_name);

            switch (hostel_name)
            {
            case 'A':
                printf("\n\n\n\n---------------------MAZRUI---------------------\n\n\n");

                kevo();

                break;
            case 'B':
                printf("\n\n\n\n---------------------KIZIWI---------------------\n\n\n");

                kevo();

                break;
            case 'C':
                printf("\n\n\n\n---------------------OTHAYA---------------------\n\n\n");

                kevo();

                break;
            case 'D':
                printf("\n\n\n\n---------------------KISUMU---------------------\n\n\n");

                kevo();

                break;
            
            default:
                break;
            }
        }
        else if (hostel=='B')
        {
            printf("================================== INTERNAL HOSTELS =====================================\n\n\n");

            printf("%50s", "(A) SCA");
            printf("%60s", "(B) SCB\n\n");
            printf("%50s", "(c) SJA");
            printf("%58s", "(D) SJB\n");
            printf("%60s", "choose hostel(choice in letters): ");
            scanf (" %c", &hostel_name);

            switch (hostel_name)
            {
            case 'A':
                printf("\n\n\n\n---------------------SCA---------------------\n\n\n");

                kevo();

                break;
            case 'B':
                printf("\n\n\n\n---------------------SCB---------------------\n\n\n");

                kevo();

                break;
            case 'C':
                printf("\n\n\n\n---------------------SJA---------------------\n\n\n");

                kevo();

                break;
            case 'D':
                printf("\n\n\n\n---------------------SJB---------------------\n\n\n");

                kevo();

                break;
        }
        }
        else{
            printf("CHOOSE WITHIN THE GIVEN OPTIONS");
        }
    }
    else if (gender=='F')
    {
        printf("------------------------------------------------FEMALE HOSTELS---------------------------------------------\n");
        char hostel1 = 'A';
        char hostel2 = 'B';
        char hostel;


        printf("============================================================================\n\n\n");
        printf("%50s", "(A)  OUTSIDE THE SCHOOL \n\n",hostel1);
        printf("%50s", "  (B)  WITHIN THE SCHOOL \n\n\n",hostel2);
        printf("================================================================================\n");

        printf("CHOOSE A HOSTEL: ");
        scanf(" %c", &hostel);
        

        if (hostel=='A')
        {printf("================================== EXTERNAL HOSTELS =====================================\n\n\n");

            printf("%50s", "(A) MAZRUI G");
            printf("%60s", "(B) KIZIWI G\n\n");
            printf("%50s", "(c) OTHAYA G");
            printf("%58s", "(D) KISUMU G");
            printf("\n\n\n%60s", "choose hostel(choice in letters): ");
            scanf (" %c", &hostel_name);

            switch (hostel_name)
            {
            case 'A':
                printf("\n\n\n\n---------------------MAZRUI G---------------------\n\n\n");

                kevo();

                break;
            case 'B':
                printf("\n\n\n\n---------------------KIZIWI G---------------------\n\n\n");

                kevo();

                break;
            case 'C':
                printf("\n\n\n\n---------------------OTHAYA G---------------------\n\n\n");

                kevo();

                break;
            case 'D':
                printf("\n\n\n\n---------------------KISUMU G---------------------\n\n\n");

                kevo();

                break;


        }}
        else if (hostel=='B')
        {
            printf("================================== INTERNAL HOSTELS =====================================\n\n\n");

            printf("%50s", "(A) SBA");
            printf("%60s", "(B) SBB\n\n");
            printf("%50s", "(c) SFA");
            printf("%58s", "(D) SFB");
            printf("\n\n\n%60s", "choose hostel(choice in letters): ");
            scanf (" %c", &hostel_name);

            switch (hostel_name)
            {
            case 'A':
                printf("\n\n\n\n---------------------SBA---------------------\n\n\n");

                kevo();

                break;
            case 'B':
                printf("\n\n\n\n---------------------SBB---------------------\n\n\n");

                kevo();

                break;
            case 'C':
                printf("\n\n\n\n---------------------SFA---------------------\n\n\n");

                kevo();

                break;
            case 'D':
                printf("\n\n\n\n---------------------SFB---------------------\n\n\n");

                kevo();

                break;
        }
        }   
        else{
            printf("CHOOSE WITHIN THE GIVEN OPTIONS");
        }
        
        

    }
    else{
    printf("select apropriate gender....M or F !!!!!");
    }
    


    return 0;
}








