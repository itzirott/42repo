#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_data
{
	int		**tab;
	char	*fich_header;
	int		*mark;
	char	**map;
	char	*h_nums;
	char	*h_chars;
}	t_data;

int		ft_atoi(char *str);
void	print_map_error(void);
char	*ft_take_blank(void);
int		ft_check_table(char *file, char *buffer, int nb);
char	*ft_fich_header(int fich, char *buffer);
int		ft_fich_control(char *file);
int		ft_col_quantity(int fich, char *buffer);
int		**ft_initarray(int row, int columns);
int		**ft_initdimension(int row, int columns, int fich, char *buffer);
char	*ft_header_nums (char *array, int size);
char	*ft_header_chars (char *array, int size);
char	*ft_get_header_params(char *array, int choice);
void	ft_logic(int **map, int x, int y);
int		*ft_find_greatest (int **map, int x, int y);
char	**ft_revert_map(int **tab, int x, int y, char *header);
void	ft_print_map (char **map, int col, int row);
char	**ft_reinit_map(int col, int row);
void	ft_put_square(char **map, char *header, int *mark);
void	ft_free_memory (int **tab, char **map, char *h_nums, char *h_chars);
#endif
