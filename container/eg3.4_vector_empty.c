#include <iostream>
#include <vector>
using namespace std;
struct ST{
    int id;
    int db;
};
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
    while(!myvt.empty())
    {
        tmp=myvt.back();                //末尾元素
        cout<<"id "<<tmp.id<<", db "<<tmp.db<<endl;
        myvt.pop_back();      
    }
    cin.get();
    return 1;
}