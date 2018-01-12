#include <iostream>
using namespace std;

int main()
{
  int age;
  cout<< "Ålder? " << endl;
  cin >> age;
  
  
  if ((age<=65)&&(age>=15)){
    cout << "5kr"<<endl;
  }    
  
    else {
      cout << "10kr"<< endl;
    }
  
  
  
  
  return 0;
}

