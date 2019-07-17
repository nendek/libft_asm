#include <stdio.h>
#include <string.h>
#include "libfts.h"

int main(void) {
	char str[] = "COUCOU";

	printf("%s\n", str);
	ft_bzero(str, 6);
	printf("%s\n", str);

	return(1);
}
