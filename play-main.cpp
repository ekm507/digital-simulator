#include <iostream>

using namespace std;

class connection
{
	private:
		system in;
		system out;
	public:
		
}

connection::connection(system In, system Out)
{
	in = In;
	out = Out;
}

class system
{
	private:
		int number_of_inputs;
		int number_of_outputs;
		vector<connection> inputs;
		vector<connection> outputs;
		
		
}


int main(int argc, char** argv)
{
	std::cout << "Hello\n";

	return 0;
}
