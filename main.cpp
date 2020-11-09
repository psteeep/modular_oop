#include <iostream>
#include <vector>


using namespace std;

int main() {

	int numb;

	vector<int> list0;

	while (true) {

		cout << "Enter number (0 == break) => ";
		cin >> numb;

		if (numb != 0) {
			list0.push_back(numb);
		}
	}



	return 0;
}