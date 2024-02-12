#include <iostream>
#include <vector>
using namespace std;

double findSqrRootDecimal(double v, int p, int n) {
    // double factor = 1;
    // for(int i=1; i<=p; i++) {
    //     factor = factor/(i*10);
    //     double square;
    //     if
    // }
    double square;
    while(v*v <= n) {
        square = v*v;
        v+=0.1;
    }
    v = v+0.01;
    while(v*v <= n) {
        square = v*v;
        v+=0.01;
    }
    return v;
}

long long int findSqrRootInteger(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;
    long long int mid = start + (end-start)/2;
    while(start <= end) {
        long long int square = mid * mid;
        if(square == n) {
            return mid;
        }
        else if (square > n) {
            end = mid-1;
        }
        else {
            ans = mid;
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main() {
    int n = 15;
    int p =3;
    long long int v = findSqrRootInteger(n);
    double dec = findSqrRootDecimal(v, p, n);
    cout << dec << endl;
}