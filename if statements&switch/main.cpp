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
    (executable)cout << "tal �r 1" << endl;
    break;
    (else)default:
      cout << "tal �r n�got annat" << endl;
  }
  */
  //7.4
  /*
   int transport;
   cout << "transport? skriv 1 f�r cykel, 2 f�r bil, 3 f�r buss och 4 f�r t�g"<< endl;
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
       cout << "t�g" << endl;
       break;
     default:
       cout << "ogiltigt svar"<< endl;
  }
  */
  //7.6
  int r�ttSvar = 2;
  int svar;
  cin >> svar;
  
  switch(svar)
  {
    case 2:
      cout << "r�tt svar, du klarade det p� ett f�rs�k"<< endl;
      break;
     
    case 1:
      cout << "fel svar, gissa en g�ng till"<< endl;
      break;
      
    case 3:
      cout << "du har svarat fel 3 g�nger i rad"<< endl;
      break;
  }
  
  return 0;
}
