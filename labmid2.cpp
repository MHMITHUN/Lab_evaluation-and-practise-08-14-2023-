#include<iostream>
using namespace std;
class cse
{
    int id;
    public:
    int section;
    void value(int x);


    void setInfo()
    {
        cin>>id;
        cin>>section;
    }
    friend int display(cse ob);
};
void cse::value(int x)
{
    id=x;
}
int display(cse ob)
{
    cout<<"ID:"<<ob.id;
    cout<<"SECTION:"<<ob.section;
}
int main()
{
    cse ob[3];
    int i;
    for(i=0;i<3;i++)
    {
        ob[i].setInfo();
    }
     for(i=0;i<3;i++)
     {
         display(ob[i]);
     }
    return 0;
}
