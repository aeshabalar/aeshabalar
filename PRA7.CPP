#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

int m=5;
class student
{
public:
int r_no;
char name[20];
int age;
char br[20];
void getdata()
{
cout<<"enter roll no"<<endl;
cin>>r_no;
cout<<"enter name"<<endl;
cin>>name;
cout<<"enter age"<<endl;
cin>>age;
cout<<"enter branch"<<endl;
cin>>br;
}
void display()
{
    cout<<"roll no="<<r_no<<endl;
    cout<<"name="<<name<<endl;
    cout<<"age="<<age<<endl;
    cout<<"branch="<<br<<endl;
}

};
  int main()
{
  int i,n=5;
student s[10];
clrscr();

    cout<<"enter student data"<<endl;
for(i=0;i<n;i++)
{
s[i].getdata();
}
    cout<<"display student data"<<endl;
for(i=0;i<n;i++)
s[i].display();

return 0;
}

