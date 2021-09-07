#include <stdio.h>

void unsigned_int (int *str)
{
	if ((str[9] >= 4) && (str[8] >= 2) && (str[7] == 9) && (str[6] >= 4) &&
		(str[6] >= 4) && (str[5] == 9) && (str[4] >= 6) && (str[3] >= 7) &&
		(str[2] >= 2) && (str[1] == 9) && (str[0] > 5))
	{
		printf("sobrepasa unsigned int");
	}	
}

int main (void)
{

	int f[10] = {0,0,0,0,0,0,0,0,0,5};
	int uint[10] = {4,0,0,0,0,0,0,0,0,5};
	int i[10] = {4,5,6};
	int limit [10] = {5,9,2,7,6,9,4,9,2,4};
	int sobrepasa [10]= {8,9,2,7,6,9,4,9,2,4};
	unsigned_int (f);
	unsigned_int (uint);
	unsigned_int (i);
	unsigned_int (limit);
	unsigned_int(sobrepasa);
}
