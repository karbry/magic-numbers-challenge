

#include <iostream>
#include <vector>
#include <string>
#include<cmath>

using namespace std;



vector <int> integerToVector(int x)
{
	vector <int> resultVector;
	while (true)
	{
		resultVector.insert(resultVector.begin(), x % 10);
		x /= 10;
		if (x == 0)
			return resultVector;
	}
}
int Pow(int x, int p)
{
	if (p == 0) return 1;
	if (p == 1) return x;

	int tmp = Pow(x, p / 2);
	if (p % 2 == 0) return tmp * tmp;
	else return x * tmp * tmp;
}

void magicNum(int a, int b) {
	vector <int> range;
	
	int result;

	for (int i = a; i <= b; i++) {
		range.push_back(i);
	}


	for (int i = 0; i < range.size(); i++){
		vector<int> numbers = integerToVector(range[i]);
		result = 0;

		for (int j = 0; j < to_string(range[i]).length(); j++) {


			result += Pow(numbers[j], j + 1);

			if (result == range[i]) { cout << "The magic number is: " << result << endl; }
		}
	
	}
	
}

int main()
{
	magicNum(135, 9999);
}


