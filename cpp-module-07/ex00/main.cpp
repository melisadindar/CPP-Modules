#include "whatever.hpp"

/* int main(){
    int a = 10, b = 10;
    double x = 5.5, y = 2.3;

    std::cout << "Max of " << a << " and " << b << " is " << ::max(a, b) << std::endl;
    std::cout << "Min of " << x << " and " << y << " is " << ::min(x, y) << std::endl;

    std::cout << "a is " << a << " b is " << b << " but i wanna see VICE VERSA" << std::endl;
    ::swap(a,b);
    std::cout << "Now a is " << a << " b is " << b << std::endl;


    return 0;
} */

int main( void ) {
    int a = 2;
    int b = 3;

    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    
    return 0;
}