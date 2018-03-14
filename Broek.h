#pragma once
class Broek
{
public:
	Broek();

	Broek(int aN, int aD);
	int getTaeller();
	int getNaevner();
	Broek adder(Broek aF);
	Broek subtraher(Broek aF);
	Broek multiplicer(Broek aF);
	Broek divider(Broek aF);

	Broek operator+(Broek b);
	Broek operator-(Broek b);

	Broek operator*(Broek b);
	Broek operator/(Broek b);




	~Broek();

private:
	int taeller;
	int naevner;
	int getGcd(int aN, int aD);

};

