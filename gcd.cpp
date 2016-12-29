#include <iostream>
#include <vector>
#include <iterator>
#include "modulo_custom.cpp"

	template< typename T >
void print_vector( std::vector<T> v )
{
	std::copy( std::begin( v ), std::end( v ),
			std::ostream_iterator<T>( std::cout, " " ));
}

std::vector<int> euclidean_alg( int x, int y )
{
	std::vector<int> result;
	int current = 1;
	result.push_back( x );
	result.push_back( y );
	
	while( current != 0 )
	{
		current = modulo( x, y );
		result.push_back( current );
		x = y;
		y = current;
	}
	return result;
}


int main() 
{
	int x, y, multi_inv;
	std::vector<int> euclidean;

	std::cin >> x;
	std::cin >> y;

	euclidean = euclidean_alg( x, y );

	std::cout << "The euclidean process for computing the greatest common denominator of " << x << " and " << y << " is as follows: " << std::endl;
	print_vector( euclidean );
	std::cout << std::endl;
	std::cout <<"Thus, the gcd of " << x << " and " << y << " is " << euclidean[ euclidean.size() - 2 ] << "." << std::endl;
}
