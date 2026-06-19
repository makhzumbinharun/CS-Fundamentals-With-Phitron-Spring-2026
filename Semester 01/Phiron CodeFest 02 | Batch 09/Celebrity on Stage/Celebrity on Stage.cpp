#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;

    int A[N];

    for (int i = 0; i < N; i++) cin >> A[i];

    int myHeight = A[K - 1];
    int X = 0, Y = 0;

    for (int i = 0; i < K - 1; i++){
        if (A[i] > myHeight)  X++;
    }

    for (int i = K; i < N; i++){
        if (A[i] < myHeight) Y++;
    }

    cout << X << " " << Y;

    return 0;
}
