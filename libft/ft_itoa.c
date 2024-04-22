/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 09:13:57 by sgarigli          #+#    #+#             */
/*   Updated: 2023/10/13 14:20:29 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	ft_10pow(int exp)
{
	size_t	pow;

	pow = 1;
	while (exp > 1)
	{
		pow *= 10;
		exp--;
	}
	return (pow);
}

static size_t	ft_nlen(int n)
{
	size_t	len;

	len = 1;
	while (n / 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_filldest(char *dest, size_t len, long int nmb)
{
	size_t	i;

	i = 0;
	if (nmb < 0)
	{
		dest[i] = '-';
		nmb *= -1;
		i = 1;
	}
	while (i < len)
	{
		dest[i] = (nmb / (ft_10pow(len - i))) + '0';
		nmb = nmb % (ft_10pow(len - i));
		i++;
	}
	dest[i] = 0;
}

char	*ft_itoa(int n)
{
	size_t		len;
	char		*dest;
	long int	nmb;

	nmb = n;
	len = ft_nlen(n);
	if (nmb < 0)
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_filldest(dest, len, nmb);
	return (dest);
}
/*
int	main(void)
{
	long n;	
	n = 2147483648013;
	//char *dest = ft_itoa(-2147483648013);
	printf("%d\n", n);
	//free (dest);
	return (0);
}*/
