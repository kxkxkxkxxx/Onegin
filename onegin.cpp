#include <stdio.h>
#include <TXLib.h>

int main()
{
    FILE* fileOnegin = fopen("file.txt", "r");
    const size_t n_lines = 4, n_rows = 9;
    char array[n_lines][n_rows]  = {};

    for(size_t i = 0; i < n_lines; ++i)
    {
        char symbol = 'a';
        size_t j = 0;

        while(symbol != '\n')
        {
            fscanf(fileOnegin, "%c", &symbol);
            array[i][j] = symbol;
            printf(" прочитанный символ :%c", array[i][j]);
            j++;
            printf("\n");
        }
    }
    printf("посимвольный вывод, вида <<символ (адрес, ASCII-код)>>:\n");
    for(size_t i = 0; i < n_lines; ++i)
    {
        for(size_t j = 0; j < n_rows; ++j)
        {
            printf("%c(%p, %d) ", array[i][j], *(array + i * n_rows + j), array[i][j]);
        }
    printf("\n");
    }
    fclose(fileOnegin);

    return 0;
}


