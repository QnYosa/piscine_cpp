#include "Harl.hpp"

Harl::Harl(/* args */)
{
	std::cout << "Harl default constructor" <<std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl destructor" <<std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my"
	"7XL-double-cheese-triple-pickle-special- ketchup burger."
	"I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money."
	"You didn’t put enough bacon in my burger!"
	"If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free."
	"I’ve been coming for years whereas you started working here since last month." 
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable!"
	"I want to speak to the manager now." << std::endl;
}

void	Harl::unknown(void)
{
	std::cout << "Probably complaining about insignificant problems" << std::endl;
}

void		Harl::complain(std::string bullshit)
{
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	typedef void(Harl::*funcptr)(void);
	funcptr	react[5] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::unknown};
	int			i = 0;
	while (i < 4 && bullshit != complains[i])
		i++;
	switch (i)
	{
		case 0:
			std::cout << "--------DEBUG--------" << std::endl;
			(this->*react[i])();
			break;
		case 1:
			std::cout << "--------INFO---------" << std::endl;
			(this->*react[i])();
			break;
		case 2:
			std::cout << "--------WARNING------" << std::endl;
			(this->*react[i])();
			break;
		case 3:
			std::cout << "---------ERROR-------" << std::endl;
			(this->*react[i])();
			break;
		default:
			(this->*react[i])();
			break;
	}
	if (i < 3)
		this->complain(complains[++i]);
	else
		return ;
}