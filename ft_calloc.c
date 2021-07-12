/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 16:32:41 by ehosu             #+#    #+#             */
/*   Updated: 2021/06/04 01:12:08 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*c;

	c = malloc(nitems * size);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, nitems * size);
	return (c);
}
