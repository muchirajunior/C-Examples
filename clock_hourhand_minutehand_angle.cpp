#include <iostream>
using namespace std;

int angle(int time, int x)
{
    int c[2];
    if (x==0){
        return (360/12)*time;
    }
    else
    {
        return (360/60)*time;
    } 
}

int main(int argc, char *argv[])
{
    int hour,min;
    cout<<"enter hour :";
    cin>>hour;
    cout<<"enter minutes :";
    cin>>min;

    if (hour>12 || hour<0){
        hour=0;
        cout<<"invalid hour !!!!!!"<<endl;
        return 0;
    }
    if (min>60 || min<0){
          cout<<"invalid minute !!!!!!"<<endl;
        return 0;
    }
    else if(hour>6){
        hour=hour-6;
    }
    else
    {
        hour=hour+6;
    }
    
    hour=angle(hour,0);
    min=angle(min,1);
    if (hour>min){
       cout<<"\n angle is :"<<hour-min<<endl;
    }
    else 
       cout<<"\n angle is :"<<min-hour<<endl;

    return 0;

}