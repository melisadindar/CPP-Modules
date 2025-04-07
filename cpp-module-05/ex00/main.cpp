#include "Bureaucrat.hpp"

int main( void )
{
	try{
		Bureaucrat t0("Beste", 1);

		std::cout << t0 << std::endl;
		t0.incrementGrade();
		std::cout << t0 << std::endl;
		t0.incrementGrade();
		std::cout << t0 << std::endl;
		t0.decrementGrade();
		std::cout << t0 << std::endl;
	}
    catch (const std::exception& e){
        std::cout << e.what() << std::endl;
    }
	return (0);
}

/* int main()
{
	try
	{
		Bureaucrat james("James", 24);

		std::cout << "Before gradePlus(): " << james << std::endl;
		james.incrementGrade();
		std::cout << "After gradePlus(): " << james << std::endl;

		Bureaucrat sam("Sam", 1);

		std::cout << "Before gradeMinus(): " << sam << std::endl;
		sam.incrementGrade();
		std::cout << "after gradeMinus(): " << sam << std::endl;
        sam.incrementGrade();
		std::cout << "after gradeMinus(): " << sam << std::endl;

	} 
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
} */