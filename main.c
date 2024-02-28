#include "shell.h"

/**
 * main - simple shell main func
 * @ac: count of args
 * @argv: array of args
 * Return: Always 0
 */

int main(int ac, char **argv)
{
char *line = NULL;
char **command = NULL;
int status = 0;
(void)ac;

while (1)
{
line = read_line();

if (line == NULL)
{
return (status);
}
command = tokenizer(line);

status = _execute(command, argv);
}
}
