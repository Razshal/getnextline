/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfonteni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 17:33:26 by mfonteni          #+#    #+#             */
/*   Updated: 2017/11/15 14:42:14 by mfonteni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	size_t	alloc_length;

	newstr = NULL;
	if (s1 && s2)
	{
		alloc_length = (size_t)(ft_strlen(s1) + ft_strlen(s2) + 1);
		newstr = (ft_strnew(alloc_length));
		if (newstr == NULL)
			return (NULL);
		ft_strcat(newstr, s1);
		ft_strcat(newstr, s2);
	}
	return (newstr);
}
