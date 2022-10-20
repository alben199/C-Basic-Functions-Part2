/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** EPITECH Day 04 Task01 project
*/

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
}
