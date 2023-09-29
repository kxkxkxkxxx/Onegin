#include <stdio.h>
#include <TXLib.h>

int main()
{
    FILE* fileOnegin = fopen("file.txt", "r");
    const size_t n_lines = 4, n_rows = 9;
    char array[n_lines][n_rows]  = {};

    for(size_t i = 0; i < n_lines; ++i)
    {
        if(fgets(array[i], sizeof(char) * 10, fileOnegin) == NULL)
        break;
    }
    printf("построчный вывод: \n");
    for(size_t i = 0; i < n_lines - 1; ++i)
    {
        printf("%s", array[i]);
    }
    fclose(fileOnegin);

    return 0;
}


