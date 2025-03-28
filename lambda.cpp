#include <iostream>
int main()
{
	int count;
	auto yy = [&] {std::cout<<++count<<std::endl; };
	count = 1;
	yy();
	count = 3;
	yy();

}
