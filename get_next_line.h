/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mdaan <mdaan@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 12:59:32 by mdaan         #+#    #+#                 */
/*   Updated: 2021/03/12 15:29:53 by mdaan         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# define MAX_FD 1024

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 128
# endif

int		get_next_line(int fd, char **line);
int		ft_modstr(char *s, char c);
int		ft_strlend(const char *s, char end);
void	ft_strcpy(char *dst, const char *src);

#endif
