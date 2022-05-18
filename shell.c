#include "main.h"
/**
 * main - function with the infinite loop
 * @ac: no use
 * @av: no use
 *
 * Return: loop
 */
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}
