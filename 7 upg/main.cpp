#include <iostream>

void uppgift1();
void uppgift2();
void uppgift3();


int main()
{
  int uppgift;
  std::cout<<"Vilken upgift vill du se?:";
  std::cin>>uppgift;
  switch(uppgift)
  {
    case 1:
      std::cout<< "visar uppgift 1\n";
      uppgift1();
      break;
    case 2:
      std::cout<< "visar uppgift 2\n";
      uppgift2();
      break;
    case 3:
      std::cout<< "visar uppgift 3\n";
      uppgift3();
      break;
  }
  return 0;
}
  void uppgift1(){
  std::string vag;

  std::cout << "Ska du aka rakt eller hoger:"<< std::endl;
  std::cin>>vag;
  if(vag=="rakt"){
    std::cout<<"du aker rakt!"<<'\n';
  }
  else if(vag=="hager"){
    std::cout<<"du aker hager!"<<'\n';
  }
  else{
    std::cout<<"ogiltigt svar!"<<'\n';
  }
}


void uppgift2(){
  int hemligtal=2;
  int svar;

  std::cout<<"Gissa mitt tal (mellan 1-3): ";
  std::cin>>svar;

  if (svar==hemligtal){
    std::cout<<"Du svara rätt på första försöket!";
  }
  else{
    std::cout<<"Fel svar giss en gång till: ";
    std::cin>>svar;
  }

  if(svar==hemligtal){
    std::cout<<"Du giss rätt på andra försöket!";
  }
  else{
    std::cout<<"Du lyckades inte klara det på två försök";
  }
}

void uppgift3(){

  int storre[2]={12,3};
  int mindre[2]={5,8};
  

  std::cout<<"kön\n";
  std::cout<<"Lön"<<"Man"<<"Kvinna\n";
  std::cout<<"Minst 20000kr"<<storre[0]<<storre[1]<<std::endl;
  std::cout<<"Mindre än 20000kr"<<mindre[0]<<mindre[1]<<std::endl;


}
