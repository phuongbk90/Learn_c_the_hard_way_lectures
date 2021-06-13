//
// Created by xp on 6/12/21.
//

#include <stdio.h>

int main(int argc, char **argv) {
    int i = 0;
    if (argc == 0) {
        printf("You only have one argument. You suck.\n");
    } else if (argc > 1 && argc < 4) {
        printf("Here is your argument:\n");
        for (i = 1; i < argc; i++) {
            printf("%s", argv[i]);
            printf("\n");
        }

    } else {
        printf("You have too many arguments. You suck. \n");
    }
    return 0;
}