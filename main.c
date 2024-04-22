/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgarigli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:46:19 by sgarigli          #+#    #+#             */
/*   Updated: 2023/10/26 12:46:21 by sgarigli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char	*str;
	char	c;
	int		n;
	void	*ptr;
	
	ptr = NULL;
	str = NULL;
	n = 0;
	c = '#';
	ft_printf("%d\n",ft_printf("%u e %d e %s e %c e %X e %p\n",100 ,n,str,c,-420,ptr));
	printf("%d\n",printf("%u e %d e %s e %c e %X e %p\n",100 ,n,str,c,-420,ptr));
	printf("%d\n", printf("suo: %x\n", ULONG_MAX));
	ft_printf("%d\n", ft_printf("mio: %x\n", ULONG_MAX));
	return (0);
}
