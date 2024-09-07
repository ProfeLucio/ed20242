#include <iostream>
using namespace std;

int main(){
    unsigned int a= 4294967295;
    int b=2147483647;
    char x='a';
    cout<<a<<" "<<b<<" "<<x<<endl;
    cout<<sizeof(a)<<" "<<sizeof(b)<<" "<<sizeof(x)<<endl;
}