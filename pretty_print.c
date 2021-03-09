#include "dbg.h"
#include <stdlib.h>
#include <string.h>
const size_t MAX_LINE = 1024;


int main (int argc, char *argv[])
{
    char *line = calloc(MAX_LINE, 1);  
    FILE *file = fopen(argv[1], "r");

    while (fgets(line, MAX_LINE, file)){
        for (int i = 0; i < MAX_LINE; i++){
            if (line[i] == '}' ||
                line[i] == ','){
                printf("%c\n", line[i]);
            }
            else {
                printf("%c", line [i]);
            }
        } 
    }
 

    return 0;
}






