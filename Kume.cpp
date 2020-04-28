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
	data = new char[size]{ c };
}

Kume::Kume(const char* str)
{
	delete[] data;
	string temp = ekle(str);
	data = new char[temp.size()];
	size = temp.size();
	for (int i = 0; i < size; i++)
	{
		data[i] = temp[i];
	}
}
string Kume::ekle(const char* str)
{
	string s = str;
	char* temp = new char[s.size()]{ '\0' };
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
	string tmp{ temp };
	return tmp;

}

bool Kume::isInSet(char c) const
{

	return false;
}

void Kume::print()
{
	for (int i = 0; i < size; i++)
		cout << data[i];
}
