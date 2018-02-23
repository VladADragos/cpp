#include <iostream>
#include <cmath>
#include <cstdlib>
int main(){
  /*
  for(int i=3;i<=10;i++){
    std::cout<<i<<std::endl;
  }
  */
  /*
  int i=3;
  while(i<=10){
    std::cout<<i<<std::endl;
    i++;
  }
  */
  /*
  int i=3;
  do{
    std::cout<<i<<std::endl;
    i++;
  }
  while(i<=10);
  */
  /*
  int falt[5]={1,2,3,4,5};
  for(int i=4;i>=0;i--){
    std::cout<<falt[i];
    */
    /*
    int antal;
    std::cout<<"hur många *?:";
    std::cin>>antal;
    for(int i=0;i<antal;i++){
      std::cout<<"*";
    }
    */
    /*
    int antalR;
    int antalK;

    std::cout<<"hur många rader?:";
    std::cin>>antalR;
    std::cout<<"hur många kolumner?:";
    std::cin>>antalK;


    for(int i=0;i<antalK;i++){
      std::cout<<"\n";
      for(int i=0;i<antalR;i++){
        std::cout<<"*";

      }
    }
    */
    int input;
    bool fortsatt=true;
    int passagerare;
    do{
      std::cout<<"Meny\n";
      std::cout<<"1. Nollställ\n";
      std::cout<<"2. passagerare++\n";
      std::cout<<"3. passagerare--\n";
      std::cout<<"4. Skriv ut\n";
      std::cout<<"5. vill du sluta?\n";

      std::cin>>input;

      switch (input)
      {
      case 1:
        passagerare=0;
      break;
      case 2:
        passagerare++;
      break;
      case 3:
        passagerare--;
      break;
      case 4:
        std::cout<<"antal passagerare: "<<passagerare<<std::endl;
      break;
      case 5:
        fortsatt=false;
      break;
    }
  }
   while(fortsatt);





  return 0;
}
