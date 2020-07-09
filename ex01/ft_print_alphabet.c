#include <unistd.h>

void ft_putchar(char b)

{write(STDOUT_FILENO, &b, 1);}

void ft_print_reverse_alphabet(void){
char letter = 'z';

while (letter >= 'a'){
	ft_putchar(letter);
	letter--;
}
}

