#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout << ' ';
        }
        for (char j = 'A'; j <= 'A'+i; j++){
            cout << j;
        }
        for (char j = 'A'+i-1; j >= 'A'; j--){
            cout << j;
        }
        cout << endl;
    }
}

