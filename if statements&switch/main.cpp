 #include <iostream>
 #include <string>
using namespace std;

int main()
{
  
  /*
   if( conditional )
   {
   executable
   }
   else "if conditional not met"
   {
   executable
   }
   
     switch(tal)
  {
    case(conditional) 1:
    (executable)cout << "tal är 1" << endl;
    break;
    (else)default:
      cout << "tal är något annat" << endl;
  }
  */
  //7.4
  /*
   int transport;
   cout << "transport? skriv 1 för cykel, 2 för bil, 3 för buss och 4 för tåg"<< endl;
   cin >> transport;
   switch(transport)
   {
     case 1:
       cout << "cykel" << endl;
       break;
     case 2:
       cout << "buss" << endl;
       break;
     case 3:
       cout << "bil" << endl;
       break;
     case 4:
       cout << "tåg" << endl;
       break;
     default:
       cout << "ogiltigt svar"<< endl;
  }
  */
  //7.6
  int rättSvar = 2;
  int svar;
  cin >> svar;
  
  switch(svar)
  {
    case 2:
      cout << "rätt svar, du klarade det på ett försök"<< endl;
      break;
     
    case 1:
      cout << "fel svar, gissa en gång till"<< endl;
      break;
      
    case 3:
      cout << "du har svarat fel 3 gånger i rad"<< endl;
      break;
  }
  
  return 0;
}
