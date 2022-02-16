#include "libftprintf.h"
#include <conio.h>

void OK()
{
	textcolor(GREEN);
	write (1, "OK! ", 4);
}

void KO()
{
	textcolor(RED);
	write (1, "KO! ", 4);
}

int main()
{
	for (test = 0, test++, test < 40)
	{
		textcolor(WHITE);
		char	*a;
		int		b

		//chr

		if (test == 0)
		{
			a = "a";
			ft_putstr("%c :");
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}

		if (test == 1)
		{
			a = "5";
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}

		if (test == 2)
		{
			a = "!";
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}

		if (test == 3)
		{
			a = "abc";
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}

		if (test == 4)
		{
			a = "%";
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}

		if (test == 5)
		{
			a = "";
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}
		
		if (test == 6)
		{
			a = NULL;
			if (ft_printf("%c", a) == printf("%c", a))
				OK();
			else
				KO();
		}

		//str

		if (test == 7)
		{
			a = "a";
			ft_putstr("\n%s :");
			if (ft_printf("%s", a) == printf("%s", a))
				OK();
			else
				KO();
		}

		if (test == 8)
		{
			a = "abcdef";
			if (ft_printf("%s", a) == printf("%s", a))
				OK();
			else
				KO();
		}

		if (test == 9)
		{
			a = "a1!s%";
			if (ft_printf("%s", a) == printf("%s", a))
				OK();
			else
				KO();
		}

		if (test == 10)
		{
			a = "";
			if (ft_printf("%s", a) == printf("%s", a))
				OK();
			else
				KO();
		}

		if (test == 11)
		{
			a = NULL;
			if (ft_printf("%s", a) == printf("%s", a))
				OK();
			else
				KO();
		}

		//ptr

		if (test == 12)
		{
			a = "a";
			ft_putstr("\n%p :");
			if (ft_printf("%p", &a) == printf("%p", &a))
				OK();
			else
				KO();
		}

		if (test == 13)
		{
			a = "abcdef";
			if (ft_printf("%p", &a) == printf("%p", &a))
				OK();
			else
				KO();
		}

		if (test == 14)
		{
			a = "i1!a%";
			if (ft_printf("%p", &a) == printf("%p", &a))
				OK();
			else
				KO();
		}

		if (test == 15)
		{
			a = "";
			if (ft_printf("%p", &a) == printf("%p", &a))
				OK();
			else
				KO();
		}

		if (test == 16)
		{
			a = NULL;
			if (ft_printf("%p", &a) == printf("%p", &a))
				OK();
			else
				KO();
		}


		//decimal

		if (test == 17)
		{
			b = 1;
			ft_putstr("\n%d :");
			if (ft_printf("%d", b) == printf("%d", b))
				OK();
			else
				KO();
		}

		//int

		if (test == 17)
		{
			b = 1;
			ft_putstr("\n%i :");
			if (ft_printf("%i", b) == printf("%i", b))
				OK();
			else
				KO();
		}

		if (test == 18)
		{
			b = -123;
			if (ft_printf("%i", b) == printf("%i", b))
				OK();
			else
				KO();
		}
	}
}