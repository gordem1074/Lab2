#include <iostream>
using namespace std;

int main() {
	float sum, month, result;
	cout << "Input sum in \"$\" and month:"  << endl;
	cin >> sum >> month;
	result = sum *(5/100)/12/month;
	cout << " Result: " << result << endl;
	
	return 0;
}
