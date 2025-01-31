#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--){
	    string a;
	    cin >> a;
	    string b = "ADVITIYA";
	    int ans = 0;
	    for (int i = 0; i < a.size(); i++){
            if (a[i] != b[i]){
	            if (a[i] < b[i]) ans += (b[i] - a[i]);
                else ans += 26 - (a[i] - b[i]);
            }
	    }
	    cout << ans << endl;
	}

}
