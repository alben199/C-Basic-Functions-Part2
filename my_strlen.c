/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** EPITECH Day 04 Task03 project
*/


int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0'){
        a = a + 1;
    }
    return (a);
}
