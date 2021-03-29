#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int i;
	char *copied;

	i = 0;
	if (!(copied = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1))))
		return (NULL);
	while (i < ft_strlen(src))
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	struct s_stock_str *tab;

	i = 0;
	tab = (struct s_stock_str*)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
