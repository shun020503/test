#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[], int k, int n)
{
    int l = 0, r=n-1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if (a[mid]==k) return mid;
        if (a[mid]>k) r=r-1;
        if (a[mid]<k) l=l+1;
    }
    return -1;
}

int main()
{
    int n; cin >> n;
    int k; cin >> k;
    int a[100];
    for (int i=0; i<n; i++) cin >> a[i];
    if (binarysearch(a,k,n) == -1) cout << "Not found" << endl;
    else cout << "Found!" << endl;
    return 0;
}