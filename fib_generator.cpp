#include <iostream>

void gen_fib_n( int n );




int main( )
{
	int n;
	std::cout << "Enter how many fibonacci numbers you would like to see: ";
	std::cin >> n;
	gen_fib_n( n );
}
