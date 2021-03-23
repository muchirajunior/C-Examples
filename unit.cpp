
#include <iostream>

using namespace std;

int main ()
{



cout<<"WELCOME TO KARU WEBSITE WHERE YOU REGISTER YOUR UNITS: \n \n";

int P;
cout<<"please enter your pasword to proceed:\n";
cin>>P;
switch (P)
{
	case 10108: cout<<"pasword correct continue: \n";
	
	
 cout<<" Here are the units to register and their codes. \n \n";
  
  cout<<" UNIT \t   CODE \n MAT110 \t 2002 \n MAT127 \t 2003 \n UCC102 \t 1004 \n UCC113 \t 1006 \n PHY124 \t 4007 \n COM122 \t 1108 \n ";
  cout<<"after entering the first code of your first unit press enter proceed to the  next code and do so for all the next codes.\n";
  cout<<"after entering the first code of your first unit press enter proceed to the  next code and do so for all the next codes.\n";
  cout<<"note that you can only enter the codes following the order they appear on your screen : \n";
  
  int A,B,C,D,E,F; 
  cin>>A;
  cin>>B;
  cin>>C;
  cin>>D;
  cin>>E;
  cin>>F;
  
  printf("you have regestered for the following units: \n");
  
switch (A)
{
	case 2002: cout<<"MAT110 \n";
    break;
}

switch (B)
{
	case 2003: cout<<"MAT127 \n";
	break;
}

switch (C)
{
	case 1004: cout<<"UCC102 \n";
   break;
}

switch (D)
{
	case 1006: cout<<"UCC113 \n";
	break;
}

switch (E)
{
	case 4007: cout<<"PHY124 \n";
	break;
}

switch (F)
{
	case 1108: cout<<"COM122 \n";
	break;
}


cout<<"you have succesfully registered for the obove units. THANK YOU \n";
break;

default : cout<<"incorect pasword! ACCESS DENIED!!!! \n try again \n";

}

return 0;
}
