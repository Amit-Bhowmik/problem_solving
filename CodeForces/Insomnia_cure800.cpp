<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damage = 0;

    for (int i = 1; i <= d; ++i) 
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damage++;
            
        }
    }
    cout << damage << endl;
    
    
    
    
    return 0;
=======
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damage = 0;

    for (int i = 1; i <= d; ++i) 
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damage++;
            
        }
    }
    cout << damage << endl;
    
    
    
    
    return 0;
>>>>>>> 743ed38 (cf)
}