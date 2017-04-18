#include <iostream>
#include <bitset>
#include <string>
using namespace std;
int main()
{
    bitset <10> bs1(7);
    bitset <10> bs2(string("1000101011"));
    cout<<bs1<<endl;
    cout<<bs2<<endl;
    cin.get();
    return 1;
}