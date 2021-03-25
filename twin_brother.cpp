#include <iostream>
#include<algorithm>


using namespace std;


int main()
{
    int n, l=0, Sum=0, s=0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    for(int i=0; i<n; i++){
            Sum += a[i];
    }
    for(int i=0; i<n; i++){
        if (s <= Sum/2){
            s += a[i];
            l += 1;
        }
    }
    cout << l;
    return 0;
}