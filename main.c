#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#include "libfts.h"

int main(void) {
//	char str[] = "abcdefg";

//	printf("%s\n", ft_strchr(str, 'c'));
	//char *real;
	
	//int len = 2;
	//test = malloc(len);
	//real = malloc(len);

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
//	printf("me\n");
//	printf("%s\n", ft_memcpy(test, str, len));
//
//
//	printf("real\n");
//	printf("%s\n", memcpy(real, str, len));

	//char *test;
	//char *test2;
	char test[] = "2e message, Alexandre Benalla dit l’avoir adressé via Telegram à Emmanuel Macron dans la nuit du 1er au 2 mai 2018, soit quelques heures après l’épisode de la Contrescarpe. Le jeune chargé de mission l’a ensuite transféré, peu après 9 heures du matin, à Alexis Kohler. Discrètement entendu par l’Inspection générale de la police (IGPN), les 17 et 18 avril 2019 (Patrick Strzoda l’a été en mars), le secrétaire général de l’Elysée a montré aux enquêteurs le numéro de téléphone expéditeur du message. Il s’agit du « 06 » de M. Benalla, mais pas n’importe lequel : celui correspondant à son fameux portable « personnel » – un appareil resté à ce jour introuvable.";

	char test2[] = "Ce message, Alexandre Benalla dit l’avoir adressé via Telegram à Emmanuel Macron dans la nuit du 1er au 2 mai 2018, soit quelques heures après l’épisode de la Contrescarpe. Le jeune chargé de mission l’a ensuite transféré, peu après 9 heures du matin, à Alexis Kohler. Discrètement entendu par l’Inspection générale de la police (IGPN), les 17 et 18 avril 2019 (Patrick Strzoda l’a été en mars), le secrétaire général de l’Elysée a montré aux enquêteurs le numéro de téléphone expéditeur du message. Il s’agit du « 06 » de M. Benalla, mais pas n’importe lequel : celui correspondant à son fameux portable « personnel » – un appareil resté à ce jour introuvable.";
	//if(!(test = ft_memalloc(10)))
	//	dprintf(1, "OKOK");
	//if(!(test2 = ft_memalloc(10)))
	//	dprintf(1, "OKOK");
	//test[0] = 'c';
	//test[1] = 'o';
	//test[2] = 'p';
	//test2[0] = '3';
	//test2[1] = 'o';
	//test2[2] = 'p';
	printf("%d\n", ft_memcmp(test, test2, ft_strlen(test)));
	printf("%d\n", memcmp(test, test2, ft_strlen(test)));
	printf("%d\n", ft_memcmp(test, test2, 0));
	printf("%d\n", memcmp(test, test2, 0));
	//ft_memdel((void**)&test);
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
