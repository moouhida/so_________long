/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moouhida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:55:00 by moouhida          #+#    #+#             */
/*   Updated: 2024/12/11 16:55:06 by moouhida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1337
# endif

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_ref_fd(int fd, char *str, char *buffer);
char	*get_after_line(char *str);
int		ft_strchr(char *str, char c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(char *str);
char	*ft_strjoin(const char *le, const char *et);
char	*ft_start(char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);

#endif
