#include "bsq.h"

int	main(int argc, char **argv)
{
	int		i;
	char	buffer[2];

	buffer[0] = '0';
	i = 1;
	if (argc == 1)
	{
		argv[1] = ft_take_blank();
		argc = 2;
	}
	while (i < argc)
	{
		if (ft_check_table(argv[i], buffer, i))
		{
			if (!(ft_fich_control(argv[i])))
				print_map_error();
		}
		else
			print_map_error();
		i++;
		if (i < argc)
			write(1, &"\n", 1);
	}
	return (0);
}
