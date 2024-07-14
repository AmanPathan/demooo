#include<iostream>
using namespace std;
class A{
    public:
    static int a;
    static void fun(){
        cout<<"Class A Method\n";
    }
    void run(){
        cout<<"Run";
    }

};
int A::a = 6;
int main(){
    cout<<A::a;
    A::fun();
    return 0;
}