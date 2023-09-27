#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Quantity arguements: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Arguements %d : %s\n", i, argv[i]);
    }
    return 0;
}