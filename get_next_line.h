/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:10:04 by passunca          #+#    #+#             */
/*   Updated: 2023/11/11 23:19:47 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 7
# endif

// Node buffer to store read strs
typedef struct s_list
{
	char			*str;
	struct s_list	*next;
}					t_list;

// Get next line functions
char	*get_next_line(int fd);

// Utils functions
int		ft_isnewline(t_list *strs);
t_list	*ft_getlastnode(t_list *strs);

#endif
