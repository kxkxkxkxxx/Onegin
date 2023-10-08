#include <stdio.h>
#include <TXLib.h>
#include "myStrcpy.h"

int main()
{
    FILE* fileOnegin = fopen("file.txt", "r");

    const size_t n_str = 6;
    char* arrPointer[n_str] = {};

    const size_t buff_size = 500;
    char buffer[buff_size] = {};

    const size_t n_lines = 4;

    for(size_t i = 0; i < n_lines; ++i)
    {
       fgets(buffer, buff_size*sizeof(char), fileOnegin);

       printf("прочитал строчку : %s", buffer);

       int str_size = strlen(buffer);
       char* strMem = (char*) calloc(str_size + 1, sizeof(char));

       myStrcpy(strMem, buffer);
       arrPointer[i] = strMem;

       printf("занес в память строчку: %s", arrPointer[i]);
    }
    printf("данные из файла:\n");

    for(size_t i = 0; i < n_lines; ++i)
    {
        printf("(%p)%s", arrPointer[i], arrPointer[i]);
    }
    for(size_t i = 0; i < n_lines; ++i)
        free(arrPointer[i]);

    fclose(fileOnegin);

    return 0;
}
