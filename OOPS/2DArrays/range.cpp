#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string>
#include<map>
using namespace std;
int main(){
	long long int t;
	cin>>t;
	while (t--){
 	long long int ll, rr;
 	cin>>ll>>rr;
	long long int r = max(ll, rr);
 	long long int l = min(rr, ll);
 	l--;
 	long long int ans = r*(r+1)/2;
 	long long int ans2 = l*(l+1)/2;
 	ans = ans - ans2 ;
 	cout <<ans<<endl;
	}
	return 0;
}
