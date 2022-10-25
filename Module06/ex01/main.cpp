#include <stdint.h>
#include "Data.hpp"

uintptr_t serialize(t_Data* ptr)
{
	uintptr_t uiptr = reinterpret_cast<uintptr_t>(ptr);
	std::cout << uiptr << std::endl;
	return (uiptr);
}

t_Data* deserialize(uintptr_t raw)
{
	t_Data* data_ptr = reinterpret_cast<t_Data*>(raw);
	std::cout << data_ptr << std::endl;
	return(data_ptr);
}

void	attribute_data(t_Data *data)
{
	data->index = 24;
	data->item = new std::string("Fancy car #12");
	data->price = 124000.00f;
}

t_Data*	init_data(t_Data *data)
{
	std::string c = "test";
	data->index = 0;
	data->item = NULL;
	data->price = 0;
	return (data);
}
int main()
{
	t_Data *data = new t_Data;
	std::cout << "==========data =========\n";
	init_data(data);
	attribute_data(data);
	std::cout << data->index << std::endl;
	std::cout << *data->item << std::endl;
	std::cout << data->price << std::endl;
	uintptr_t ptr = serialize(data);
	t_Data *data2 = NULL;
	data2 = deserialize(ptr);
	std::cout << "============data2======\n";
	std::cout << data2->index << std::endl;
	std::cout << *data2->item << std::endl;
	std::cout << data2->price << std::endl;
	delete data->item;
	delete data;
}