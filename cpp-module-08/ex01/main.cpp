#include <iostream>
#include "Span.hpp"

/* int main() {
    Span sp(5);

    try {
        // Span'e sayılar ekle
        sp.addNumber(1);
        sp.addNumber(2);
        sp.addNumber(3);
        sp.addNumber(4);
        sp.addNumber(5);

        //sp.addNumber(6);
    } catch (const std::out_of_range& e) {
        std::cerr << "İstisna: " << e.what() << std::endl;
    }

    //sp.printNumbers();

    return 0;
} */

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);


    std::cout << "Shortest: " <<  sp.shortestSpan() << std::endl;
    std::cout << "Longest: " <<sp.longestSpan() << std::endl;
    return 0;
}

/* int main(){
        std::vector<int> nums;
		srand(time(0));

		for (size_t i = 0; i < len; ++i) {
			nums.push_back(rand());
		}
		Span sp = Span(len);
		sp.fill(nums.begin(), nums.end());

        std::cout << "Shortest: " <<  sp.shortestSpan() << std::endl;
        std::cout << "Longest: " <<sp.longestSpan() << std::endl;
} */

