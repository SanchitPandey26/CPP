#include<bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    if (k == num.size()) return "0";
    stack<char> st;
    for (char c: num){
        while(!st.empty() && k > 0 && st.top() > c){
            st.pop();
            k--;
        }
        st.push(c);
    }
    while(k > 0){
        st.pop();
        k--;
    }
    string ans = "";
    while (!st.empty()){
        ans += st.top();
        st.pop();
    }
    while (ans.size() > 1 && ans.back() == '0'){
        ans.pop_back();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    string num;
    cin>>num;
    int k;
    cin>>k;
    cout<<removeKdigits(num,k);
}