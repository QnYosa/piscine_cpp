#ifndef	HARl_H
#define HARl_H

#include <iostream>
#include <string>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	unknown(void);
	public:
		Harl(/* args */);
		~Harl();
		void	complain(std::string bullshit);
};



#endif