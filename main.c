/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnardozi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:33:32 by pnardozi          #+#    #+#             */
/*   Updated: 2019/07/30 16:33:41 by pnardozi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <fcntl.h>

#include "libfts.h"

void check_int_function(int i, int j)
{
	if (i != j)
		printf("FAIL\n");
	else
		printf("OK\n");
}

void check_string_function(char *i, char *j)
{
	if (i == NULL && j == NULL)
	{
		printf("OK\n");
		return;
	} else if (i == NULL || j == NULL)
	{
		printf("FAIL\n");
		return;
	}
	if (strcmp(i, j) != 0)
		printf("FAIL\n");
	else
		printf("OK\n");
}

void test_isfunc(int (*pt)(int), int (*pt2)(int))
{
	int i = -9;
	int k = 0;
	int l = 0;

	while (i <= 1024) {
		k = (*pt)(i);
		l = (*pt2)(i);
		if (k != l) {
			printf("i = %d\n", i);
			printf("ft = %d\n", ft_isprint(i));
			printf("real =%d\n", isprint(i));
		}
		i++;
	}
}

int main(void) {
	char str[] = "abcdefg";
	
	printf("Test ft_strchr:\n");
	check_string_function(ft_strchr("42FileChecker", 'k'), strchr("42FileChecker", 'k'));
	check_string_function(ft_strchr("42FileChecker", 122),strchr("42FileChecker", 122));
	check_string_function(ft_strchr("42FileChecker", 'x'), strchr("42FileChecker", 'x'));
	check_string_function(ft_strchr("42FileChecker", '\0'),strchr("42FileChecker", '\0'));
	check_string_function(ft_strchr("42FileChecker", 'k'), strchr("42FileChecker", 'k'));
	
	printf("Test ft_bzero:\n");
	int len = 10;
	char str1[] = "12345678912345678912";
	char str2[] = "12345678912345678912";
	ft_bzero(str1, len);
	bzero(str2, len);
	check_string_function(str1, str2);

	printf("Test ft_isascii...\n");
	test_isfunc(&ft_isascii, &isascii);
	printf("Test ft_isalpha...\n");
	test_isfunc(&ft_isalpha, &isalpha);
	printf("Test ft_isdigit...\n");
	test_isfunc(&ft_isdigit, &isdigit);
	printf("Test ft_isalnum...\n");
	test_isfunc(&ft_isalnum, &isalnum);
	printf("Test ft_isprint...\n");
	test_isfunc(&ft_isprint, &isprint);
	printf("Test ft_islower...\n");
	test_isfunc(&ft_islower, &islower);
	printf("Test ft_isupper...\n");
	test_isfunc(&ft_isupper, &isupper);
	printf("Test ft_toupper...\n");
	test_isfunc(&ft_toupper, &toupper);
	printf("Test ft_toupper...\n");
	test_isfunc(&ft_tolower, &tolower);
	
	printf("Test ft_strcat:\n");
	char *string = malloc(40);
	string[0] = 'X';
	char *string2 = malloc(40);
	string2[0] = 'X';
	char stringcat[] = "COUCOUtest";
	check_string_function(ft_strcat(string, stringcat), strcat(string2, stringcat));

	printf("Test ft_puts:\n");
	puts(str1);
	ft_puts(str1);
	
	printf("Test ft_strlen:\n");
	check_int_function(ft_strlen(stringcat), strlen(stringcat));
	check_int_function(ft_strlen(""), strlen(""));

	printf("Test ft_memset:\n");
	memset(str1, 'x', 4);
	ft_memset(str1, 'x', 4);
	
	printf("Test ft_memcpy && ft_memalloc:\n");
	char *test_ftmemcpy = ft_memalloc(4);
	char *test_memcpy = malloc(4);
	check_string_function(ft_memcpy(test_ftmemcpy, stringcat, 4), memcpy(test_memcpy, stringcat, 4));
	
	printf("Test ft_strdup:\n");
	check_string_function(ft_strdup(stringcat), strdup(stringcat));

	printf("Test ft_cat:\n");
	int fd = open("Makefile", O_RDONLY);
	ft_cat(fd);
	
	printf("Test ft_memcmp\n");
	char testmemcmp[] = "2e message, Alexandre Benalla dit l’avoir adressé via Telegram à Emmanuel Macron dans la nuit du 1er au 2 mai 2018, soit quelques heures après l’épisode de la Contrescarpe. Le jeune chargé de mission l’a ensuite transféré, peu après 9 heures du matin, à Alexis Kohler. Discrètement entendu par l’Inspection générale de la police (IGPN), les 17 et 18 avril 2019 (Patrick Strzoda l’a été en mars), le secrétaire général de l’Elysée a montré aux enquêteurs le numéro de téléphone expéditeur du message. Il s’agit du « 06 » de M. Benalla, mais pas n’importe lequel : celui correspondant à son fameux portable « personnel » – un appareil resté à ce jour introuvable.";

	char testmemcmp2[] = "Ce message, Alexandre Benalla dit l’avoir adressé via Telegram à Emmanuel Macron dans la nuit du 1er au 2 mai 2018, soit quelques heures après l’épisode de la Contrescarpe. Le jeune chargé de mission l’a ensuite transféré, peu après 9 heures du matin, à Alexis Kohler. Discrètement entendu par l’Inspection générale de la police (IGPN), les 17 et 18 avril 2019 (Patrick Strzoda l’a été en mars), le secrétaire général de l’Elysée a montré aux enquêteurs le numéro de téléphone expéditeur du message. Il s’agit du « 06 » de M. Benalla, mais pas n’importe lequel : celui correspondant à son fameux portable « personnel » – un appareil resté à ce jour introuvable.";

	check_int_function(ft_memcmp(testmemcmp, testmemcmp2, ft_strlen(testmemcmp)), memcmp(testmemcmp, testmemcmp2, ft_strlen(testmemcmp)));
	check_int_function(ft_memcmp(testmemcmp, stringcat, ft_strlen(testmemcmp)), memcmp(testmemcmp, stringcat, ft_strlen(testmemcmp)));
	check_int_function(ft_memcmp("\200", "\0", 1), memcmp("\200", "\0", 1));

	ft_memdel((void**)&string);
	ft_memdel((void**)&string2);
	ft_memdel((void**)&test_ftmemcpy);
	ft_memdel((void**)&test_memcpy);
	return(1);
}
