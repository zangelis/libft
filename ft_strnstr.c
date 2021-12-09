/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:48:03 by zangelis          #+#    #+#             */
/*   Updated: 2021/12/04 10:29:43 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;

	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while ((big[i] != '\0') && i < len)
	{
		c = 0;
		while (big[i + c] == little[c] && big[i + c] != '\0' && i + c < len)
		{
			if (little[c + 1] == '\0')
				return ((char *)(big + i));
			c++;
		}
		i++;
	}
	return (NULL);
}
