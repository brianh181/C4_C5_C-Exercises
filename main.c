#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int Exercise4_6() {
    long long EAN12;

    printf("Enter the first 12 digits of the EAN: ");
    scanf("%lld", &EAN12);

    int sum1, sum2;

    sum1 = sum2 = 0;

    for (int i = 0; i < 12; i++) {
        switch(i % 2 != 0) {
            case 0: {
                sum1 += (EAN12 % 10);
                break;
            }
            case 1: {
                sum2 += (EAN12 % 10);
                break;
            }
        }
        EAN12 -= (EAN12 % 10);
        EAN12 /= 10;
    }

    sum1 *= 3;
    sum2 += sum1;
    sum2 --;
    
    int checkdigit = sum2 % 10;
    checkdigit = 9 - checkdigit;

    printf("The check digit is: %d\n", checkdigit);

    return 0;
}

int Exercise5_2() {
    int hours, minutes;
    printf("Enter the time in 24 hour time: ");
    scanf("%d:%d", &hours, &minutes);

    char ampm[3];
    if (hours >= 12) {
        strcpy(ampm, "PM");
        if (hours > 12) {
            hours -= 12;
        }
    } else {
        strcpy(ampm, "AM");
        if (hours == 0) {
            hours = 12;
        }
    }

    printf("Equivalent 12-hour time: %d:%02d %s\n", hours, minutes, ampm);


    return 0;
}

int Exercise5_10() {
    int ngrade;

    printf("Enter a numerical grade: ");
    scanf("%d", &ngrade);

    switch (ngrade) {
        case 90 ... 100:
            printf("Letter grade: A\n");
            break;
        case 80 ... 89:
            printf("Letter grade: B\n");
            break;
        case 70 ... 79:
            printf("Letter grade: C\n");
            break;
        case 60 ... 69:
            printf("Letter grade: D\n");
            break;
        case 0 ... 59:
            printf("Letter grade: F\n");
            break;
        default:
            printf("Invalid grade entered.\n");
            break;
    }




    return 0;
}

int main() {
    int choices[] = {1,2,3};
    int choice;

    printf("Choose an option [1] Ch.4 Ex. 6, [2] Ch. 5 Ex. 2, [3] Ch. 5 Ex.10:  ");
    scanf("%d",&choice);

    switch(choice) {
        case 1:
            Exercise4_6();
            break;
        case 2:
            Exercise5_2();
            break;
        case 3:
            Exercise5_10();
            break;
    }

    return 0;
}