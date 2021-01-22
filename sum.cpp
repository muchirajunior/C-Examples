
#include <iostream>
using namespace std;

int main()
{
    float sum[2];
    float answer=0;
   
    for (int i=0;i<2;i++)
    {
         cout<<"enter  number :";
         cin>>sum[i];
        answer+=sum[i];
    }

    cout<<"\n answer is :"<<answer<<endl;
}
