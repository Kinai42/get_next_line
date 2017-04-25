/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbauduin <dbauduin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/23 20:05:41 by dbauduin          #+#    #+#             */
/*   Updated: 2017/04/25 08:14:32 by dbauduin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

int			main(void)
{
	char		*line;
	int		fd1;
	int		fd2;
	int		fd3;
	int		ret;
	char		*filename1;
	char		*filename2;
	char		*filename3;
	int		i = 0;

	filename1 = "1.txt";
	filename2 = "2.txt";
	filename3 = "3.txt";

	fd1 = open(filename1, O_RDONLY);
	fd2 = open(filename2, O_RDONLY);
	fd3 = open(filename3, O_RDONLY);
	line = NULL;
	while (i++ < 2)
	{
		ret = get_next_line(fd1, &line);
		printf("%s\n",line);
	}
	ret = get_next_line(fd2, &line);
	printf("%s\n",line);
	ret = get_next_line(fd3, &line);
	printf("%s\n",line);
	ret = get_next_line(fd1, &line);
	printf("%s\n",line);
	ret = get_next_line(fd3, &line);
	printf("%s\n",line);
	ret = get_next_line(fd1, &line);
	printf("%s\n",line);
	ret = get_next_line(fd2, &line);
	printf("%s\n",line);
	ret = get_next_line(fd2, &line);
	printf("%s\n",line);
	close(fd1);
	close(fd2);
	close(fd3);
	return (0);
}
