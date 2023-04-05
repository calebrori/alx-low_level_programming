#include "main.h"
/**
 *
 * _puts_recursion - calls itself from inside, the same function;
 * @s: capture
 *
 * Return: a string, followed by a new line
 *
 */
void _puts_recursion(char *s)                                                                                                           
{                                                                                                                                       
        if (*s)                                                                                                                         
        {                                                                                                                               
                _putchar(*s);                                                                                                           
                _puts_recursion(s + 1);                                                                                                 
        }                                                                                                                               
                                                                                                                                        
        else                                                                                                                            
                _putchar('\n');                                                                                                         
}

