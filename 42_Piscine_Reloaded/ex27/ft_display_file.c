/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: razevedo <razevedo@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:07:56 by razevedo          #+#    #+#             */
/*   Updated: 2025/10/08 16:26:19 by razevedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	char	buffer[1024];
	ssize_t	bytes_read;
	int		file;
	int		i;

	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file < 0)
			ft_putstr("Cannot read file.\n");
		bytes_read = read(file, buffer, 1024);
		i = 0;
		while (bytes_read > 0)
		{
			write(1, &buffer[i], 1);
			i++;
			bytes_read--;
		}
		close(file);
	}
	return (0);
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}
