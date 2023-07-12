/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shmorish <shmorish@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:25:46 by shmorish          #+#    #+#             */
/*   Updated: 2023/07/09 10:26:13 by shmorish         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_string.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}