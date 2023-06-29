/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etakaham <kakigoori00007@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:40:51 by etakaham          #+#    #+#             */
/*   Updated: 2023/06/22 18:40:52 by etakaham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"
# include <stdio.h>
# include <limits.h>
// tester
int	main(void)
{
	// %c, %s, %p, %d, %i, %u, %x, %X, %%
	/*------------------------------------*/
	printf("----------my_function----------\n");
	// ft_printf("%x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	ft_printf("%%%RRRRR");
	printf("\n");
	/*------------------------------------*/
	printf("----------orignail----------\n");
	// printf("%x %x %x %x %x %x %x", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("%%%RRRRR");
	printf("\n");
	/*------------------------------------*/
	return (0);
}
