#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stack<int> st;
    for (int i = 0; i < s.size(); i++){
        if (s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if (st.empty()){
                cout << "False" << endl;
                return 1;
            }
            char ch = st.top();
            st.pop();
            if ((s[i] == ')' && ch == '(') || (s[i] == '}' && ch == '{') || (s[i] == ']' && ch == '[')){
                continue;
            }
            else{
                cout << "False" << endl;
                return 1;
            }
        }
    }
    if (st.empty()) cout << "True" << endl;
    else cout << "False" << endl;
}