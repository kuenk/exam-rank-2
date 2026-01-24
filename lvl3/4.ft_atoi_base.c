/*Escriba una función que convierta el argumento de cadena str (base N <= 16) en un entero (base 10) y lo devuelva.

Los caracteres reconocidos en la entrada son: 0123456789abcdef. Estos caracteres deben, por supuesto, recortarse según la base solicitada. Por ejemplo, la base 4 reconoce "0123" y la base 16 reconoce "0123456789abcdef".

Las letras mayúsculas también deben reconocerse: "12fdb3" es lo mismo que "12FDB3".

Los signos menos ('-') solo se interpretan si son el primer carácter de la cadena.

La función debe declararse de la siguiente manera:
int ft_atoi_base(const char *str, int str_base)
*/
char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int get_digit(char c, int digits_in_base)
{
	int max_digit;
	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if (c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
	int result = 0;
	int sign = 1;
	int digit;

	if (*str == '-')
	{
		sign = -1;
		++str;
	}

	while ((digit = get_digit(to_lower(*str), str_base)) >= 0)
	{
		result = result * str_base;
		result = result + (digit * sign);
		++str;
	}
	return (result);
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(int argc, char **argv)
{
    printf("%d", ft_atoi_base(argv[1], atoi(argv[2])));
    return(0);
}