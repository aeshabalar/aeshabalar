#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class test
{
public:
static int x;
void main()
{
   cout<<x<<endl;
   cout<<setw(10);
}
};

int test::x=125;
int main()
{
test t;
float pi=3.148454654;
clrscr();
   cout<<setw(15);
   cout<<"hello world"<<endl;
   cout<<setprecision(5)<<pi;
getch();
return 0;
}

