/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   microshell.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:03:14 by bmunoz-c          #+#    #+#             */
/*   Updated: 2025/03/06 18:13:34 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <string.h>

void	ft_putstr_fd2(char *str, char *arg)
{
	int	i = 0;
	int	j = 0;

	while (str[i])
		write(2, &str[i++], 1);
	if (arg)
	{
		while (arg[j])
			write(2. &arg[j++], 1);
	}
	write(2, "\n", 1);
}

void	ft_execute(char *argv[], int i, int tmp_fd, char *env[])
{
	argv[i] = NULL;
	dup2(tmp_fd, STDIN_FILENO);
	close(tmp_fd);
	execve(argv[0], argv, env);
	ft_putstr_fd2("error: cannot execute ", argv[0]);
	exit(1);
}

int	main(int ac, char *av[], char *env[])
{
	int	i;
	int	fd[2];
	int	tmp_fd;
	(void)ac;

	i = 0;
	tmp_fd = dup(STDIN_FILENO);
	while (av[i] && av[1 + 1])
	{
		av = &av[i + 1]
		i = 0;
		while (av[i] && strcmp(av[i], ";") && strcmp(av[i], "|"))
			i++;

	}
}
