#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct s_dict
{
	const unsigned int  *key;
	const char  		*value;
	struct s_dict		*next;
} t_dict;

#endif // DICTIONARY_H
