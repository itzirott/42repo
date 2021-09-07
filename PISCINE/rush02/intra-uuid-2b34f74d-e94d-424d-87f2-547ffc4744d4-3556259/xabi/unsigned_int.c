#include <stdio.h>

void unsigned_int (int *str)
{
	if (str[9] >= 4)
	{	
		if (str[8] >= 2)
		{	
			if (str[7] == 9)
			{	
				if (str[6] >= 4)
				{	
					if(str[5] == 9)
					{	
						if(str[4] >= 6)
						{	
							if(str[3] >= 7)
							{	
								if(str[2] >= 2)
								{	
									if(str[1] == 9)
									{	
										if(str[0] > 5)
											printf("sobrepasa unsigned int");

									}

								}
							}	
						}
					}
				}
			}
		}
	}
}

int main (void)
{

	int f[10] = {5,0,0,0,0,0,0,0,0,0};
	int uint[10] = {4,0,0,0,0,0,0,0,0,0};
	int i[10] = {4,5,6};
	int limit [10]= {4,2,9,4,9,6,7,2,9,5};
	int sobrepasa [10]= {4,2,9,4,9,6,7,2,9,6};
	unsigned_int (f);
	unsigned_int (uint);
	unsigned_int (i);
	unsigned_int (limit);
	unsigned_int(sobrepasa);
}
