#include <iostream>


using namespace std;

class Parent {
private:
	int *friends;

protected:
	int age;

public:
	
	Parent() {
		age = 40;
		friends = new int[100];
	}

	~Parent() {
		delete[] friends;
	}

	int getAge() {
		return age;
	}
};


class Child : public Parent {
public:
	Child() {
		age = 14;
	}

};


int main() {
	
	Parent first;
	Child sec;



	return 0;
}