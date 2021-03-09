#include "dbg.h"
#include <stdlib.h>
#include <string.h>
const size_t MAX_LINE = 1024;


int main (int argc, char *argv[])
{
    char *line = calloc(MAX_LINE, 1);  
    FILE *file = fopen(argv[1], "r");

    int tab_on = 1;
    int tab_count = 0;
    char *tab4 = "    ";

    while (fgets(line, MAX_LINE, file)){
        for (int i = 0; i < MAX_LINE; i++){
            if (line[i] == '['){
                tab_on = 0;
            }
            if (line [i] == ']'){
                tab_on = 1;
            }

            if (line[i] == '{'){
                printf("\n");
                for (int j = 0; j < tab_count ; j++){
                    printf("%s", tab4);
                }
                if (tab_on){ 
                    tab_count++;
                }
                printf("%c",line[i]);
            }

            else {
                printf("%c", line [i]);
            }
        } 
    }
    
    printf("\n");
 

    return 0;
}






