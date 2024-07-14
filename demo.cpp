#include<iostream>
using namespace std;
class A{
    public:
    static int a;
};
int A::a = 6;
int main(){
    cout<<A::a;
    A::fun();
    return 0;
}