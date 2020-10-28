/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 14:44:38 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 15:20:01 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlen(char *str)
{
	size_t	len;

	// if (str == NULL)
	// 	return (0);
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
