#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int answer=0,i=0;
    while(n!=0){
        int bit=n&1;

        answer=(bit*pow(10,i))+answer;
          n=n>>1;
          i++;
    }
    cout<<answer;
    return 0;

}

