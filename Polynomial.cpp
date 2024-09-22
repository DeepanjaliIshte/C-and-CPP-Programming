
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the degree of the polynomials: ";
    cin >> n;

    int poly1[n + 1], poly2[n + 1], result[n + 1];

    cout << "Enter coefficients of the first polynomial: ";
    for (int i = 0; i <= n; i++) {
        cin >> poly1[i];
    }
    cout << "Enter coefficients of the second polynomial: ";
    for (int i = 0; i <= n; i++) {
        cin >> poly2[i];
    }
    for (int i = 0; i <= n; i++) {
        result[i] = poly1[i] + poly2[i];
    }
    cout << "Sum of the polynomials is: ";
    for (int i = 0; i <= n; i++) {
        if (i == n) {
            cout << result[i] << "x^" << i; 
        } else {
            cout << result[i] << "x^" << i << " + ";
        }
    }

    return 0;
}

