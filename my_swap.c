/*
** EPITECH PROJECT, 2022
** my_swap.c
** File description:
** EPITECH Day 04 Task01 project
*/

void my_swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
