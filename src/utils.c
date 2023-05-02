/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: russelenc <russelenc@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:57:14 by russelenc         #+#    #+#             */
/*   Updated: 2023/04/26 13:21:43 by russelenc        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	free_tab(char **tab)
{
	int	i;

	i = -1;
	while(tab[++i])
		free(tab[i]);
	free(tab);
}
int open_check(char *av, int i)
{
	int fd;
	
	if(i == 0)
		fd = open(av, O_RDONLY, 0777);
	if(i == 1)
		fd = open(av, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (fd == -1)
	{
		printf("file not found");
		exit(0);
	}
	return(fd);
}

char *get_env(char *path, char *env[])
{
	int	i;
	int	j;
	char *sub;

	i = 0;
	while(env[i])
	{
		j = 0;
		while(env[i][j] != '=')
			j++;
		sub = ft_substr(env[i], 0, j);
		if(ft_strcmp(path, sub) == 0)
		{
			free(sub);
			return(env[i] + j + 1);
		}
		free(sub);
		i++;
	}
	return(NULL);
}

char *find_path(char *cmd, char **env)
{
	char *goodpath;
	char *PATH_from_envp;
	char **mypaths;
	char **mycmdargs;
	int	i;
	
	i = -1;
	mypaths = ft_split(get_env("PATH", env), ':');
	mycmdargs = ft_split(cmd, ' ');
	while(mypaths[++i])
	{
		PATH_from_envp = ft_strjoin(mypaths[i], "/");
		goodpath = ft_strjoin(PATH_from_envp, mycmdargs[0]);
		free(PATH_from_envp);
		if(access(goodpath,  F_OK | X_OK) == 0)
		{
			free_tab(mycmdargs);
			return(goodpath);
		}
		free(goodpath);
	}
	free_tab(mypaths);
	free_tab(mycmdargs);
	return(cmd);
}