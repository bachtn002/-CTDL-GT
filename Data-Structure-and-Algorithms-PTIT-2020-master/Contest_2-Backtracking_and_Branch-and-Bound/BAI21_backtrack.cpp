#include <bits/stdc++.h>
using namespace std;
int n, A[20], B[20] = {0};
string str;

void in() {
    for (int i = 1; i <= n; i++) {
        cout << str[A[i] - 1];
    }
    cout << " ";
}

void Try(int i) {
    int j;
    for (j = 1; j <= n; j++) {
        if (!B[j]) {
            A[i] = j;
            B[j] = 1;
            if (i == n)
                in();
            else Try(i+1);
            B[j] = 0;
        }
    }
}

int main() {
    int t, i;
    cin >> t;
    while (t--) {
        cin >> str;
        n = str.length();
        for (i = 0; i <= n; i++)
            B[i] = 0;
        Try(1);
        cout << endl;
    }
    return 0;
}