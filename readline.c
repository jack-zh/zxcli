#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>

/* Define yy_size_t for flex compatibility */
typedef size_t yy_size_t;

void yy_input(char *buf, yy_size_t *result, int max_size)
{
    if(isatty(0)) {
        char *s = NULL;            
        while(s == NULL || *s == 0)    s = readline("cli> ");
        add_history(s);        
        strncpy(buf, s, max_size);
        strcat(buf, "\n");
        *result = strlen(buf);
    }
}
