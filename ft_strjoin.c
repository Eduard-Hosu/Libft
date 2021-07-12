/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehosu <ehosu@student.42wolfsburg.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 13:53:40 by ehosu             #+#    #+#             */
/*   Updated: 2021/05/24 10:50:28 by ehosu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	total_l;
	unsigned int	prefix_l;
	unsigned int	sufix_l;
	char			*result;

	prefix_l = ft_strlen(s1);
	sufix_l = ft_strlen(s2);
	total_l = prefix_l + sufix_l;
	result = (char *)malloc(total_l + 1);
	if (result == NULL)
		return (NULL);
	ft_memcpy(result, s1, prefix_l);
	ft_memcpy(result + prefix_l, s2, sufix_l);
	result[total_l] = '\0';
	return (result);
}
