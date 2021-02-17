/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvankoek <mvankoek@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:11:03 by mvankoek          #+#    #+#             */
/*   Updated: 2021/02/15 14:41:29 by mvankoek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int m;
	int p;

	p = 0;
	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	while (src[p] != '\0')
	{
		dest[m++] = src[p++];
	}
	dest[m] = src[p];
	return (dest);
}