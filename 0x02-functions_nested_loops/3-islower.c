#include "main.h"

/**
 * - main print 1 if character is lower
 *  Return (0) otherwise 1
 */

int main(void)
{
int letter = 'a';
int LETTER = 'A';

if (letter <= 'z')
{
_putchar(letter);
letter++;
}
else if (LETTER <= 'Z')
{
_putchar(LETTER);
LETTER++;
}
return (0);

}
