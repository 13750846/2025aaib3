/// week05-3b.cpp
/// Part3: stringstream 斷字 Part 4:反過來 algorithm
/// CPE這次的第2題 UVA 483 Word Scramble把字弄反
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string line;
    while( getline(cin, line) ){
        stringstream ss(line);
        string word;
        while( ss >> word ){
            reverse( word.begin(),word.end() );
            cout << " " << word;
        }
        cout << endl;
    }
}
