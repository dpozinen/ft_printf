/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpozinen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 17:03:15 by dpozinen          #+#    #+#             */
/*   Updated: 2018/03/12 17:03:24 by dpozinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_printf.h"
#include <locale.h>
#include <unistd.h>

int		main(void)
{
	ft_printf("%d %d\n", 8, 2);
	return (0);
}
