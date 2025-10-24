#include "main.h"

/**
 * jack_bauer - prints every minute of the day (00:00 to 23:59)
 */
void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar('0' + (hours / 10)); /* affiche dizaine des heures */
			_putchar('0' + (hours % 10)); /* affiche unité des heures */
			_putchar(':');
			_putchar('0' + (minutes / 10)); /* affiche dizaine des minutes */
			_putchar('0' + (minutes % 10)); /* affiche unité des minutes */
			_putchar('\n');
		}
	}
}
