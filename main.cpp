#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int Exercise4_6() {
    int EAN12;

    printf("Enter the first 12 digits of the EAN: ");
    scanf("%d \n", &EAN12);

    int sum1, sum2;

    sum1 = sum2 = 0;

    for (int i = 0; i < 12; i++) {
        if (i % 2 == 0) {
            sum1 += (EAN12 % 10);
            printf("sum1: %d \n", sum1);
        } else {
            sum2 += (EAN12 % 10);
            printf("sum2: %d \n", sum2);
        }
        //switch(i % 2 == 0) {
        //    case 0: {
        //        sum1 += (EAN12 % 10);
        //        break;
        //    }
        //    case 1: {
        //        sum2 += (EAN12 % 10);
        //        break;
        //    }
        //}
    }
    printf("%d \n", sum1);

    return 0;
}

int Exercise5_2() {

    return 0;
}

int Exercise5_10() {
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