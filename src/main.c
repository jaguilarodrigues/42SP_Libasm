/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaqrodri <jaqrodri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/02 01:57:42 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/09/16 14:03:51 by jaqrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>

int	main()
{
	// ft_strlen
	// - Try ft_strlen with an empty string
	// - Try ft_strlen with a very long string
	// printf("ft_strlen:\t|%ld|\n", ft_strlen("uvaf"));
	// printf("strlen:\t|%ld|\n", strlen("uvaf"));

	// printf("ft_strlen:\t|%ld|\n", ft_strlen(""));
	// printf("strlen:\t|%ld|\n", strlen(""));

	// printf("ft_strlen:\t|%ld|\n", ft_strlen("Lorem ipsum lacinia at taciti vivamus orci pretium, quam pharetra feugiat consequat mi dictumst, posuere phasellus pulvinar turpis nulla convallis. nam cursus bibendum etiam venenatis scelerisque litora varius, sollicitudin donec odio tristique pulvinar fringilla volutpat convallis, curabitur aenean sollicitudin aptent cursus massa. eros volutpat lobortis nostra lobortis placerat sociosqu urna felis sit congue, morbi tincidunt nisl venenatis lorem eget adipiscing pharetra rhoncus. torquent nullam ut rhoncus dolor vulputate, iaculis litora facilisis tellus himenaeos, torquent ut lacinia venenatis."));
	// printf("strlen:\t|%ld|\n", strlen("Lorem ipsum lacinia at taciti vivamus orci pretium, quam pharetra feugiat consequat mi dictumst, posuere phasellus pulvinar turpis nulla convallis. nam cursus bibendum etiam venenatis scelerisque litora varius, sollicitudin donec odio tristique pulvinar fringilla volutpat convallis, curabitur aenean sollicitudin aptent cursus massa. eros volutpat lobortis nostra lobortis placerat sociosqu urna felis sit congue, morbi tincidunt nisl venenatis lorem eget adipiscing pharetra rhoncus. torquent nullam ut rhoncus dolor vulputate, iaculis litora facilisis tellus himenaeos, torquent ut lacinia venenatis."));

	// ft_strcpy
	// - Try ft_strcpy with an empty string
	// - Try ft_strcpy with a very long string
	// char *a;

	// printf("ft_strcpy:\t|%s|\n", ft_strcpy("abc", a));
	// printf("strcpy:\t|%s|\n", strcpy("abc", a));

	// printf("ft_strcpy:\t|%s|\n", ft_strcpy("", a));
	// printf("strcpy:\t|%s|\n", strcpy("", a));

	// printf("ft_strcpy:\t|%s|\n", ft_strcpy("Lorem ipsum lacinia at taciti vivamus orci pretium, quam pharetra feugiat consequat mi dictumst, posuere phasellus pulvinar turpis nulla convallis. nam cursus bibendum etiam venenatis scelerisque litora varius, sollicitudin donec odio tristique pulvinar fringilla volutpat convallis, curabitur aenean sollicitudin aptent cursus massa. eros volutpat lobortis nostra lobortis placerat sociosqu urna felis sit congue, morbi tincidunt nisl venenatis lorem eget adipiscing pharetra rhoncus. torquent nullam ut rhoncus dolor vulputate, iaculis litora facilisis tellus himenaeos, torquent ut lacinia venenatis.", a));
	// printf("strcpy:\t|%s|\n", strcpy("Lorem ipsum lacinia at taciti vivamus orci pretium, quam pharetra feugiat consequat mi dictumst, posuere phasellus pulvinar turpis nulla convallis. nam cursus bibendum etiam venenatis scelerisque litora varius, sollicitudin donec odio tristique pulvinar fringilla volutpat convallis, curabitur aenean sollicitudin aptent cursus massa. eros volutpat lobortis nostra lobortis placerat sociosqu urna felis sit congue, morbi tincidunt nisl venenatis lorem eget adipiscing pharetra rhoncus. torquent nullam ut rhoncus dolor vulputate, iaculis litora facilisis tellus himenaeos, torquent ut lacinia venenatis.", a));

	// ft_strcmp
	// - Try ft_strcmp with 2 empty strings
	// - Try ft_strcmp with 1 empty string as first argument
	// - Try ft_strcmp with 1 empty string as second argument
	// - Try ft_strcmp with multiple strings, equal or not, think about switching them
	printf("ft_cmp:\t|%d|\n", ft_strcmp("uvaf", "uva"));
	printf("cmp:\t|%d|\n", strcmp("uvaf", "uva"));

	// ft_write
	// - Try ft_write with the stdout
	// - Try ft_write with an open file descriptor
	// - Try ft_write with a wrong file descriptor
	// - Check the return value

	/*
	** ft_strdup
	** - Try ft_strdup with an empty string
	** - Try ft_strdup with a very long string
	*/
	// printf("ft_dup:\t|%s|\n", ft_strdup("abc"));
	// printf("dup:\t|%s|\n", ft_strdup("abc"));

	// printf("ft_dup:\t|%s|\n", ft_strdup(""));
	// printf("dup:\t|%s|\n", ft_strdup(""));

	// printf("ft_dup:\t|%s|\n", ft_strdup("Lorem ipsum lacinia at taciti vivamus orci pretium, quam pharetra feugiat consequat mi dictumst, posuere phasellus pulvinar turpis nulla convallis. nam cursus bibendum etiam venenatis scelerisque litora varius, sollicitudin donec odio tristique pulvinar fringilla volutpat convallis, curabitur aenean sollicitudin aptent cursus massa. eros volutpat lobortis nostra lobortis placerat sociosqu urna felis sit congue, morbi tincidunt nisl venenatis lorem eget adipiscing pharetra rhoncus. torquent nullam ut rhoncus dolor vulputate, iaculis litora facilisis tellus himenaeos, torquent ut lacinia venenatis."));
	// printf("dup:\t|%s|\n", ft_strdup("Lorem ipsum lacinia at taciti vivamus orci pretium, quam pharetra feugiat consequat mi dictumst, posuere phasellus pulvinar turpis nulla convallis. nam cursus bibendum etiam venenatis scelerisque litora varius, sollicitudin donec odio tristique pulvinar fringilla volutpat convallis, curabitur aenean sollicitudin aptent cursus massa. eros volutpat lobortis nostra lobortis placerat sociosqu urna felis sit congue, morbi tincidunt nisl venenatis lorem eget adipiscing pharetra rhoncus. torquent nullam ut rhoncus dolor vulputate, iaculis litora facilisis tellus himenaeos, torquent ut lacinia venenatis."));

	return (1);
}
