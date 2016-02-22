#include <iostream>
#include <cstdlib>
#include <thread>
using namespace std;

#define NUM_THREADS 5


void foo()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "printing " << i << "elephants from foo thread\n";
		cout << "going to sleep for 5 seconds\n";
		_sleep(5*1000);
	}
	
}

void bar(int x)
{
	for (int i = 0; i < x; i++)
	{
		cout << "printing " << i << "birds from bar thread\n";
		cout << "going to sleep for 3 seconds\n";
		_sleep(3*1000);
	}
}

int main()
{
	std::thread first(foo);     // spawn new thread that calls foo()
	std::thread second(bar, 5);  // spawn new thread that calls bar(0)

	std::cout << "main, foo and bar now execute concurrently...\n";

	// synchronize threads:
	first.join();                // pauses until first finishes
	second.join();               // pauses until second finishes

	std::cout << "foo and bar completed.\n";

	return 0;
}

