#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
void print(const int & temp)
{
    cout<<temp<<endl;
}
int main()
{
    const int ARRAY_SIZE = 8;
    int IntArray[ARRAY_SIZE] ={1,2,3,4,5,6,7};
    vector <int> myvt;
    vector <int>::iterator location_index;
    //int* location_index=NULL;                     //p94定义错误
    for(int i=0;i<ARRAY_SIZE;i++)
    {
        myvt.push_back(IntArray[i]);
    }
    for_each(myvt.begin(),myvt.end(),print);
    location_index = find(myvt.begin(),myvt.end(),2);
    cout<<"数字2的下标是: "<<(location_index-myvt.begin())<<endl;
    location_index = find_if(myvt.begin(),myvt.end(),bind2nd(greater <int>(),5));
    cout<<"第一个大于5的数字的下标是: "<<(location_index-myvt.begin())<<endl;
    cin.get();
    cout<<"bye"<<endl;
    return 1;
}