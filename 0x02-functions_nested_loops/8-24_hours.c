#include "main.h"

/**
 * jack_bauer(void) - a void function print all minute in the day
 * @void:
 *
 * no return value :
 */

void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			putchar('0' + hours / 10);
			putchar('0' + hours % 10);
			putchar(':');
			putchar('0' + minutes / 10);
			putchar('0' + minutes % 10);
			putchar('\n');
		}
	}
}
