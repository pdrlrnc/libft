/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:29:06 by pedde-so          #+#    #+#             */
/*   Updated: 2025/08/06 13:29:06 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup_append(char *append_front, char *str, char *append_back)
{
	int		len;
	int		i;
	int		j;
	char	*result;

	len = 0;
	if (append_front)
		len += ft_strlen(append_front);
	len += ft_strlen(str);
	if (append_back)
		len += ft_strlen(append_back);
	result = malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	if(append_front)
	{
		j = 0;
		while (*(append_front + j))
			*(result + i++) = *(append_front + j++);
	}
	j = 0;
	while (*(str + j))
		*(result + i++) = *(str + j++);
	if (append_back)
	{
		j = 0;
		while (*(append_back + j))
			*(result + i++) = *(append_back + j++);
	}
	*(result + i) = '\0';
	free(str);
	return (result);
}
