/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clean_split_error.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:26:21 by pedde-so          #+#    #+#             */
/*   Updated: 2025/08/09 11:26:22 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_clean_split_error(char **split, int i)
{
	while (i >= 0)
		free(split[i--]);
	free(split);
	return (NULL);
}
