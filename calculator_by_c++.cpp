#include<iostream>
using namespace std;

int main()
{
    char op;
    float num_1,num_2,result;

    cout <<"Enter the value of first number:";
    cin >>num_1;

    cout <<"Enter the value of second number:";
    cin >>num_2;

    cout <<"select any operation for calculation [+,-,*,/]=";
    cin >>op;

    switch(op)
    {
        case '+':
        result = num_1 + num_2;
        cout <<"Addition of num_1 and num_2 is :"<<result;
        break;

        case '-':
        result = num_1 - num_2;
        cout <<"Substraction of num_1 and num_2 is :"<<result;
        break;

        case '*':
        result = num_1 * num_2;
        cout <<"Multiplication aof num_1 and num_2 is :"<<result;
        break;

        case '/':
        result = num_1 / num_2;
        cout <<"Division of num_1 and num_1 is :"<<result;
        break;

        default:
        cout <<"You are in default case";

    }
}