#include "ex00/ft_strcpy.c"
//#include "ex01/ft_strncpy.c"
//#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
//#include "ex10/ft_strlcpy.c"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//------EX00 STRCPY

	char str1[14] = "Hola";
	char str2[14] = "HEY OH";

	char *str3 = ft_strcpy(str2, str1);
	printf("str1: %s\n",str1);	
	printf("str2: %s\n",str2);
	printf("str3: %s\n",str3);

	//------EX01 STRNCPY
/*
	char str1[13] = "Hola que tal";
	char str2[22];

	char *str3 = ft_strncpy(str2, str1, 6);
	printf("str1: %s\n",str1);	
	printf("str2: %s\n",str2);
	printf("str3: %s\n",str3);
*/
	//------EX02 StrIsAlpha
/*	
	char str1[14];
	char str2[14] = "Ei+ que .tal";
	char str3[14] = "Hola[quetal";
	char str4[14] = "HolaQueTal";
	int a = ft_str_is_alpha(str1);
	printf("%s	= ",str1);
	printf("%d\n",a);
	int b = ft_str_is_alpha(str2);
	printf("%s	= ",str2);
	printf("%d\n",b);
	int c = ft_str_is_alpha(str3);
	printf("%s	= ",str3);
	printf("%d\n",c);
	int d = ft_str_is_alpha(str4);
	printf("%s	= ",str4);
	printf("%d\n",d);
*/
	//------EX03 StrIsNumeric
/*	
	char str1[14] = "0123456789";
	char str2[14] = "Ei+ que .tal";
	char str3[14] = "0a2b3c4d";
	char str4[14] = "HolaQueTal";
	char str5[14] = "";
	int a = ft_str_is_numeric(str1);
	printf("%s	= ",str1);
	printf("%d\n",a);
	int b = ft_str_is_numeric(str2);
	printf("%s	= ",str2);
	printf("%d\n",b);
	int c = ft_str_is_numeric(str3);
	printf("%s	= ",str3);
	printf("%d\n",c);
	int d = ft_str_is_numeric(str4);
	printf("%s	= ",str4);
	printf("%d\n",d);
	int e = ft_str_is_numeric(str5);
	printf("%s	= ",str5);
	printf("%d\n",e);
*/
	//------EX04 StrIsLower
/*	
	char str1[14] = "HolaQueTal";
	char str2[14] = "holaquetal";
	int a = ft_str_is_lowercase(str1);
	printf("%s	= ",str1);
	printf("%d\n",a);
	int b = ft_str_is_lowercase(str2);
	printf("%s	= ",str2);
	printf("%d\n",b);
*/
	//------EX05 StrIsUpper
/*	
	char str1[14] = "HolaQueTal";
	char str2[14] = "HOLAQUETAL";
	int a = ft_str_is_uppercase(str1);
	printf("%s	= ",str1);
	printf("%d\n",a);
	int b = ft_str_is_uppercase(str2);
	printf("%s	= ",str2);
	printf("%d\n",b);
*/
	//------EX06 StrIsPrintable;
/*	
	char str1[14] ="a7]?! b";
	char str2[14] ="\n\0 k";
	int a = ft_str_is_printable(str1);
	printf("%s	= ",str1);
	printf("%d\n",a);
	int b = ft_str_is_printable(str2);
	printf("%s	= ",str2);
	printf("%d\n",b);
*/	
	//------EX07 StrUpCase
/*	
	char str1[14] = "hoLa cAracOla";
	printf("str1: %s\n",str1);
	char *str2 = ft_strupcase(str1);
	printf("str2: %s\n",str2);
*/	
	//------EX08 StrLowCase
/*	
	char str1[14] = "HOlA CaRACoLA";
	printf("str1: %s\n",str1);
	char *str2 = ft_strlowcase(str1);
	printf("str2: %s\n",str2);
*/
	//------EX09 StrCapitalize
/*	
	char str1[70] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+++un";
	printf("str1: %s\n",str1);
	char *str2 = ft_strcapitalize(str1);
	printf("str2: %s\n",str2);
*/
	//------EX10 StrlCpy
	/*
	char src[15] = "Hola caracola";
	char dest[40] = "que tal estas?";
	char src2[15] = "Hola caracola";
	char dest2[40] = "que tal estas?";
	int x;
	int y;

	x = strlcpy(dest,src,5);
	printf("dest: %s\n",dest);
	printf("src: %s\n",src);
	printf("%d",x);
	y = ft_strlcpy(dest2,src2,5);
	printf("dest2: %s\n",dest2);
	printf("src2: %s\n",src2);
	printf("%d",y);
*/




	return (0);
}	
