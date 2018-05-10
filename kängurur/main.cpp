#include <iostream>

int main(){
int startBarnVikt;
int maxVikt;

// barnVikt[2]=barnVikt[0]+barnVikt[1];
// 0.10 1.10 2.20 3.30 4.50 5.70 6.130

std::cout<<"Skriv startvikten pa de 2 fortsa barnen: ";
std::cin>>startBarnVikt;
std::cout<<"Skriv maxvikten: ";
std::cin>>maxVikt;

int vikt = startBarnVikt*2;
int i = 2;
int barnVikt[200] = {startBarnVikt,startBarnVikt};

while(vikt<=maxVikt){
    barnVikt[i]=barnVikt[i-2]+barnVikt[i-1];
    vikt+=barnVikt[i];
    i++;
}

std::cout<<"Hon kan bara totalt "<<i-1<<" barn som totalt vager "<<(vikt-barnVikt[i-1])<<" gram.\n";
    return 0;
}

