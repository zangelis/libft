/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zangelis <zangelis@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 09:34:23 by zangelis          #+#    #+#             */
/*   Updated: 2021/12/07 09:47:29 by zangelis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**ft_free(char **split, int count)
{
	while (count >= 0)
		free(split[count--]);
	return (NULL);
}

static int	ft_count_parts(const char *s, char c)
{
	int	number;
	int	trigger;

	number = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			number++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (number);
}

static char	*ft_part(const char *s, int start, int end)
{
	char	*part;
	int		i;

	i = 0;
	part = malloc((end - start + 1) * sizeof(char));
	if (!part)
		return (NULL);
	while (start < end)
		part[i++] = s[start++];
	part[i] = '\0';
	return (part);
}

static	char	**ft_create_split(char **split, char c, char const *s)
{
	size_t	i;
	int		trigger;
	size_t	count;

	i = 0;
	count = 0;
	trigger = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && trigger < 0)
			trigger = i;
		else if ((s[i] == c || i == ft_strlen(s)) && trigger >= 0)
		{
			split[count] = ft_part(s, trigger, i);
			if (split[count] == NULL)
				return (ft_free(split, count));
			trigger = -1;
			count++;
		}
		i++;
	}
	split[count] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = (char **)malloc((ft_count_parts(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	ft_create_split(split, c, s);
	return (split);
}
