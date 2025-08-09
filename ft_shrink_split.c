/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shrink_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:04:08 by pedde-so          #+#    #+#             */
/*   Updated: 2025/08/09 11:04:09 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**prototypes**/
static char	**cont(char **split, char **new_split, int first, int last);

char	**ft_shrink_split(char **split, int first, int last)
{
	char	**new_split;
	int		i;

	if (!split || !split[0])
		return (NULL);
	if (first >= last)
		return (split);
	i = 0;
	while (split[i])
		i++;
	new_split = malloc((i - (last - first)) * sizeof(char *));
	if (!new_split)
		return (split);
	new_split = cont(split, new_split, first, last);
	ft_clean_split(split);
	return (new_split);
}

static char	**cont(char **split, char **new_split, int first, int last)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (split[i])
	{
		if (i == first)
		{
			new_split[j] = ft_strdup(split[i++]);
			if (!new_split[j])
				return (ft_clean_split_error(split, --j));
			while (i <= last)
			{
				ft_strdup_append(NULL, new_split[j], split[i++]);
				if (!new_split[j])
					return (ft_clean_split_error(split, --j));
			}
		}
		else
		{
			new_split[j++] = ft_strdup(split[i++]);
			if (!new_split[j - 1])
				return (ft_clean_split_error(split, --j));
		}
	}
	return (new_split);
}
