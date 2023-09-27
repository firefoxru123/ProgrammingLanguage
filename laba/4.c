#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Использование: %s <имя_файла>\n", argv[0]);
        return 1;
    }
    const char *filename = argv[1];
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        perror("Ошибка открытия файла");
        return 2;
    }
    char ch;
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    fclose(file);
    return 0;
}