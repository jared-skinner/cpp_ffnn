#include "ffnn.hpp"


using namespace std;

int main(int argc, char ** argv)
{
	float i;

	cout << "Please provide a decimal" << endl;
	cin >> i;
	cout << "The sigmoid value of this function is: " << sigmoid(i) << endl;

	return 0;
}





