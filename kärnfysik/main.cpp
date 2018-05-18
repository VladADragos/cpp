
#include <iostream>
#include "data.h"
void betaStralning();

int main() {

	betaStralning();
	return 0;
}


void betaStralning() {
	char stralningPolaritet;

	std::cout << "Är det en neutron eller proton som sönderfaller?(n/p) ";
	std::cin >> stralningPolaritet;


	if (stralningPolaritet == 'n') {
		float viktDefekt = neutronVikt - (protonVikt + elektronVikt);
		std::cout << viktDefekt * elektronVoltPerU << "MeV" << std::endl;

	}
	else if (stralningPolaritet == 'p') {
		float viktDefekt = protonVikt - (neutronVikt + elektronVikt);
		std::cout << viktDefekt * elektronVoltPerU << "MeV" << std::endl;

	}else{
		std::cout << "Error\n";
	}



}