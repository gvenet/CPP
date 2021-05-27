#include <iostream>

int main(void)
{
	int		numberOfBalls = 42;
	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	numberOfBalls = 56;
	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;
	return (0);
};
