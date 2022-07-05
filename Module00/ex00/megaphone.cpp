#include <stdio.h>

int nbr = 36;

namespace	Megaphone
{
	int	nbr = 13;

	int	f(void)
	{
		printf("ah mdr\n");
		return 6;
	}
}

namespace	bot
{
	int nbr = 25;

	int f(void)
	{
		printf("bip... bip...\n");
		return (-3);
	}
}

namespace	Robot = bot;

int main (void)
{
	printf("salut s1 = %d\n", Megaphone::nbr);
	printf("f return %d\n", Megaphone::f());
	printf("salut s1 = %d\n", bot::nbr);
	printf("bot::bot renvoie %d\n", bot::f());
	printf("ceci fait augure de teste %d\n", ::nbr);
	printf("salut robot %d\n", Robot::f());
}