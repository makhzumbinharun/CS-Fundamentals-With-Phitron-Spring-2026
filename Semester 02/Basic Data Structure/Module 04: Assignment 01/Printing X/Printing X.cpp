#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i < N; i++)  {
        if (i < mid)  {
            for (int j = 0; j < i; j++)
                cout << " ";

            cout << "\\";

            for (int j = 0; j < N - 2 * i - 2; j++)
                cout << " ";

            cout << "/";
        }
        else if (i == mid)  {
            for (int j = 0; j < mid; j++)
                cout << " ";

            cout << "X";
        }
        else   {
            for (int j = 0; j < N - i - 1; j++)
                cout << " ";

            cout << "/";

            for (int j = 0; j < 2 * i - N; j++)
                cout << " ";

            cout << "\\";
        }

        cout << endl;
    }

    return 0;
}
