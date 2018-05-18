const float neutronVikt = 1.00866491600;
const float protonVikt = 1.007276466879;
const float elektronVikt = 0.000549;
const float elektronVoltPerU = 931.5;

struct isotop{
	float vikt;
	int nukleoner;
	int neutroner;
	int protoner = nukleoner - neutroner;
};

isotop uranium234;
