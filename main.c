#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("%");
    printf("\n");
    printf("%");/* "%" =>  */
    printf("\n\n");
    _printf("%%");
    printf("\n");
    printf("%%");/* "%%" => % */
    printf("\n\n");
    _printf("z%%");
    printf("\n");
    printf("z%%"); /* "z%%" =>  z% */
    printf("\n\n");
    _printf("%%z");
    printf("\n");
    printf("%%z");/* "%%z" =>  %z */
    printf("\n\n");
    _printf("z%");
    printf("\n");
    printf("z%");/* "z%" =>  z */
    printf("\n\n");
    _printf("%z");
    printf("\n");
    printf("%z");/* "%z" =>  */
    printf("\n");
    printf("\n");
    _printf("z%%\n");
    printf("z%%\n");/*z%%\n => z% */
    printf("\n");
    _printf("%%z\n");
    printf("%%z\n");/* %%z\n => %z */
    printf("\n");
    _printf("z%\n");
    printf("z%\n");/* z%\n => z%*/
    printf("\n");
    _printf("%z\n");
    printf("%z\n");/* %z\n => %*/
    printf("\n");
    _printf("%\n");
    printf("%\n");/* "%\n" => %*/
    printf("\n");
    _printf("%%\n");
    printf("%%\n");/* "%%\n" => %*/
    return (0);
}
