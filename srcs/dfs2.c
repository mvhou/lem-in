/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dfs2.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 16:40:10 by anonymous     #+#    #+#                 */
/*   Updated: 2020/08/07 16:35:03 by mvan-hou      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void		cut_tail(t_path *path)
{
	while (path)
	{
		if (path->next)
		{
			if (!path->next->path)
			{
				free(path->next);
				path->next = NULL;
				break ;
			}
		}
		path = path->next;
	}
}

t_pnode		*start_end_path(t_data *lemin)
{
	t_pnode	*path;

	path = (t_pnode*)malloc(sizeof(t_pnode));
	path->ant_id = 0;
	path->room = lemin->end;
	path->head = path;
	path->next = NULL;
	return (path);
}

t_pnode		*new_node(t_room *room, t_pnode *next)
{
	t_pnode	*new;

	new = (t_pnode*)malloc(sizeof(t_pnode));
	new->room = room;
	new->next = next;
	new->prev = NULL;
	return (new);
}

t_path		*new_path(void)
{
	t_path	*path;

	path = (t_path*)malloc(sizeof(t_path));
	path->ants = 0;
	path->path = NULL;
	return (path);
}

int			get_path_data(t_pnode *path)
{
	t_pnode *temp;
	t_pnode	*head;
	int		len;

	temp = path;
	head = path;
	len = 0;
	while (temp)
	{
		len++;
		temp->head = head;
		temp->ant_id = 0;
		temp = temp->next;
	}
	return (len);
}
