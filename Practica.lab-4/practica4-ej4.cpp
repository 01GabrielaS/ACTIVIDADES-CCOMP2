#include<iostream>
using namespace std;

bool esPalindrome(int num) {
    int original = num;
    int inverso = 0;

    while (num > 0) {
        int y = num % 10;
        inverso = inverso * 10 + y;
        num /= 10;
    }

    if(original == inverso){
        return true;
    }
    return false;
}

int main() {
    int mayorPalindrome = 0;
    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            int mult=i*j;
            if (esPalindrome(mult)&& ((mult) > mayorPalindrome)) {
                mayorPalindrome = mult;
            }
        }
    }

    cout << "El mayor número palindrome producto de dos números de 3 cifras es: " << mayorPalindrome << endl;

    return 0;
}