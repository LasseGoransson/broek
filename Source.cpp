#include <iostream>
#include "Broek.h"
using namespace std;

int main() {

	Broek b(3, 1);
	Broek b2(2, 1);
	Broek res = b / b2;

	
	cout << b.getTaeller() << "/" << b2.getTaeller() << "=" << res.getTaeller() <<endl;
	cout << b.getNaevner() << " " << b2.getNaevner() << "=" << res.getNaevner() <<endl;


	

	


}