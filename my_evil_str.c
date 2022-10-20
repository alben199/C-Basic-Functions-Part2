/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** EPITECH Day 04 Task04 project
*/

int my_strlen(char const *str);

char *my_evil_str (char *str)
{
    char temp;
    int start = 0;
    int end = my_strlen(str) - 1;
    int size = end;

    while (start < size / 2) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start += 1;
        end -= 1;
    }
    return (str);
}
