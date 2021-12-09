/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 09:47:54 by zangelis          #+#    #+#             */
/*   Updated: 2021/12/04 10:27:58 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	src_length;
	size_t	dst_length;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	i = 0;
	c = dst_length;
	if (dst_length < (dstsize - 1) && dstsize > 0)
	{
		while (src[i] && (dst_length + i) < (dstsize - 1))
		{
			dst[c] = src[i];
			c++;
			i++;
		}
		dst[c] = '\0';
	}
	if (dst_length >= dstsize)
	{
		dst_length = dstsize;
	}
	return (dst_length + src_length);
}
