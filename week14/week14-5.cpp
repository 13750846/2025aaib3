/// week14-5.cpp
/// ¬Q¤Ñ CPE ²Ä1ÃD UVA 10079
/// Pizza Cutting ¤Á Pizza
#include<iostream>
using namespace std;
int main()
{
    int N;
    while(cin>>N){
        if(N<0)break;
        int ans = 1+(1+N)*N/2;
        cout<<ans<<"\n";
    }
}
