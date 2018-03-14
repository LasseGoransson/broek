#include "Broek.h"
#include <stdlib.h> 
using namespace std;


Broek::Broek()
{
}

Broek::Broek(int aN, int aD)
{
	int gcd = getGcd(aN, aD);
	int sN = aN / gcd;
	int sD = aD / gcd;

	if (sN < 0 && sD < 0)
	{
		sN = abs(sN);
		sD = abs(sD);
	}

	if (sN > 0 && sD < 0)
	{
		sN = sN * -1;
		sD = sD * -1;
	}

	taeller = sN;
	naevner = sD;

}

int Broek::getTaeller()
{
	return taeller;
}

int Broek::getNaevner()
{
	return naevner;
}

Broek Broek::adder(Broek aF)
{
	
	int newN_1 = taeller * aF.getNaevner();
	int newN_2 = aF.getTaeller() * naevner;

	int newD = (naevner*aF.getNaevner());

	return Broek(newN_1+newN_2,newD);
}

Broek Broek::subtraher(Broek aF)
{
	int newN_1 = taeller * aF.getNaevner();
	int newN_2 = aF.getTaeller() * naevner;

	int newD = (naevner*aF.getNaevner());

	return Broek(newN_1 - newN_2, newD);
}

Broek Broek::multiplicer(Broek aF)
{
	return Broek(taeller*aF.getTaeller(),naevner*aF.getNaevner());
}

Broek Broek::divider(Broek aF)
{
	return Broek(taeller*aF.getNaevner(), naevner*aF.getTaeller());
}

Broek Broek::operator+(Broek b)
{
	return Broek(adder(b));
}

Broek Broek::operator-(Broek b)
{
	return Broek(subtraher(b));
}

Broek Broek::operator*(Broek b)
{
	return Broek(multiplicer(b));
}

Broek Broek::operator/(Broek b)
{
	return Broek(divider(b));
}

	
Broek::~Broek()
{
}

int Broek::getGcd(int aN, int aD)
{
	int gcd = 0;
	aN = abs(aN);
	aD = abs(aD);

	for (int i = 1; i <= aN && i <= aD; i++)
	{
		if (aN % i == 0 && aD % i == 0)
		{
			gcd = i;
		}
	}

	return gcd;



}
