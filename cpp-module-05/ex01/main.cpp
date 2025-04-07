#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat	james("James", 24);
		Form		bizDeal("Deal", 21, 23);
		
		james.signForm(bizDeal);
		std::cout << bizDeal << std::endl;
	} 
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}