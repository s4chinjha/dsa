#include <bits/stdc++.h>
using namespace std;


//koko earin banana

int findmax(vector<int> &v) {
    int maxi = INT_MIN;
    for (int x : v) {
        maxi = max(maxi, x);
    }
    return maxi;
}

long long caltotHours(vector<int> &v, int mid) {
    long long total = 0;
    for (int pile : v) {
        total += (pile + mid - 1LL) / mid; // ceil division without float
    }
    return total;
}

int minimumRateToEatBananas(vector<int> &v, int h) {
    int lo = 1, hi = findmax(v);
    while (lo <= hi) {
        int mid = lo + (hi - lo) / 2;
        long long hours = caltotHours(v, mid);

        if (hours <= h) {
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return lo;
}

int main() {
    int n, h;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cin >> h;

    cout << minimumRateToEatBananas(v, h);
    return 0;
}
