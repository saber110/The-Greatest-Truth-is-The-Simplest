#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector <string> myvt;
    myvt.reserve(4);                        //reserve的作用
    myvt.push_back("1. BeiJing");
    myvt.push_back("2. ChangSha");
    myvt.push_back("3. Nanjing");
    myvt.push_back("4. QingDao");
    myvt.push_back("5. ChengDu");
    cout<<"OK"<<endl;
    vector <string>::iterator it;           //迭代器
    for(it=myvt.begin();it!=myvt.end();it++)
    {
        cout<<* it<<endl;                   //输出it的内容
    }
    cout<<"vector: myvt,size is "<<myvt.size()<<endl;
    cout<<"vector: myvt,capacity is "<<myvt.capacity()<<endl;
    cout<<"vector: myvt,maxsize is "<<myvt.max_size()<<endl;
    
    cout<<endl<<"resize"<<endl;
    myvt.resize(10);
    cout<<"vector: myvt,size is "<<myvt.size()<<endl;
    cout<<"vector: myvt,capacity is "<<myvt.capacity()<<endl;
    cout<<"vector: myvt,maxsize is "<<myvt.max_size()<<endl;
    for(it=myvt.begin();it!=myvt.end();it++)
    {
        if(*it=="")
            cout<<"**************"<<endl;
        else
            cout<<* it<<endl;                   //输出it的内容
    }
    cin.get();
    return 1;
}