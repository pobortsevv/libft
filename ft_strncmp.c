/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabra <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 09:28:00 by sabra             #+#    #+#             */
/*   Updated: 2020/07/19 09:41:17 by sabra            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] + '0' > s2[i] + '0')
			{
				return (1);
			}
			else
			{
				return (-1);
			}
		}
		i++;
	}
	return (0);
}