#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isRegistrationValid(const char* input) {
    return (strlen(input) == 14 &&
            isalpha(input[0]) && isalpha(input[1]) && isalpha(input[2]) && isalpha(input[3]) &&
            input[4] == '/' &&
            isdigit(input[5]) && isdigit(input[6]) && isdigit(input[7]) && isalpha(input[8]) &&
            input[9] == '/' &&
            isdigit(input[10]) && isdigit(input[11]) && isdigit(input[12]) && isdigit(input[13])
           );
}

int main() {
    FILE *file;
    char name[100];
    char reg[20];

    // Open the file in write mode
    file = fopen("names.txt", "a");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    int validRegistration = 0;
    while (!validRegistration) {
        printf("Enter registration number: ");
        fgets(reg, sizeof(reg), stdin);

        // Remove the newline character from the registration number
        int len = strlen(reg);
        reg[len - 1] = (reg[len - 1] == '\n') ? '\0' : reg[len - 1];

        validRegistration = isRegistrationValid(reg) ? 1 : (printf("Invalid registration number format. Please try again.\n"), 0);
    }

    // Write the name and registration number to the file
    fprintf(file, "%s\n", name);
    fprintf(file, "%s\n", reg);

    // Close the file
    fclose(file);

    printf("Names have been saved to the file 'names.txt'.\n");

    return 0;
}
