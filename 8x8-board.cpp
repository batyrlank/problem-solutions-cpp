/*Известно, что на доске 8×8 можно расставить 8 ферзей так, чтобы они не били друг друга. Вам дана расстановка 8 ферзей на доске, 
определите, есть ли среди них пара бьющих друг друга.
Формат входных данных

Программа получает на вход восемь пар чисел, каждое число от 1 до 8 - координаты 8 ферзей.
Формат выходных данных
Если ферзи не бьют друг друга, выведите слово NO, иначе выведите YES.
Sample Input 1:
1 7
2 4
3 2
4 8
5 6
6 1
7 3
8 5
Sample Output 1:
NO
Sample Input 2:
1 8
2 7
3 6
4 5
5 4
6 3
7 2
8 1
Sample Output 2:
YES */



#include <bits/stdc++.h>
#define pb push_back
#define FAST ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define max3(a, b, c) max(c, max(a, b))
#define max4(a, b, c, d) max4(d, max(c, max(a, b)))

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi; // упрощение жизни, что бы вместо vector<int>, писать vi (пояснение к коду)
typedef vector<ll> vll; 
typedef vector<ld> vld;

int main()
{
    FAST
    ll x1, y1, x2, y2; string flag = "YES";
    vi v, g; 
    for(int i = 0; i < 8; i++){ 
        int x, y; cin>>x>>y;
        v.pb(x); g.pb(y); 
    }
    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 8; j++){
            if(v[i] == v[j] or g[i] == g[j] or abs(v[i] - v[j]) == abs(g[i] - g[j])){
                flag = "NO";
            }
        }
    }
    if(flag == "YES") cout<<"NO";
    else cout<<"YES";
}

