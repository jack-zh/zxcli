#include <stdio.h>

/* Define yy_size_t for flex compatibility */
typedef size_t yy_size_t;

extern int cli_action();
extern int cli_action_1(int);
extern int yy_input(char *buf, yy_size_t *result, int max_size);
extern int yylex();
extern void clear_name_table();
extern int hy_switch_to_file(FILE *file);
extern char *add_name_table(char *name);
extern int find_token(char *input);
extern void start_cli(char *cmd, FILE *fp);
