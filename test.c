/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baparis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:21:43 by baparis           #+#    #+#             */
/*   Updated: 2016/11/07 18:38:25 by baparis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int ac, char **argv)
{
	char *test = "Test numero 1";
	char *test2 = "Test numero 2";
	char *tmp;
	int i;

	printf("-------TEST MEMSET-------\n");
	test = (char*)malloc(sizeof(char) * 14);
	test2 = (char*)malloc(sizeof(char) * 14);
	//test = "Test numero 1";
	//test2 = "Test numero 2";
	(void)ac;
	(void)argv;
	printf("Original (5): ");
	test = memset(test, 'A', 5);
	printf("%s\n", test);
	printf("Fonction (5): ");
	test = ft_memset(test, 'A', 5);
	printf("%s\n", test);
	printf("Original (3): ");
	test2 = memset(test2, 'B', 3);
	printf("%s\n",test2);
	printf("Fonction (3): ");
	test2 = ft_memset(test2, 'B', 3);
	printf("%s\n", test2);
	printf("--------TEST BZERO-------\n");
	test = (char*)malloc(sizeof(char) * 14);
	test2 = (char*)malloc(sizeof(char) * 14);
	printf("Original (5): ");
	bzero(test, 5);
	i = 0;
	while (i < 6)
	{
		if (test[i] == '\0')
			i++;
		else 
			printf("Error");
	}
	if (i == 6)
		printf("Success\n");
	printf("Fonction (5): ");
	ft_bzero(test, 5);
	i = 0;
	while (i < 6)
	{
		if (test[i] == '\0')
			i++;
		else 
			printf("Error");
	}
	if (i == 6)
		printf("Success\n");
	printf("Original (2): ");
	bzero(test2, 2);
	i = 0;
	while (i < 3)
	{
		if (test2[i] == '\0')
			i++;
		else 
			printf("Error");
	}
	if (i == 3)
		printf("Success\n");
	printf("Fonction (2): ");
	ft_bzero(test2, 2);
	i = 0;
	while (i < 3)
	{
		if (test2[i] == '\0')
			i++;
		else 
			printf("Error");
	}
	if (i == 3)
		printf("Success\n");
	test = "Test numero 1";
	test2 = "Test numero 2";
	printf("-------TEST MEMCPY-------\n");
	tmp = (char*)malloc(sizeof(char) * 50);
	printf("Original (6): ");
	printf("%s\n", memcpy(tmp, test, 6));
	test = "Test numero 1";
	free(tmp);
	tmp = (char*)malloc(sizeof(char) * 50);
	printf("Fonction (6): ");
	printf("%s\n", ft_memcpy(tmp, test, 6));
	tmp = (char*)malloc(sizeof(char) * 50);
	printf("Original (3): ");
	printf("%s\n", memcpy(tmp, test2, 3));
	test2 = "Test numero 2";
	free(tmp);
	tmp = (char*)malloc(sizeof(char) * 50);
	printf("Fonction (3): ");
	printf("%s\n", ft_memcpy(tmp, test, 3));
	free(tmp);
	test = "Test numero 1";
	test2 = "Test numero 2";
	printf("-------TEST MEMCHR-------\n");
	tmp = (char*)malloc(sizeof(char) * 50);
	printf("Original (u, 13): ");
	printf("%s\n", memchr(test, 'u', 13));
	test = "Test numero 1";
	printf("Fonction (u, 13): ");
	printf("%s\n", ft_memchr(test, 'u', 13));
	printf("Original (u, 4): ");
	printf("%s\n", memchr(test2, 'u', 4));
	test2 = "Test numero 2";
	printf("Fonction (u, 4): ");
	printf("%s\n", ft_memchr(test2, 'u', 4));
	printf("-------TEST MEMCMP-------\n");
	printf("Original (6, \"Test faux\"): ");
	printf("%d\n", memcmp(test, "Test faux", 13));
	printf("Fonction (6, \"Test faux\"): ");
	printf("%d\n", ft_memcmp(test, "Test faux", 13));
	printf("Original (6, \"Test numero 2\"): ");
	printf("%d\n", memcmp(test, "Test numero 2", 4));
	printf("Fonction (6, \"Test numero 2\"): ");
	printf("%d\n", ft_memcmp(test, "Test numero 2", 4));
	printf("-------TEST STRLEN-------\n");
	printf("Original (6, \"Test Faux\"): ");
	printf("%lu\n", strlen("Je fais environ bcp plus de len"));
	printf("Fonction (6, \"Test Faux\"): ");
	printf("%lu\n", ft_strlen("Je fais environ bcp plus de len"));
	printf("-------TEST STRDUP-------\n");
	printf("Original : ");
	printf("%s\n", strdup(test));
	printf("Fonction : ");
	printf("%s\n", ft_strdup(test));	
	printf("-------TEST STRCPY-------\n");
	tmp = (char*)malloc(sizeof(char) * 50);
	printf("Original : ");
	strcpy(tmp, "lol");
	printf("%s\n", tmp);
	printf("Fonction : ");
	ft_strcpy(tmp, "lol");
	printf("%s\n", tmp); 
	printf("-------TEST STRNCPY------\n");
	printf("Original : ");
	strncpy(tmp, "1234", 6);
	printf("%s\n", tmp);
	printf("Fonction : ");
	ft_strncpy(tmp, "1234", 6);
	printf("%s\n", tmp);
	printf("-------TEST STRCAT------\n");
	ft_strncpy(tmp, "lol", 6);
	printf("Original : ");
	strcat(tmp, "ilol");
	printf("%s\n", tmp);
	ft_strncpy(tmp, "lol", 6);
	printf("Fonction : ");
	ft_strcat(tmp, "ilol");
	printf("%s\n", tmp);
	printf("-------TEST STRNCAT------\n");
	ft_strncpy(tmp, "lol", 6);
	printf("Original : ");
	strncat(tmp, "ilolfdsfdsfsdfsd", 3);
	printf("%s\n", tmp);
	ft_strncpy(tmp, "lol", 6);
	printf("Fonction : ");
	ft_strncat(tmp, "iloldfdsfsd", 3);
	printf("%s\n", tmp);
	free(tmp);
	printf("-------TEST STRLCAT------\n");
	tmp = (char*)malloc(sizeof(char) * 20);
	ft_strcpy(tmp, "test");
	printf("Original : ");
	printf("%lu : ", strlcat(tmp, "phrase depasselargement les 20 allouer", 10));
	printf("%s\n", tmp);
	ft_strcpy(tmp, "test");
	printf("Fonction : ");
	printf("%lu : ", ft_strlcat(tmp, "phrase depasselargement les 20 allouer", 10));
	printf("%s\n", tmp);
	printf("-------TEST STRCHR-------\n");
	printf("Original : ");
	printf("%s\n", strchr("Je cherche un c", 'z'));
	printf("Fonction : ");
	printf("%s\n", ft_strchr("Je cherche un c", 'z'));
	printf("-------TEST STRRCHR-------\n");
	printf("Original : ");
	printf("%s\n", strrchr("zJe cherche un c", 'z'));
	printf("Fonction : ");
	printf("%s\n", ft_strrchr("zJe cherche un c", 'z'));
	printf("-------TEST STRSTR-------\n");
	printf("Original : ");
	printf("%s\n", strstr("Je cherche un c", "er"));
	printf("Fonction : ");
	printf("%s\n", ft_strstr("Je cherche un c", "er"));

	printf("-----------FIN-----------\n");
	return (0);
}
