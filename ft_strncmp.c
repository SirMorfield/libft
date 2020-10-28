/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jkoers <jkoers@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 17:22:46 by jkoers        #+#    #+#                 */
/*   Updated: 2020/10/27 23:13:42 by jkoers        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>
#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 == '\0' || *s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
