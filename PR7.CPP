#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
int m=5;

class student
{
public:
student()
{
c++;
}
int r_no;
char name[20];
int age;
char br[20];
static int c;
void static count()
{
     cout<<"total instances are:"<<c<<endl;
}
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
int student::c=0;
int main()
{
int c;
char yn;
clrscr();
do
{
     cout<<"press 1 for creating a new object.\n press 2 to display no no of object.\n"<<endl;
     cout<<"enter your choice";
     cin>>c;

switch(c)
{
case 1:
student s;

     cout<<"enter student data"<<endl;
	   s.getdata();
     cout<<"display student data"<<endl;
	   s.display();

break;
case 2:
student::count();
break;
}
     cout<<"do you wish to continue?";
     cin>>yn;
}

while(yn=='y'|| yn=='y');

return 0;
}