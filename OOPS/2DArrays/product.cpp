#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
using namespace std;
int main(){
    long long int a, b, c, d, m;
    cin>>a>>b>>c>>d;
    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;
    m = (a*b*c*d)%100;
    if(m<10){
        cout<<0<<m<<endl;
    }else{
        cout<<m<<endl;
    }
return 0;
}
