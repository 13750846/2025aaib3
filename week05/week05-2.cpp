/// week05-2.cpp
/// ∑d¿¥ stringstream
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main()
{
    string line;
    getline( cin, line );
    cout << line <<endl;

    stringstream ss(line);
    string word;
    while( ss >> word ){
        cout<< "ss≈™®Ï1≠”¶r: "<< word << endl;
    }
}
