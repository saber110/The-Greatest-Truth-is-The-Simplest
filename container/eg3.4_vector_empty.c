#include <iostream>
#include <vector>
using namespace std;
struct ST{
    int id;
    int db;
};
void iter_for(vector <ST>& vt)
{
    cout<<"iter usage"<<endl;
    ST temp;
    vector <ST>::iterator iter;
    for(iter=vt.begin();iter!=vt.end();iter++)
    {
        temp = *iter;
        cout<<"id: "<<temp.id<<", db: "<<temp.db<<endl;
    }
}
void at_for(vector <ST> &vt)
{
    cout<<"at usage"<<endl;
    ST temp;
    for(int i=0;i<vt.size();i++)
    {
        temp =vt.at(i);
        cout<<"id: "<<temp.id<<", db: "<<temp.db<<endl;
    }
}
void origin(int num,vector <ST>& vt)
{
    int m=num;
    ST temp;
    for(int i=0;i<m;i++)
    {
        temp.id=i+1;
        temp.db=(i+1)*10;
        vt.push_back(temp);
    }
}
int main()
{
    ST tmp;
    vector <ST> myvt;
    origin(5,myvt);
    cout<<"size: "<<myvt.size()<<endl;

    iter_for(myvt);

    at_for(myvt);

    cout<<"empty usage"<<endl;              //empty会清空容器
    while(!myvt.empty())
    {
        tmp=myvt.back();                //末尾元素
        cout<<"id "<<tmp.id<<", db "<<tmp.db<<endl;
        myvt.pop_back();      
    }
    cout<<endl;
    
    cin.get();
    cout<<"bye"<<endl;
    return 1;
}