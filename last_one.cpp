#include <iostream>


using namespace std;

class Parent {
public:
	
	Parent() {
		cout << "Parent constructtor" << endl;
	}

	~Parent() {
		cout << "Parent destructor" << endl;
	}

};


class Child : public Parent {
public:
	Child() {
		cout << "Child constructtor" << endl;
	}

	~Child() {
		cout << "Child constructtor" << endl;
	}

};


int main() {
	
	Child sec;

	
	return 0;
}