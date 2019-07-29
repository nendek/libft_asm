#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "libfts.h"

int main(void) {
	char str[] = "a";
	char *test;
	char *real;
	
	int len = 2;
	test = malloc(len);
	real = malloc(len);

	//char str1[] = "ok";
	//char str2[] = "pd";

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
	printf("me\n");
	printf("%s\n", ft_memcpy(test, str, len));


	printf("real\n");
	printf("%s\n", memcpy(real, str, len));

//	char *test;
//
//	test = ft_memalloc(4);
// 	
//	test[0] = 'c';
//	printf("%s", test);
	//test = ft_strdup(str);
	//printf("%s | %s\n", str, test);
	//
//	int i = -9;
//	int k = 0;
//	int l = 0;
//
//	while (i < 255) {
//		k = ft_isprint(i);
//		l = isprint(i);
//		if (k != l) {
//			printf("i = %d\n", i);
//			printf("ft = %d\n", ft_isprint(i));
//			printf("real =%d\n", isprint(i));
//		}
//		i++;
//	}
//
	
//	ft_putchar_fd('2', 2);



	return(1);
}
