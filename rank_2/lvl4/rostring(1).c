/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmunoz-c <bmunoz-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 19:31:18 by bmunoz-c          #+#    #+#             */
/*   Updated: 2024/06/16 19:34:09 by bmunoz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
int is_space(char c)
{
    return ((c >= 9 && c <= 13) || c == 32);
}
int count_words(char *str)
{
    int i = 0;
    int word = 0;
    while (is_space(str[i]))
        i++;
    while (str[i])
    {
        if ((is_space(str[i]) && !is_space(str[i + 1]))
        || str[i + 1] == '\0')
            word++;
        i++;
    }
    return (word);
}
int main(int ac, char **av)
{
    int i;
    int j;
    int count;
    char *str;
    if (ac >= 2)
    {
        i = 0;
        str = av[1];
        j = ft_strlen(str) - 1;
        while (is_space(str[i]))
            i++;
        while (j >= 0 && is_space(str[j]))
            j--;
        count = count_words(str);
        //clean & write only if 1 word.
        if (count == 1)
        {
            while (str[i] && !is_space(str[i]))
            {
                write(1, &str[i], 1);
                i++;
            }
            write(1, "\n", 1);
            return (0);
        }
        while (str[i] && !is_space(str[i]))
            i++;
        //salta espacios entre 1&2 word.
        while (is_space(str[i]))
            i++;
        //write from the 2 word.
        while (j >= i)
        {
            //clean all ' '.
            while (is_space(str[i]))
            {
                //write 1 space btw words.
                if (!is_space(str[i + 1]))
                    write(1, " ", 1);
                i++;
            }
            write(1, &str[i], 1);
            i++;
        }
        //write ' ' + first word
        i = 0;
        while (is_space(str[i]))
            i++;
        write (1, " ", 1);
        while (str[i] && !is_space(str[i]))
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
