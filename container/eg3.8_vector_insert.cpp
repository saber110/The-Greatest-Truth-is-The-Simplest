#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void OutToScreen(int & Ele)
{
    cout<<Ele<<",";
}
int main()
{
    vector <int> myvt;
    for(int i=0;i<10;i++)
        myvt.push_back(i);
    cout<<"***********在起始位置之前插入-1*********"<<endl;
    myvt.insert(myvt.begin(),-1);                           //在起始位置之前插入-1
    for_each(myvt.begin(),myvt.end(),OutToScreen);
    cout<<endl;
    cout<<"***********在向量末尾之前插入-2*********"<<endl;
    myvt.insert(myvt.end(),-2);                           //在向量末尾之前插入-2
    for_each(myvt.begin(),myvt.end(),OutToScreen);
    cout<<endl;

    vector <int> myvt2;
    myvt2.push_back(-8);
    myvt2.push_back(-9);

    cout<<"********在向量末尾之前插入多个数值********"<<endl;
    myvt.insert(myvt.end(),myvt2.begin(),myvt2.end());      //在向量末尾之前插入多个数值
    for_each(myvt.begin(),myvt.end(),OutToScreen);
    cout<<endl;

    cout<<"********在向量开头插入多个相同数值********"<<endl;
    myvt.insert(myvt.begin(),3,0);                          //在向量开头插入多个相同数值
    for_each(myvt.begin(),myvt.end(),OutToScreen);
    cout<<endl;

    cin.get();
    cout<<"bye"<<endl;

}