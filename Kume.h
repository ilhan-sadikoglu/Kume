#pragma once
#include <iostream>
#include <string>

using namespace std;
class Kume {

	friend ostream& operator<<(ostream& out, Kume gelen) {
		for (int i = 0; i < gelen.getSize(); i++)
			out << gelen.data[i];
		return out;
	}
	
public:
	Kume(); 
	Kume(char c);
	Kume(const char* str); 
	
	char* ekle(const char* str);
	
	bool isInSet(char c) const;

	unsigned int getSize() const {
		return size;
	}
	void print();
	bool operator!() {
		if (size == 0)
			return true;
		return false;
	}

	Kume operator+(Kume); 
	Kume operator-(Kume);
	Kume operator+=(Kume);
	Kume operator-=(Kume);
	bool operator==(Kume);
	bool operator!=(Kume);
private:
	
	char* data;
	int size;
	int say = 0;
};
