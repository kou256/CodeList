#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

    scanf("%d", &n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s == "Takahashi") count++;
    }

    printf("%d\n", count);

    return 0;
}