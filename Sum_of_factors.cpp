#include <iostream>
#include <cmath>
using namespace std;

int sumOfFactors(int num) {
    int sum = 1;
    
    for (int i = 2; i * i <= num; i++) {
        int currentSum = 1, term = 1;

        while (num % i == 0) {
            num /= i;
            term *= i;
            currentSum += term;
        }

        sum *= currentSum;
    }

    if (num > 1) sum *= (1 + num);

    return sum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = sumOfFactors(num);
    cout << "Sum of factors of " << num << " is: " << result << endl;

    return 0;
}
