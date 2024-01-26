/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_failure.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 21:02:20 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/03/15 21:02:20 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo_bonus.h"

static void	usage_philo(void)
{
	printf("\033[1;32m");
	printf("|--------------------------------------------|\n");
	printf("|   	Please Enter 4 or 5 arguments        |\n");
	printf("|--------------------------------------------|\n");
	printf("|	1. Number of Philosophers            |\n");
	printf("|	2. Time to Die in milliseconds 	     |\n");
	printf("|	3. Time to Eat in milliseconds 	     |\n");
	printf("|	4. Time to Sleep in milliseconds     |\n");
	printf("|	5. Number of Meals		     |\n");
	printf("|--------------------------------------------|\n");
	printf("\033[0m");
}

static void	ft_failure1(int errorcode)
{
	if (errorcode == 5)
	{
		printf("\033[1;31m");
		printf("philo number shuld be more than 1\n");
		printf("\033[0m");
	}
	else if (errorcode == 6)
	{
		printf("\033[1;31m");
		printf("malloc error\n");
		printf("\033[0m");
	}
	else if (errorcode == 7)
	{
		printf("\033[1;31m");
		printf("thread create error\n");
		printf("\033[0m");
	}
	else if (errorcode == 8)
	{
		printf("\033[1;31m");
		printf("fork failed\n");
		printf("\033[0m");
	}
}

void	ft_failure(int errorcode)
{
	if (errorcode == 1)
	{
		printf("\033[1;31m");
		printf("Invalid Number\n");
		printf("\033[0m");
	}
	else if (errorcode == 2)
		usage_philo();
	else if (errorcode == 3)
	{
		printf("\033[1;31m");
		printf("Please check if the arguments are valid\n");
		printf("\033[0m");
	}
	ft_failure1(errorcode);
	exit (errorcode);
}
