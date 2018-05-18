#include <iostream>
#include <time.h> 
#include <cstdlib> 

int main() {


	char a, b, c;
	a = b = c = ' ';
	
	int random;
	int counter;
	int position = 0;
	srand(time(NULL));
	do{
		
		random = (rand() % 3);
		
		if(position-random==1||position-random==-3){
        continue;
		}
       

		if (random == 0) {
			a = '*';
		}
		else if (random == 1) {
			b = '*';
		}
		else {
			c = '*';
		}
		counter = random - 1;
		position += counter;
		

		std::cout << '|' << a << b << c << '|'<< std::endl;
		a = b = c = ' ';
		

	}while(position<2&&position>-2);


	return 0;
}