#include <iostream>

using namespace std;

class connection
{
	public:
		system in;
		system out;
		void connection(system In, system Out);
	
}


class system
{
	public:
		system* next;
		system* previous;
		void set_next(system s);
		long int numOfInputs;
		long int numOfOutputs;
		
}


