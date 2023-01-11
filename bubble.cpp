#include<iostream>
using namespace std;
class college
{
    protected:
    int col_code;
    public:
    void getcollege()
    {
        cout<<"ENTRE THE COLLEGE CODE "<<endl;
        cin>>col_code;
    }
};
class studnet:public college
{
    protected:
    int rol;
    string name;
    public:
    void getstudnet()
    {
        cout<<"ENTER THE DETAILS OF THE STUDNET "<<endl;
        cout<<"ENTER NAME  : ";cin>>name;
        cout<<"ENTER ROLL  : ";cin>>rol;
    }
};
class grade:public studnet
{
    private:
    int grade;
    public:
    void getgrade()
    {
        cout<<"ENTER YOUR GRADE "<<endl;
        cin>>grade;
    }
    void display()
    {
        cout<<"DETAILS OF STUDNET "<<endl;
        cout<<"NAME   : "<<name<<endl;
        cout<<"ROL NO : "<<rol<<endl;
        cout<<"GRADE  : "<<grade<<endl;
    }
};
int main()
{
    grade obj,*p;
    p=&obj;
    p->getcollege();
    p->getstudnet();
    p->getgrade();
    p->display();
}