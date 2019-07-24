#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include "libfts.h"

int main(void) {
	char str[] = "COUCOU";

	char str1[] = "ok";
	char str2[] = "pd";

	//printf("%s\n", str);
	//ft_bzero(str, 6);
	//printf("%s\n", str);

	//printf("%d\n", ft_isascii('e'));
	//printf("%d\n", ft_isascii(127));
	//printf("%d\n", ft_isascii(128));
	//printf("%d\n", ft_isascii(-1));
	//printf("%d\n", ft_isascii(0));

	//printf("%s\n", ft_strcat(str1, str2));

	//puts(str1);
	//ft_puts(str1);

	//printf("%lu\n", strlen(str1));
	//printf("%zu\n", ft_strlen(str1));
	//
	//memset(str1, 'x', 4);
	//ft_memset(str1, 'x', 4);
	//printf("%s | %s\n", str1, str);
	//ft_memcpy(str1, str, 1);
	//printf("%s\n", str1);

	//char *test;

	//test = ft_strdup(str);
	//printf("%s | %s\n", str, test);
	//
	int i = -9;
	int k = 0;
	int l = 0;

	while (i < 255) {
		k = ft_isprint(i);
		l = isprint(i);
		if (k != l) {
			printf("i = %d\n", i);
			printf("ft = %d\n", ft_isprint(i));
			printf("real =%d\n", isprint(i));
		}
		i++;
	}

	return(1);
}
