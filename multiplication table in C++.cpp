#include <iostream>

using namespace std;

int main ()
{
  
 cout<<"MULTIPLICATION TABLE:: \n \n";
 
 for (int a=1;a<=12;a++)
   { 
     for (int b=1; b<=12; b++)
	  {
	    int c=a*b;
		cout<<c<<"\t";
	 }
	 cout<<" \n";
	 }
	 
return 0;
}	 