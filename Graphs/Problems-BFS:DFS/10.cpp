#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> findLadders(string startWord, string endWord, vector<string>& words) {
    unordered_set<string> st(words.begin(), words.end());
    queue<vector<string>> q;
    q.push({startWord});
    vector<string> usedOnLevel;
    usedOnLevel.push_back(startWord);
    int level = 0;
    vector<vector<string>> ans;
    while (!q.empty()){
        vector<string> vec = q.front();
        q.pop();

        if (vec.size() > level){
            level++;
            for (auto it : usedOnLevel) st.erase(it);
            usedOnLevel.clear();
        }

        string word = vec.back();
        if (word == endWord){
            if (ans.size() == 0) ans.push_back(vec);
            else if (ans[0].size() == vec.size()) ans.push_back(vec);
        }

        for (int i = 0; i < word.size(); i++){
            char original = word[i];
            for (char ch = 'a'; ch <= 'z'; ch++){
                word[i] = ch;
                if (st.find(word) != st.end()){
                    vec.push_back(word);
                    q.push(vec);
                    usedOnLevel.push_back(word);
                    vec.pop_back();
                }
            }
            word[i] = original;
        }
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cin.ignore();
    string startWord, endWord;
    cin >> startWord >> endWord;
    vector<string> words(n);
    for (int i = 0; i < n; i++) cin >> words[i];

    vector<vector<string>> ans = findLadders(startWord, endWord, words);

}