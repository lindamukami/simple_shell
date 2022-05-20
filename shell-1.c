#include "main.h"

int main(void)
{
	
	char *buffer = NULL;
	size_t n = 0;

	while (1)
	{
		write(1, "#", 1);
		getline(&buffer, &n, stdin);
		write(1, buffer, _strlen(buffer));
	}
	return (0);
}

int _strlen(char *str)
{
	int len;

	if(!str)
		return (0);

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	return (len);
}
