#include <iostream>

using namespace std;

int main() {
    int n;

    scanf("%d", &n);

    int count = 0;
    int a1 = 0, a2 = 0, a3 = 0;
    for (int i = 0; i < n * 2; i++) {
        scanf("%d", &a3);
        if (a1 == a3) count++;
        a1 = a2;
        a2 = a3;
    }

    printf("%d\n",count);
    
    return 0;
}