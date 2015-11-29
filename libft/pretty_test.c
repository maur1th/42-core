#include <string.h>
#include <stdio.h>
#include <ctype.h>

#include "libft.h"

// #define KNRM  "\x1B[0m"
// #define KYEL  "\x1B[33m"
// #define KBLU  "\x1B[34m"
// #define KMAG  "\x1B[35m"
// #define KCYN  "\x1B[36m"
// #define KWHT  "\x1B[37m"

#define COLOR_RED "\x1B[31m"
#define COLOR_GREEN "\x1B[32m"
#define COLOR_RESET "\033[0m"
#define COLOR_BLUE "\x1B[34m"


int count = 0;
int valid = 0;

void test(const char *desc) {
	if (count != 0) {
		printf("  %d/%d tests passed\n", valid, count);
	}
	valid = 0;
	count = 0;
	if (desc != NULL) {
		printf("Testing [%s]\n", desc);
	}
}

void assert(const char *desc, int value, int expect) {
	if (value != expect) {
		count += 1;
		printf("  [%sX%s] - %s (expected %d, got %d)\n", COLOR_RED, COLOR_RESET, desc, expect, value);
	} else {
		valid += 1;
		count += 1;
		printf("  [%s✔︎%s] - %s\n", COLOR_GREEN, COLOR_RESET, desc);
	}
}


#define STR_EMPTY ""
#define STR_EMPTY_LEN 0
#define STR_NORMAL "periwinkle"
#define STR_NORMAL_LEN 10
#define STR_FEDUP "test\0test"
#define STR_FEDUP_LEN 9
#define STR_HAY "ababca"
#define STR_HAY_LEN 7


