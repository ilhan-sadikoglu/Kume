#include "Kume.h"
using namespace std;
int main() {

	Kume k1("ilhan");
	k1.print();
	
	if (k1.isInSet('f'))
		cout << "var"<<endl;

	Kume k2("furkan");

	k2.print();
	
	Kume k3 = k1 + k2;
	k3.print();
	if (!k1)
		cout << "bos" << endl;
	else 
		cout << "dolu" << endl;
	Kume k4;
	if (!k4)
		cout << "bos" << endl;
	else
		cout << "dolu" << endl;
	Kume k5 = k1 - k2;
	k5.print();
	k1 += k2;
	k1.print();
	k1 -= k2;
	k1.print();
	if (k1 != k3){
		
		cout <<k1<< " != "<<k3;
		
	}
	Kume k6;
	cin >> k6;
	cout << k6;
		

}