/// week07-1a.cpp
/// TAICA NYCU ��߶�����q�j�ǹq���t �����ҲĤ��D
/// Input:1-9���ƦrOutput:¶��骺���
/// ex.Input: 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 �`�@�����h��
/// Input 2 ��3�h�ӡAInput 3 ��5�h�ӡAInput 4 ��7�h�ӡAInput 5 ��9�h��
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=1; i<2*n; i++){
        for(int j=1; j<2*n; j++){
            if(j>1) cout << " ";
            cout << n;
        }
        cout << "�{�b�O��i�ӡAi:"<< i;
        cout << endl;
    }
}
