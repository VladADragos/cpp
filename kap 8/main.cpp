#include<iostream>
using namespace std;
int main()
{

  /*
  while (true)
  {
    cout << "sant1" << endl;
  }
  */

  /*
  do
  {
    cout << "sant1" << endl;
  } while (false);
  */

  /*

  cout << "med for sats" << endl;
  for (int n=0; n<10; n++)  // skapar int n tilldelar 0,  om n<10 skriv ut n++,n++ till n=10, slutar program
  {
    cout << "n=" << n << endl;
  }

  int o=0;
  while (o<10)
  {
    cout << "(while) n=" << 0 << endl;
    o++;
  }

  */
  
  /*
  for (int j=0; j<10; j++)
  {  
    for (int i=0; i<10; i++)
      {
	cout << i << ' '; 
      }
      cout << endl;
  }
  */
  
 
  int falt[2][2];
  falt[0][0]=19;
  cout << falt[0][0]<< endl;
  
  for (int j=0; j<10; j++)
  {  
    for (int i=0; i<10; i++)
      {
	falt[j][i]=j+i
      }
      cout << endl;
  }
 
  
  for (int j=0; j<10; j++)
  {  
    for (int i=0; i<10; i++)
      {
	cout<<falt[j][i]<<' ';
      }
      cout << endl;
  }
  
  
  return 0;


}
