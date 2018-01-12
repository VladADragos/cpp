#include <iostream> 
using namespace std;
int main()
{
  
  //3.1
    /*
    float tal1;
    float tal2;
    float tal3;
    //int div = 3;
    cout << "Tal 1"<< endl;
    cin >> tal1;
    cout << "Tal 2"<< endl;
    cin >> tal2;
    cout << "Tal 3"<< endl;
    cin >> tal3;
    cout << "summa"<< endl << tal1+tal2+tal3 << endl;
    double medelvarde = (tal1 + tal2 + tal3)/3;
    cout << "medelvärde" << medelvarde << endl;
    */
  //3.2
  /*
  string tal1;
  string tal2;
  string tal3;
  string tal4;
   cout << "Tal 1"<< endl;
   cin >> tal1;
   cout << "Tal 2"<< endl;
   cin >> tal2;
   cout << "Tal 3"<< endl;
   cin >> tal3;
   cout << "Tal 4"<< endl;
   cin >> tal4;
   cout << tal1+tal2+tal3+tal4 << endl;
   
   cout << tal4+tal3+tal2+tal1 << endl;
   */
  //3.3
  string strang;
  cout << "Ord"<< endl;
  cin >> strang;
  
  int langd = strang.size();
  char hitta = strang.at(0);
  cout << langd <<'\n' << hitta <<  endl;
  

  
  
  return 0;
}

