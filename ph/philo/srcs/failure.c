/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   failure.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkunnam- <hkunnam-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/05 20:13:09 by hkunnam-          #+#    #+#             */
/*   Updated: 2023/03/05 20:13:09 by hkunnam-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/philo.h"

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
	if (errorcode == 8)
	{
		printf("\033[1;31m");
		printf("malloc failed\n");
		printf("\033[0m");
	}
	else if (errorcode == 9)
	{
		printf("\033[1;31m");
		printf("Invalid Number\n");
		printf("\033[0m");
	}
}

void	ft_failure(int errorcode)
{
	if (errorcode == 1)
		usage_philo();
	else if (errorcode == 2)
	{
		printf("\033[1;31m");
		printf("Please check if the arguments are valid\n");
		printf("\033[0m");
	}
	else if (errorcode == 3)
	{
		printf("\033[1;31m");
		printf("Please check the number of philosophers\n");
		printf("\033[0m");
	}
	else if (errorcode == 4)
	{
		printf("\033[1;31m");
		printf("Please check the number of meals\n");
		printf("\033[0m");
	}
	ft_failure1(errorcode);
	exit(errorcode);
}

void	failure_and_free(int errorcode, t_input *input)
{
	if (errorcode == 5)
	{
		printf("\033[1;31m");
		printf("Mutex initialization failed\n");
		printf("\033[0m");
	}
	else if (errorcode == 6)
	{
		free(input->forks);
		printf("\033[1;31m");
		printf("Thread creation failed\n");
		printf("\033[0m");
	}
	else if (errorcode == 7)
	{
		free(input->forks);
		free(input->all_philos);
		printf("\033[1;31m");
		printf("Thread join failed\n");
		printf("\033[0m");
	}
	exit(errorcode);
}
