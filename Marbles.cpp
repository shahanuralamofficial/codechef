// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int T;
    cin >> T;

    while (T--)
    {
        int A, B;
        cin >> A >> B;

        int minTransfer = 0;

        if (A % B != 0)
        {

            minTransfer = B - (A % B);
        }

        if (A < B)
        {
            swap(A, B);
            minTransfer = A - (A % B);
        }

        cout << minTransfer << endl;
    }
}

int main()
{
    result();
    return 0;
}