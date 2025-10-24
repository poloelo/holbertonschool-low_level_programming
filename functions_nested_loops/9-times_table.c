#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int f_num, s_num, result, ten_digit, last_digit;

	for (f_num = 0; f_num < 10; f_num++)
	{
		for (s_num = 0; s_num < 10; s_num++)
		{
			result = f_num * s_num;
			ten_digit = result / 10;
			last_digit = result % 10;

			if (s_num == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				else
					_putchar('0' + ten_digit);
				_putchar('0' + last_digit);
			}
		}
		_putchar('\n');
	}
}
