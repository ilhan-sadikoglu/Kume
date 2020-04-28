#pragma once
#include <iostream>
#include <string>

using namespace std;
class Kume {
	// >> operatorunu yukleyiniz. Prototipi burada belirtiniz!
	// << operatorunu yukleyiniz. Prototipi burada belirtiniz!
public:
	Kume(); // Bos kume olusturur.
	Kume(char c); // tek elemanli bir kume olusturan donusturucu yapici
	Kume(const char* str); // Bir metni kumeye donusturen yapici
	
	string ekle(const char* str);
	// verilen bir c elemaninin kumede olup olmadigini kontrol eder
	bool isInSet(char c) const;
	// kümenin eleman sayisini dondurur
	unsigned int getSize() const {
		return size;
	}
	void print();
	// ! operatorunu yukleyiniz. Bu operator kumenin bos olup olmadini kontrol eder. Kume bossa 1, degilse 0dondurur.
		// + operatorunu yukleyiniz. Bu operator iki kumeyi birlestirir.
		// - operatorunu yukleyiniz. Bu operator kumenin diger kumeden farkini bulur
		// += operatorunu parametre bir Kume nesnesi ve bir char olacak sekilde iki kez yukleyin. Kumeye rhs kumesi eklenir.
		// -= operatorunu parametre bir Kume nesnesi ve bir char olacak sekilde iki kez yukleyin. Kumeden rhs kumesicikarilir.
		// == ve != operatorlerini yukleyiniz. Bu operatorler kumelerin esit olup olmadigini kontrol eder.
private:
	// Yardimci fonksiyonlar ekleyebilirsiniz.
	char* data;
	int size;
	int say = 0;
};