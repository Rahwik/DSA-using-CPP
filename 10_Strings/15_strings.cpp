//Lexicographic rabk of a string
#include <iostream>
#include <string>

using namespace std;

int fact(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++)
        res *= i;
    return res;
}

const int CHAR = 256;
int lexRank(string &str) {
    int res = 1;
    int n = str.length();
    int mul = fact(n);
    int count[CHAR] = {0};
    for (int i = 0; i < n; i++) {
        count[str[i]]++;
    }
    for (int i = 0; i < CHAR; i++) {
        count[i] += count[i - 1];
    }
    for (int i = 0; i < n - 1; i++) {
        mul = mul / (n - 1);
        res = res + count[str[i] - 1] * mul;
        for (int j = str[i]; j < CHAR; j++) {
            count[j]--;
        }
    }
    return res;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    int rank = lexRank(str);
    cout << "Lexicographic rank of the string is: " << rank << endl;
    return 0;
}