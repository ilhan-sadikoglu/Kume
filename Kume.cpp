#include "Kume.h"
#include <iostream>
#include <string>

using namespace std;

Kume::Kume()
{
	size = 0;
	data = new char[size+1]{ '\0' };
}

Kume::Kume(char c)
{
	size = 1;
	data = new char[size + 1]{ c,'\0' };
}

Kume::Kume(const char* str)
{
	delete[] data;
	char* temp = ekle(str);
	size = 0;
	while (temp[size] >64 && temp[size])
		size++;
	data = new char[size+1];
	
	for (int i = 0; i < size; i++)
	{
		data[i] = temp[i];
	}
	data[size] = '\0';
}
char* Kume::ekle(const char* str)
{
	string s = str;
	char* temp = new char[s.size()+1];
	for (int i = 0; i < s.size() + 1; i++)
		temp[i] = '\0';
	int say = 0;

	for (int i = 0; i < s.size(); i++) {
		bool flag = false;
		for (int k = 0; k < s.size(); k++) {
			if (s[i] == temp[k])
				flag = true;
		}
		if (flag == false) {
			temp[say] = s[i];
			say++;
		}
	}
	return temp;

}

bool Kume::isInSet(char c) const
{
	for (int i = 0; i < size; i++) {
		if (data[i] == c)
			return true;
	}

	return false;
}

void Kume::print()
{
	for (int i = 0; i < size; i++)
		cout << data[i];
	cout << endl;
}

Kume Kume::operator+(Kume gelen)
{
	char* temp = new char[size+gelen.size];
	for (int i = 0; i < size; i++)
		temp[i] = data[i];
	for (int i = 0; i < gelen.size; i++)
		temp[i+size] = gelen.data[i];
	char* tp = ekle(temp);
	delete[] temp;
	Kume tmp(tp);
	return tmp;
}

Kume Kume::operator-(Kume gelen)
{
	char* temp = new char[size + gelen.size];
	int lim = size;
	int newsize=0;
	if (lim > gelen.size)
		lim = gelen.size;
	for (int i = 0; i < size; i++) {
		bool flag = false;
		for (int k = 0; k < gelen.size; k++) {
			if (data[i] == gelen.data[k])
				flag = true;
		}
			
		
		
		if (flag == false) {
			temp[newsize] = data[i];
			newsize++;
		}
			
	}

	Kume K = ekle(temp);
	//delete[] temp;
	return K;
}

Kume Kume::operator+=(Kume gelen)
{
	*this = *this + gelen;
	return *this;
}

Kume Kume::operator-=(Kume gelen)
{
	*this = *this - gelen;
	return *this;
	return Kume();
}

bool Kume::operator==(Kume gelen)
{
	if (size != gelen.size)
		return false;
	for (int i = 0; i < size; i++)
		if (data[i] != gelen.data[i])
			return false;
	return true;
	
}

bool Kume::operator!=(Kume gelen)
{
	if (*this == gelen)
		return false;
	return true;
}
