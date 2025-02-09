/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skhairul <skhairul@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 11:09:59 by skhairul          #+#    #+#             */
/*   Updated: 2025/02/09 11:10:12 by skhairul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_extract_line(char *start);
char	*ft_move_start(char *start);

/* Helper Functions */
size_t	ft_strlen(const char *s);
char	*ft_strchr(char	*s, int c);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_join(char *result, char *s1, char *s2);

#endif
