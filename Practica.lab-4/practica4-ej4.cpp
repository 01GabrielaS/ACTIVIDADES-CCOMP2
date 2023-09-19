#include<iostream>
using namespace std;

bool esPalindrome(int num) {
    int original = num;
    int inverso = 0;

    while (num > 0) {
        int digit = num % 10;
        inverso = inverso * 10 + digit;
        num /= 10;
    }

    if(original == inverso){
        return true;
    }
    return false;
}

int main() {
    int mayorPalindrome = 0;
    int i=100;
    int j=100;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int product = i * j;
            if (esPalindrome(product) && product > mayorPalindrome) {
                mayorPalindrome = product;
            }
        }
    }


    cout << "The largest palindrome made from the product of two 3-digit numbers is: " << mayorPalindrome << endl;

    return 0;
}
