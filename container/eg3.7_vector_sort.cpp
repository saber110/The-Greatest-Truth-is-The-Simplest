#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class student{
public:
    student(const string &a,double b):name(a),score(b){}
    string name;
    double score;
    bool operator < (const student & m) const
    {
        return score<m.score;
    } 
};
bool name_sort_less(const student& m,const student& n)
{
    return m.name<n.name;
}
bool name_sort_greater(const student& m,const student& n)
{
    return m.name>n.name;
}
void print(student & S)
{
    cout<<S.name<<"       "<<S.score<<endl;
}
bool score_sort(const student& m,const student& n)
{
    return m.score>n.score;
}
void original(vector <student> &v)
{
    student st1("TOM",74);
    v.push_back(st1);
    st1.name="Jimy";
    st1.score = 80;
    v.push_back(st1);
    st1.name="Marry";
    st1.score = 70;
    v.push_back(st1);
    st1.name="LiHua";
    st1.score = 65;
    v.push_back(st1);
    st1.name="LiMing";
    st1.score = 95;
    v.push_back(st1);
    st1.name="LiNing";
    st1.score = 72;
    v.push_back(st1);
    st1.name="Danny";
    st1.score = 47;
    v.push_back(st1);
    st1.name="Zhan";
    st1.score = 65;
    v.push_back(st1);
    st1.name="XiaoMing";
    st1.score = 82;
    v.push_back(st1);
}
int main()
{
    vector <student> vect;
    original(vect);
    cout<<"--------------Before Sorted------------------"<<endl;
    for_each(vect.begin(),vect.end(),print);
    
    cout<<"------------After Sorted by Score------------"<<endl;
    sort(vect.begin(),vect.end());
    for_each(vect.begin(),vect.end(),print);
    cout<<"------------After Sorted by Name-------------"<<endl;
    sort(vect.begin(),vect.end(),name_sort_less);
    for_each(vect.begin(),vect.end(),print);
    cout<<"------------After Sorted by Score-------------"<<endl;
    sort(vect.begin(),vect.end(),score_sort);
    for_each(vect.begin(),vect.end(),print);
    cout<<"------------After Sorted by Name-------------"<<endl;
    sort(vect.begin(),vect.end(),name_sort_greater);
    for_each(vect.begin(),vect.end(),print);
    cin.get();
    cout<<"bye"<<endl;
    return 1;
}