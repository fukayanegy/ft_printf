/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <kakigoori00007@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 12:29:15 by etakaham          #+#    #+#             */
/*   Updated: 2023/06/22 18:40:57 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
# include <stdio.h>
# include <limits.h>
// tester
// return valie check
int	main(void)
{
	char	str[] = "abcdefghijk";
	int		*num;
	int		ft_r_value[100];
	int		r_value[100];
	long	*l_num;
	printf("-----my_func-----\n");
	ft_r_value[0] = ft_printf("%x\n", 123456);
	ft_r_value[1] = ft_printf("%x\n", -123456);
	ft_r_value[2] = ft_printf("%p\n", str);
	ft_r_value[3] = ft_printf("%p\n", num);
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n", ft_r_value[i]);
	}
	printf("-----orignal-----\n");
	r_value[0] = printf("%x\n", 123456);
	r_value[1] = printf("%x\n", -123456);
	r_value[2] = printf("%p\n", str);
	r_value[3] = printf("%p\n", num);
	for(int i = 0; i < 4; i++)
	{
		printf("%d\n", r_value[i]);
	}
	return (0);
}
