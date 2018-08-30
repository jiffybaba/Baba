#include <iostream>
#include <string>

int main()
{
	std::string s = "I love C";
	            //  size of s
	s.resize( 10, '+-' );         //  resizing s
	std::cout << s << std::endl;
	return 0;
}