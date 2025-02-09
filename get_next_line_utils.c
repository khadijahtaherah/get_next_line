/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:12:38 by skhairul          #+#    #+#             */
/*   Updated: 2025/02/09 11:12:58 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* @return	The length of the string */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/* @return	A pointer to the first occurrence of c in the string s
 *			NULL if c is not found
 */
char	*ft_strchr(char	*s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char)c)
			return (s);
		s++;
	}
	if ((char)c == *s)
		return (s);
	return (NULL);
}

/* @return	The resulting string of s1 and s2 concatenation
 * 			NULL if allocation fails
 */
char	*ft_strjoin(char *s1, char *s2)
{
	char	*result;

	if (!s1)
	{
		s1 = malloc(1 * sizeof(char));
		*s1 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	result = malloc((1 + ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (!result)
		return (NULL);
	result = ft_join(result, s1, s2);
	free(s1);
	return (result);
}

char	*ft_join(char *result, char *s1, char *s2)
{
	char	*temp;

	temp = result;
	while (s1 && *s1)
		*temp++ = *s1++;
	while (s2 && *s2)
		*temp++ = *s2++;
	*temp = '\0';
	return (result);
}
