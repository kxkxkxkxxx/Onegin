#include "myStrcpy.h"

void myStrcpy(char* str1, char* str2)
{
    for(int i = 0; ; ++i)
    {
        str1[i] = str2[i];

        if(str1[i] == '\0')
            break;
    }
}
