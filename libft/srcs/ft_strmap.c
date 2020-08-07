/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rheuts <rheuts@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 18:58:15 by rheuts        #+#    #+#                 */
/*   Updated: 2020/08/03 17:13:17 by rheuts        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	size_t			len;
	char			*tmp;

	i = 0;
	tmp = NULL;
	if (s != NULL)
	{
		len = ft_strlen(s);
		tmp = (char *)malloc(sizeof(char) * (len + 1));
		if (tmp == NULL)
			return (NULL);
		while (s[i] != '\0')
		{
			tmp[i] = (*f)(s[i]);
			i++;
		}
		tmp[i] = '\0';
	}
	return (tmp);
}
