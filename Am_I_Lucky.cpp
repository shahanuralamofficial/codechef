// Starting by the mercy of Almighty Allah.

#include <bits/stdc++.h>
using namespace std;

void result()
{
    int t;
    cin >> t;
    int n, x, k;
    int girls = 0;
    while (t--)
    {
        cin >> n >> x >> k;

        girls = (n - x);
        int girls_group = girls / k;
        int left_girls = girls - girls_group * k;

        int boys_group = x / k;
        int left_boys = x - boys_group * k;

        if (left_girls == left_boys)
        {
            cout << "0\n";
        }

        else if (left_girls > left_boys)
        {
            cout << left_girls - left_boys << "\n";
        }
        else if (left_girls < left_boys)
        {
            cout << left_boys - left_girls << "\n";
        }
    }
}

int main()
{

    result();
    return 0;
}
