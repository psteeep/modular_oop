#include <iostream>
#include <vector>
#include <algorithm>

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

		else if (numb == 0) {
			break;
		}

		else {
			cout << "incorrect input";
			break
		}
	}
	
	int max = *max_element(list0.begin, list0.end);

	cout << "MAX element = " << max << endl;


	return 0;
}