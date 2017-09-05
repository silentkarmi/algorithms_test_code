#include <time.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

int main()
{
	double iterations = -1;
	double totalHeads = 0;
	double totalTails = 0;
	std::cout<<"How many times you want to repeat the experiment?";
	std::cin>>iterations;
	std::cout<<"Experiment--->"<<std::endl;
	if(iterations > 0)
	{
		srand(time(NULL));
		for(int i = 0; i < iterations; ++i)
		{
			int randomNumber = rand() % 2;
			if(randomNumber == 0)
			{
				std::cout<<"T";
				++totalTails;
			}
			else
			{
				std::cout<<"H";
				++totalHeads;
			}
		}
		std::cout<<"\nHeads :"<<(totalHeads * 100) / iterations<<"%";
		std::cout<<"\nTails :"<<(totalTails * 100) / iterations<<"%"<<std::endl;
	}
}
