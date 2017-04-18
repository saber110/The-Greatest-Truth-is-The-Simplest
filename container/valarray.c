#include <iostream>
#include <valarray>
using namespace std;
template <typename T> void printValarray (const valarray <T>& va)
{
    for(int i=0;i<va.size();i++)
    {
        cout<<va[i]<<" ";
    }
    cout<<endl;
}
/**
* 对数据做对应的改变
*/
int main()
{
    valarray <int> value1(4);
    printValarray(value1);
    valarray <int> value2(3,4);
    printValarray(value2);
    int ia[]={1,2,3,4,5};
    valarray <int> value3(ia,sizeof(ia)/sizeof(ia[0]));
    printValarray(value3);
    valarray <int> value4(ia+1,4);
    printValarray(value4);
    value1 = (value2+value4)*value4;
    printValarray(value1);

    valarray <float> value5(2.5,4);
    printValarray(value5);
    cin.get();
    return 1;
}