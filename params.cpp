#include <iostream>
using namespace std;

class User{
    public:
      User(string name="default",int age=10);

      void details();

    private:
        string name;
        int age;
};

User::User(string uname,int uage){
    name=uname;
    age=uage;
}

void User::details(){
    cout<<"user "<<name<<" is "<<age<<" years old "<<endl;
}

int main(){
    //default user
    User user;
    user.details();

    //another user
    User user2=User("muchirajunior",21);
    user2.details();

    return 0;
}
