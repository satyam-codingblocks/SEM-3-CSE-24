#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    float b = 11.8;
    // char c = 'A';
    // cout<<typeid(a).name();
    //  cout<<typeid(b).name();
    //   cout<<typeid(c).name();


//implicit
    // float a1 = a;
    // int b1 = b;
    // cout<<a1;
    // cout<<b1;

    ///explicit

    float a1 =(float) a;
    int b1 = (int)b;
    cout<<a1;
    cout<<b1;


}