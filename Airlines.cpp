// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int t;
    cin >> t;
    int x, n;
    int count = 0;

    while (t--)
    {
        cin >> x >> n;

        count = ceil((double(n) / 100)) - x;
        if (count < 0)
        {
            count = 0;
        }
        cout << count << "\n";
    }
}

int main()
{

    result();
    return 0;
}