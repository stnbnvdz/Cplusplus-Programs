#include<iostream>
#include<cmath>
#include<cstdlib>
#include<cstring>

using namespace std;
int main()
{
    double a,b,c,x1,x2;
    char x;
    cout<<"Quadratic Equation Calculator\n"<<endl;
    cout<<"Enter the value of A= ";
    cin>>a;
     cout<<"Enter the value of B= ";
    cin>>b;
     cout<<"Enter the value of C= ";
    cin>>c;
     cout<<"\nThe quadratic equation is "<<a;
     cout<<"*x*x+"<<b;
     cout<<"*x+"<<c<<endl;
    if
        
                    (a==0 && b==0)
        cout<<"Not a valid equation";
          if
        
                    (a==0 && b!=0)
                    {
                          x1=-(c/b);
                          
                 
    cout<<endl;
    cout<<"root="<<x1;
    cout<<endl; 
}
     if ((b*b-4*a*c)>0)
    {
        x2=(b*b)-(4*a*c);
         x1=-b+sqrt(x2);
         cout<<"root="<<x1<<endl;
         }
     if ((b*b-4*a*c)<0)
     {
    cout<<"\nNot a real root\n"<<endl;
}
    system("pause");
    return 0;
}
