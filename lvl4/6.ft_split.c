#include <stdlib.h>
int separator(char c)
{
    return(c == ' ');
}

int c_word(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        if (!separator(str[i]) && (i==0 || separator(str[i-1])))
            count++;
        i++;
    }
}

int wlen(char *str)
{
    int i = 0;
    while (str[i] != '\0' && !separator(str[i]))
        i++;
    return(i);
}

char *word_dup(char *str)
{
    int len=wlen(str);
    char *word=malloc(len +1);
    int i = 0;

    if (!word)
        return NULL;
    while (i<len)
    {
        word[i] = str[i];
        i++;
    }
    word[i] = '\0';
    return word;
}

char **ft_split(char *str)
{
    char **result;
    int i = 0;
    int j= 0;
    
    result=malloc(sizeof(char *) * (c_word(str)+1));
    if(!result)
        return(NULL);

    while(str[i] != '\0')
    {
        if(separator(str[i] == 0))
        {
            result[j] = word_dup(&str[i]);
            j++;
            while(str[i] && !separator(str[i]))
                i++;
        }
        else
            i++;
    }
    result[j]='\0';
    return(result);
}