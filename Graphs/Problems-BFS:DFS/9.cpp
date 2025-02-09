#include<bits/stdc++.h>
using namespace std;

int ladderLength(string startWord, string endWord, vector<string>& words) {
    queue<pair<string,int>> q;
    unordered_set<string> st(words.begin(), words.end());
    q.push({startWord, 1});
    st.erase(startWord);
    while (!q.empty()){
        string word = q.front().first;
        int steps = q.front().second;
        q.pop();
        if (endWord == word) return steps;
        for (int i = 0; i < word.size(); i++){
            char original = word[i];
            for (char ch = 'a'; ch <= 'z'; ch++){
                word[i] = ch;
                if (st.find(word) != st.end()){
                    q.push({word, steps+1});
                    st.erase(word);
                }
            }
            word[i] = original;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string startWord, endWord;
    cin >> startWord >> endWord;
    vector<string> words(n);
    for (int i = 0; i < n; i++) cin >> words[i];

    cout << ladderLength(startWord, endWord, words);

}