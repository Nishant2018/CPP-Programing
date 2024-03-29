#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    float root_1,root_2,imaginary;
    float discriminant;

    cout <<"Enter the value of a,b and c for quadratic equation aX^2 + bX + c:";
    
    cout <<"\nEnter the value of a:";
    cin >>a;

    cout <<"\nEnter the value of b:";
    cin >>b;

    cout <<"\nEnter the value of c:";
    cin >>c;

    discriminant=(b*b-4*a*c);

    switch(discriminant>0)
    {
        case 1:
        root_1=(-b+sqrt(discriminant))/(2*a);
        root_2=(-b-sqrt(discriminant))/(2*a);

        cout <<"Two distinct and real root exist\n";
        cout <<"First root is:"<<root_1;
        cout <<"Second root is:"<<root_2;

        case 0:
        switch(discriminant<0)
        {
            case 1:
            root_1=root_2=-b/(2*a);
            imaginary=sqrt(-discriminant)/(2*a);

            cout <<root<<endl;
            cout<<imaginary<<endl;
            break;

            case 2:
            root_1=root_2=-b/(2*a);
            
            cout <<root<<endl;
            break; 

        }
        
    }
}