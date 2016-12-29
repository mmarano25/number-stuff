#include <iostream>

void gen_fib_n( unsigned int n )
{
	long unsigned int current, previous, temp;
	current = previous = 1;
	std::cout << "1: " << current << std::endl;
	for( int i = 2; i < n+1; i++ )
	{
		std::cout << i << ": " << current << std::endl;
		temp = current;
		current = current + previous;
		previous = temp;
		if( i == 92 )
		{
			std::cout << "This generator is not accurate after the 92nd fibonacci number." << std::endl;
			break;
		}
	}
}
		

int main( )
{
	unsigned int n;
	std::cout << "Enter how many fibonacci numbers you would like to see: ";
	std::cin >> n;
	gen_fib_n( n );
	std::cout << std::endl;
}
