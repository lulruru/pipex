/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rencarna <rencarna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 17:11:38 by russelenc         #+#    #+#             */
/*   Updated: 2023/05/02 14:13:20 by rencarna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"
#include <sys/wait.h>
/* # ./pipex infile cmd1 cmd2 outfile
pipe()
 |
 |-- fork()
      |
      |-- child // cmd1
      :     |--dup2()
      :     |--close end[0]
      :     |--execve(cmd1)
      :
      |-- parent // cmd2
            |--dup2()
            |--close end[1]
            |--execve(cmd2) */

void exec_command(char *cmd, char **env)
{
	char **mycmdargs;
	char *path;

	mycmdargs = ft_split(cmd, ' ');
	path = find_path(mycmdargs[0], env);
	if(execve(path, mycmdargs, env) == -1)
	{
		ft_putstr_fd("zsh: command not found: ", 2);
		ft_putendl_fd(mycmdargs[0], 2);
		free_tab(mycmdargs);
		exit(0);
	}
}

void child_process(char **av, int *pipe_fd, char **env)
{
	int fd;
	
	fd = open_check(av[1], 0);
	dup2(fd, 0);
	dup2(pipe_fd[1], 1);
	close(pipe_fd[0]);
	exec_command(av[2], env);
}

void parent_process(char **av, int *pipe_fd, char **env)
{
	int fd;
	
	fd = open_check(av[4], 1);
	dup2(fd, 1);
	dup2(pipe_fd[0], 0);
	close(pipe_fd[1]);
	exec_command(av[3], env);
}

/* int main()
{
	int id = fork();
	printf("process id : %d\n", id);
	int n;
	if(id == 0)
		n = 1;
	else 
		n = 6;
	if(id != 0)
		wait(&id);
	int	i;
	for(i = n; i < n + 5; i++)
	{
		printf("%d\n", i);
	}
}
 */
int main(int ac, char **av, char **envp)
{
	int fd[2];
	pid_t id;

	if (ac != 5)
	{
		printf("wrong nmbr arg");
		return(0);
	}
	if(pipe(fd) == -1)
		return(0);
	id = fork();
	if (!id)
	{
		child_process(av, fd, envp);	
	}
	parent_process(av, fd, envp);
	return (0);
}


