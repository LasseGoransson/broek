#include <iostream>
#include "Broek.h"
using namespace std;

int main() {

	Broek b(30, 78);
	Broek b2(12, 66);
	Broek res = b / b2;

	
	cout << "Broek 1: " << b.getTaeller() << "/" << b.getNaevner() << endl;
	cout << "Broek 2: " << b2.getTaeller() << "/" << b2.getNaevner() << endl;

	cout << "+ = " << (b + b2).getTaeller() << "/"<< (b + b2).getNaevner() << endl;
	cout << "- = " << (b - b2).getTaeller() << "/" << (b - b2).getNaevner() << endl;
	cout << "* = " << (b * b2).getTaeller() << "/" << (b * b2).getNaevner() << endl;
	cout << "/ = " << (b / b2).getTaeller() << "/" << (b / b2).getNaevner() << endl;

	cout << "+ = " << (b.adder(b2)).getTaeller() << "/" << (b + b2).getNaevner() << endl;
	cout << "- = " << (b.subtraher(b2)).getTaeller() << "/" << (b - b2).getNaevner() << endl;
	cout << "* = " << (b.multiplicer(b2)).getTaeller() << "/" << (b * b2).getNaevner() << endl;
	cout << "/ = " << (b.divider( b2)).getTaeller() << "/" << (b / b2).getNaevner() << endl;


}