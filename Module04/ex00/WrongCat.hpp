#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:
		/* data */
		std::string	_type;
	public:
		WrongCat(/* args */);
		WrongCat(WrongCat const & src);
		~WrongCat();
		WrongCat & 		operator=(WrongCat const & src);
		std::string		getType()const;
		void			makeSound()const;
};



#endif