int main() {

	char *dummy_str1;
	char *dummy_str2;
	void *dummy_ptr1;
	void *dummy_ptr2;
	int dummy_int1;
	int dummy_int2;

	//////////////////////////////////////////////////////////////
	test("ft_strlen");
	assert("empty string", ft_strlen(STR_EMPTY), strlen(STR_EMPTY));
	assert("normal string", ft_strlen(STR_NORMAL), strlen(STR_NORMAL));
	assert("f'ed up string", ft_strlen(STR_FEDUP), strlen(STR_FEDUP));

	///////////////////////////////////////////////////////////////
	test("ft_strdup");
	dummy_str1 = ft_strdup(STR_EMPTY);
	dummy_str2 = strdup(STR_EMPTY);
	assert("empty string", strcmp(dummy_str1, dummy_str2), 0);
	dummy_str1 = ft_strdup(STR_NORMAL);
	dummy_str2 = strdup(STR_NORMAL);
	assert("normal string", strcmp(dummy_str1, dummy_str2), 0);
	dummy_str1 = ft_strdup(STR_FEDUP);
	dummy_str2 = strdup(STR_FEDUP);
	assert("f'ed up string", strcmp(dummy_str1, dummy_str2), 0);

	// void		ft_putchar(char c);
	// void		ft_putstr(char const *s);
	// void		ft_putendl(char const *s);
	// void		ft_putnbr(int n);

	// int			ft_toupper(int c);
	// int			ft_tolower(int c);
	// int			ft_isalnum(int c);
	// int			ft_isalpha(int c);
	// int			ft_isdigit(int c);
	// int			ft_isascii(int c);
	// int			ft_isprint(int c);

	/////////////////////////////////////////////////////////////
	test("ft_strcpy");
	dummy_str1 = malloc(STR_EMPTY_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_EMPTY_LEN * sizeof(*dummy_str2));
	ft_strcpy(dummy_str1, STR_EMPTY);
	strcpy(dummy_str2, STR_EMPTY);
	assert("empty string", strcmp(dummy_str1, dummy_str2), 0);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str2));
	ft_strcpy(dummy_str1, STR_NORMAL);
	strcpy(dummy_str2, STR_NORMAL);
	assert("normal string", strcmp(dummy_str1, dummy_str2), 0);

	dummy_str1 = malloc(STR_FEDUP_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_FEDUP_LEN * sizeof(*dummy_str2));
	ft_strcpy(dummy_str1, STR_FEDUP);
	strcpy(dummy_str2, STR_FEDUP);
	assert("f'ed up string", strcmp(dummy_str1, dummy_str2), 0);


	/////////////////////////////////////////////////////////////
	test("ft_strncpy");
	dummy_str1 = malloc(3 * sizeof(*dummy_str1));
	dummy_str2 = malloc(3 * sizeof(*dummy_str2));
	ft_strncpy(dummy_str1, STR_EMPTY, 2);
	strncpy(dummy_str2, STR_EMPTY, 2);
	assert("5 chars from empty string", strncmp(dummy_str1, dummy_str2, 2), 0);

	dummy_str1 = malloc(4 * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 * sizeof(*dummy_str2));
	ft_strncpy(dummy_str1, STR_NORMAL, 3);
	strncpy(dummy_str2, STR_NORMAL, 3);
	assert("3 chars from normal string", strncmp(dummy_str1, dummy_str2, 3), 0);

	dummy_str1 = malloc(7 * sizeof(*dummy_str1));
	dummy_str2 = malloc(7 * sizeof(*dummy_str2));
	ft_strncpy(dummy_str1, STR_FEDUP, 6);
	strncpy(dummy_str2, STR_FEDUP, 6);
	assert("6 chars from f'ed up string", strncmp(dummy_str1, dummy_str2, 7), 0);


	/////////////////////////////////////////////////////////////
	test("ft_strcat");
	dummy_str1 = malloc(4 + STR_EMPTY_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 + STR_EMPTY_LEN * sizeof(*dummy_str2));
	strcpy(dummy_str1, "abc");
	strcpy(dummy_str2, "abc");
	ft_strcat(dummy_str1, STR_EMPTY);
	strcat(dummy_str2, STR_EMPTY);
	assert("abc + empty string", strcmp(dummy_str1, dummy_str2), 0);

	dummy_str1 = malloc(4 + STR_NORMAL_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 + STR_NORMAL_LEN * sizeof(*dummy_str2));
	strcpy(dummy_str1, "abc");
	strcpy(dummy_str2, "abc");
	ft_strcat(dummy_str1, STR_NORMAL);
	strcat(dummy_str2, STR_NORMAL);
	assert("abc + normal string", strcmp(dummy_str1, dummy_str2), 0);

	dummy_str1 = malloc(4 + STR_FEDUP_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 + STR_FEDUP_LEN * sizeof(*dummy_str2));
	strcpy(dummy_str1, "abc");
	strcpy(dummy_str2, "abc");
	ft_strcat(dummy_str1, STR_FEDUP);
	strcat(dummy_str2, STR_FEDUP);
	assert("abc + f'ed up string", strcmp(dummy_str1, dummy_str2), 0);

	/////////////////////////////////////////////////////////////
	test("ft_strncat");
	dummy_str1 = malloc(4 + STR_EMPTY_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 + STR_EMPTY_LEN * sizeof(*dummy_str2));
	strcpy(dummy_str1, "abc");
	strcpy(dummy_str2, "abc");
	ft_strncat(dummy_str1, STR_EMPTY, 4);
	strncat(dummy_str2, STR_EMPTY, 4);
	assert("abc + 4 of empty string", strncmp(dummy_str1, dummy_str2, 7), 0);

	dummy_str1 = malloc(4 + STR_NORMAL_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 + STR_NORMAL_LEN * sizeof(*dummy_str2));
	strcpy(dummy_str1, "abc");
	strcpy(dummy_str2, "abc");
	ft_strncat(dummy_str1, STR_NORMAL, 4);
	strncat(dummy_str2, STR_NORMAL, 4);
	assert("abc + 4 of normal string", strncmp(dummy_str1, dummy_str2, 7), 0);

	dummy_str1 = malloc(4 + STR_FEDUP_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(4 + STR_FEDUP_LEN * sizeof(*dummy_str2));
	strcpy(dummy_str1, "abc");
	strcpy(dummy_str2, "abc");
	ft_strncat(dummy_str1, STR_FEDUP, 6);
	strncat(dummy_str2, STR_FEDUP, 6);
	assert("abc + 6 of f'ed up string", strncmp(dummy_str1, dummy_str2, 9), 0);

// void		ft_putchar_fd(char c, int fd);
// void		ft_putstr_fd(char const *s, int fd);
// void		ft_putendl_fd(char const *s, int fd);
// void		ft_putnbr_fd(int n, int fd);

	/////////////////////////////////////////////////////////////
	test("ft_memset");
	dummy_str1 = malloc(9 * sizeof(*dummy_str1));
	dummy_str2 = malloc(9 * sizeof(*dummy_str2));
	ft_memset(dummy_str1, 'a', 9);
	memset(dummy_str2, 'a', 9);
	assert("identical to system implem", memcmp(dummy_str1, dummy_str2, 9), 0);

	ft_memset(dummy_str1, 2147483647, 9);
	memset(dummy_str2, 2147483647, 9);
	assert("converted to unsigned", memcmp(dummy_str1, dummy_str2, 9), 0);
	free(dummy_str1);

	/////////////////////////////////////////////////////////////
	test("ft_bzero");
	dummy_str1 = malloc(9 * sizeof(*dummy_str1));
	dummy_str2 = malloc(9 * sizeof(*dummy_str2));
	ft_bzero(dummy_str1, 9);
	bzero(dummy_str2, 9);
	assert("identical to system implem", memcmp(dummy_str1, dummy_str2, 9), 0);

	/////////////////////////////////////////////////////////////
	test("ft_memcpy");
	dummy_str1 = malloc(STR_EMPTY_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_EMPTY_LEN * sizeof(*dummy_str2));
	ft_memcpy(dummy_str1, STR_EMPTY, STR_EMPTY_LEN);
	memcpy(dummy_str2, STR_EMPTY, STR_EMPTY_LEN);
	assert("empty string", memcmp(dummy_str1, dummy_str2, strlen(STR_EMPTY)), 0);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str2));
	ft_memcpy(dummy_str1, STR_NORMAL, STR_NORMAL_LEN);
	memcpy(dummy_str2, STR_NORMAL, STR_NORMAL_LEN);
	assert("normal string", memcmp(dummy_str1, dummy_str2, STR_NORMAL_LEN), 0);

	dummy_str1 = malloc(STR_FEDUP_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_FEDUP_LEN * sizeof(*dummy_str2));
	ft_memcpy(dummy_str1, STR_FEDUP, STR_FEDUP_LEN);
	memcpy(dummy_str2, STR_FEDUP, STR_FEDUP_LEN);
	assert("f'ed up string", memcmp(dummy_str1, dummy_str2, STR_FEDUP_LEN), 0);

	/////////////////////////////////////////////////////////////
	test("ft_memccpy");
	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str2));

	dummy_ptr1 = ft_memccpy(dummy_str1, STR_NORMAL, STR_NORMAL[4], STR_NORMAL_LEN);
	dummy_ptr2 = memccpy(dummy_str2, STR_NORMAL, STR_NORMAL[4], STR_NORMAL_LEN);
	assert("contents indentical to system", memcmp(dummy_str1, dummy_str2, 4), 0);
	assert("returns s1", (int)(dummy_ptr1), (int)dummy_str1);

	dummy_ptr1 = ft_memccpy(dummy_str1, STR_NORMAL, -1, STR_NORMAL_LEN);
	assert("returns NULL when done", (int)dummy_ptr1, (int)NULL);

	/////////////////////////////////////////////////////////////
	test("ft_memmove");
	dummy_str1 = malloc(STR_NORMAL_LEN * 2 * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_NORMAL_LEN * 2 * sizeof(*dummy_str2));
	strcpy(dummy_str1, STR_NORMAL);
	strcpy(dummy_str2, STR_NORMAL);
	ft_memmove(dummy_str1 + 1, dummy_str1, STR_NORMAL_LEN);
	memmove(dummy_str2 + 1, dummy_str2, STR_NORMAL_LEN);
	assert("contents indentical to system", memcmp(dummy_str1, dummy_str2, STR_NORMAL_LEN), 0);

	dummy_str1 = malloc(STR_NORMAL_LEN * 2 * sizeof(*dummy_str1));
	dummy_str2 = malloc(STR_NORMAL_LEN * 2 * sizeof(*dummy_str2));
	strcpy(dummy_str1, STR_NORMAL);
	strcpy(dummy_str2, STR_NORMAL);
	ft_memmove(dummy_str1, dummy_str1 + 1, STR_NORMAL_LEN - 1);
	memmove(dummy_str2, dummy_str2 + 1, STR_NORMAL_LEN - 1);
	assert("contents indentical to system", memcmp(dummy_str1, dummy_str2, STR_NORMAL_LEN), 0);

	/////////////////////////////////////////////////////////////
	test("ft_memchr");
	dummy_ptr1 = ft_memchr(STR_NORMAL, STR_NORMAL[3], STR_NORMAL_LEN);
	dummy_ptr2 = memchr(STR_NORMAL, STR_NORMAL[3], STR_NORMAL_LEN);
	assert("result indentical to system", (int)dummy_ptr1, (int)dummy_ptr2);

	/////////////////////////////////////////////////////////////
	test("ft_memcmp");
	dummy_int1 = ft_memcmp(STR_EMPTY, STR_EMPTY, STR_EMPTY_LEN);
	dummy_int2 = memcmp(STR_EMPTY, STR_EMPTY, STR_EMPTY_LEN);
	assert("empty strings, result indentical to system", dummy_int1, dummy_int2);

	dummy_int1 = ft_memcmp(STR_NORMAL, STR_NORMAL, STR_NORMAL_LEN);
	dummy_int2 = memcmp(STR_NORMAL, STR_NORMAL, STR_NORMAL_LEN);
	assert("same strings, result indentical to system", dummy_int1, dummy_int2);

	dummy_int1 = ft_memcmp(STR_NORMAL, STR_FEDUP, STR_NORMAL_LEN);
	dummy_int2 = memcmp(STR_NORMAL, STR_FEDUP, STR_NORMAL_LEN);
	assert("different strings, result indentical to system", dummy_int1, dummy_int2);

	/////////////////////////////////////////////////////////////
	test("ft_strchr");
	dummy_ptr1 = ft_strchr(STR_NORMAL, STR_NORMAL[3]);
	dummy_ptr2 = strchr(STR_NORMAL, STR_NORMAL[3]);
	assert("result indentical to system", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_ptr1 = ft_strchr(STR_NORMAL, '\0');
	dummy_ptr2 = strchr(STR_NORMAL, '\0');
	assert("can find terminating \\0", (int)dummy_ptr1, (int)dummy_ptr2);

	/////////////////////////////////////////////////////////////
	test("ft_strrchr");
	dummy_ptr1 = ft_strrchr(STR_NORMAL, STR_NORMAL[3]);
	dummy_ptr2 = strrchr(STR_NORMAL, STR_NORMAL[3]);
	assert("result indentical to system", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_ptr1 = ft_strrchr(STR_NORMAL, '\0');
	dummy_ptr2 = strrchr(STR_NORMAL, '\0');
	assert("can find terminating \\0", (int)dummy_ptr1, (int)dummy_ptr2);

	/////////////////////////////////////////////////////////////
	test("ft_strcmp");
	dummy_int1 = ft_strcmp(STR_EMPTY, STR_EMPTY);
	dummy_int2 = strcmp(STR_EMPTY, STR_EMPTY);
	assert("empty strings, result indentical to system", dummy_int1, dummy_int2);

	dummy_int1 = ft_strcmp(STR_NORMAL, STR_NORMAL);
	dummy_int2 = strcmp(STR_NORMAL, STR_NORMAL);
	assert("same strings, result indentical to system", dummy_int1, dummy_int2);

	dummy_int1 = ft_strcmp(STR_NORMAL, STR_FEDUP);
	dummy_int2 = strcmp(STR_NORMAL, STR_FEDUP);
	assert("different strings, result indentical to system", dummy_int1, dummy_int2);

	/////////////////////////////////////////////////////////////
	 test("ft_strncmp");
	 dummy_int1 = ft_strncmp(STR_EMPTY, STR_EMPTY, STR_EMPTY_LEN);
	 dummy_int2 = strncmp(STR_EMPTY, STR_EMPTY, STR_EMPTY_LEN);
	 assert("empty strings, result indentical to system", dummy_int1, dummy_int2);

	 dummy_int1 = ft_strncmp(STR_NORMAL, STR_NORMAL, STR_NORMAL_LEN);
	 dummy_int2 = strncmp(STR_NORMAL, STR_NORMAL, STR_NORMAL_LEN);
	 assert("same strings, result indentical to system", dummy_int1, dummy_int2);

	 dummy_int1 = ft_strncmp(STR_NORMAL, STR_FEDUP, STR_NORMAL_LEN);
	 dummy_int2 = strncmp(STR_NORMAL, STR_FEDUP, STR_NORMAL_LEN);
	 assert("different strings, result indentical to system", dummy_int1, dummy_int2);

	 /////////////////////////////////////////////////////////////
	 test("ft_strstr");

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strstr(dummy_str1, STR_EMPTY);
	assert("returns original when s2 is empty", (int)dummy_ptr1, (int)dummy_str1);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strstr(dummy_str1, "win");
	dummy_ptr2 = ft_strstr(dummy_str1, "win");
	assert("finds s2 in s1", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strstr(dummy_str1, "winkle\0lavander");
	dummy_ptr2 = strstr(dummy_str1, "winkle\0lavander");
	assert("f'ed up s2", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strstr(dummy_str1, "waldo");
	dummy_ptr2 = strstr(dummy_str1, "waldo");
	assert("returns NULL when s2 not found", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strstr(STR_NORMAL, "winlkeo");
	dummy_ptr2 = strstr(STR_NORMAL, "winlkeo");
	assert("returns NULL when s2 matches to end of s1 but hasn't ended yet", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_HAY_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_HAY);
	dummy_ptr1 = ft_strstr(dummy_str1, "abc");
	dummy_ptr2 = strstr(dummy_str1, "abc");
	assert("finds s2 when false start", (int)dummy_ptr1, (int)dummy_ptr2);


	/////////////////////////////////////////////////////////////
	 test("ft_strnstr");

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strnstr(dummy_str1, STR_EMPTY, STR_NORMAL_LEN);
	assert("returns noriginal when s2 is empty", (int)dummy_ptr1, (int)dummy_str1);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strnstr(dummy_str1, "win", STR_NORMAL_LEN);
	dummy_ptr2 = strnstr(dummy_str1, "win", STR_NORMAL_LEN);
	assert("finds s2n in s1", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strnstr(dummy_str1, "winkle\0lavander", STR_NORMAL_LEN);
	dummy_ptr2 = strnstr(dummy_str1, "winkle\0lavander", STR_NORMAL_LEN);
	assert("f'ed up s2", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strnstr(dummy_str1, "waldo", STR_NORMAL_LEN);
	dummy_ptr2 = strnstr(dummy_str1, "waldo", STR_NORMAL_LEN);
	assert("returns NULL when s2 not found", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_NORMAL_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_NORMAL);
	dummy_ptr1 = ft_strnstr(STR_NORMAL, "winlkeo", STR_NORMAL_LEN);
	dummy_ptr2 = strnstr(STR_NORMAL, "winlkeo", STR_NORMAL_LEN);
	assert("returns NULL when s2 matches to end of s1 but hasn't ended yet", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_HAY_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_HAY);
	dummy_ptr1 = ft_strnstr(dummy_str1, "abc", STR_HAY_LEN);
	dummy_ptr2 = strnstr(dummy_str1, "abc", STR_HAY_LEN);
	assert("finds s2 when false start", (int)dummy_ptr1, (int)dummy_ptr2);

	dummy_str1 = malloc(STR_HAY_LEN * sizeof(*dummy_str1));
	strcpy(dummy_str1, STR_HAY);
	dummy_ptr1 = ft_strnstr(dummy_str1, "abc", 3);
	dummy_ptr2 = strnstr(dummy_str1, "abc", 3);
	assert("doesn't find b/c has char restraint", (int)dummy_ptr1, (int)dummy_ptr2);



	test(NULL);

	return 0;
}
