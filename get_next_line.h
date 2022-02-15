/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmois <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 09:14:30 by cmois             #+#    #+#             */
/*   Updated: 2021/06/07 14:16:24 by cmois            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# define ERROR -1

int		get_next_line(int fd, char **line);
size_t	ft_strlen(char *str);
size_t	ft_strlenn(char *str);
char	*ft_strjoin(char *s1, char *s2);
void	clean(char *str, size_t i);
void	ft_bzero(char *str);
int		n_in_buff(char *str);

#endif
