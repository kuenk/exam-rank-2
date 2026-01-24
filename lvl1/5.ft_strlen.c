/*Escribe una funcion que devuelva la longitud de un string
int	ft_strlen(char *str);
*/
int ft_strlen(char *str)
{
    int i = 0;
    while (*str != '\0')
        i++;
    return(i);
}