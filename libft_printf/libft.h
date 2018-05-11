/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpozinen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/15 12:51:31 by dpozinen          #+#    #+#             */
/*   Updated: 2018/03/15 12:51:32 by dpozinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strdup(const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_isdigit(int c);
int					ft_toupper(int c);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
char				*ft_strnew(size_t size);
char				*ft_strsub(char const *s,
	unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const
	*s2);
int					get_char_index(char *s, char c);
void				put_while_not_c(char *format, char c);

#endif
