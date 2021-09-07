#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct Pair Pair;
typedef struct Dict Dict;

struct Pair
{
	const unsigned int	*key;
	const char	*value;
};
/*
struct Dict
{
	Pair	**pairs;
	int		size;
};
*/
Dict *new_dict(void);
void add_dict (Dict *D, const int *key, const char *value);
void print_dict(const Dict *D);
//void grow_dict (Dict **D, int units);
//void free_dict (Dict *D);
//void init_dict(Dict *D);

#endif // DICTIONARY_H
