#include <bits/stdc++.h>
using namespace std;

// Count number of digits -> T.C -> O(log base 10(n))
// Note: if in the program we are dividing the number by 10 or something then the complexity of the code is always Logarithmic
int count(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        cnt = cnt + 1;
        n = n / 10; // if the division is by 10 then the Time complexity is O(log base 10)
                    // if the division is by 5 then the Time complexity is O(log base 5)
                    // if the division is by 2 then the Time complexity is O(log base 2)
    }

    return cnt;
}

// Or count number of digits
int count1(int n)
{
    int cnt = (int)(log10(n) + 1);
    return cnt;
}

// Reverse of the number
int reverse(int n)
{
    int rev = 0;
    int duplicate = n; // we make it a duplicate because we want to use the original number in the future
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }
    return rev;
}

// Palindrome number
bool palindrome(int n)
{
    int rev = 0;
    int duplicate = n; // we make it a duplicate because we want to use the original number in the future
    while (n > 0)
    {
        int lastDigit = n % 10;
        rev = (rev * 10) + lastDigit;
        n = n / 10;
    }
    if (rev == duplicate)
        return true;
    return false;
}

// Armstrong number -> Number = 371 -> 3^3 + 7^3 + 1^3 = 371 -> if number and answer is same then it is armstrong number
bool isArmstrong(int n)
{
    int sum = 0;
    int duplicate = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, 3);
        n = n / 10;
    }
    if (sum == n)
        return true;
    return false;
}

// Print all divisors
void printDivisors(int n)
{
    for (int i = 1; i <= n; i++) // T.C -> O(n)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}

// Print all divisors -> Optimized
void printDivisors1(int n)
{

    vector<int> ls;
    // 6 * 6 <= 36 true
    // 7 * 7 <= 36 false, loop ends
    for (int i = 1; i * i <= n; i++) // T.C -> O(sqrt(n))
    {
        if (n % i == 0)
        {
            ls.push_back(i);
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // sort -> O(nlogn) where n is not the number it is number of factors we get
    sort(ls.begin(), ls.end());
    // O(number of factors)
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    // the overall time complexity is dominated by the sorting operation, which is O(n log n). However, since n here is the number of factors (which is generally much less than the input number), we say the time complexity is O(sqrt(n) log n).
}

// Prime number
// A number which exactly has two factors -> 1 and the number itself

bool isPrime(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) // O(sqrt(n))
    {
        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
                cnt++;
        }
    }
    if (cnt == 2)
        return true;
    return false;
}

// GCD/HCF -> Greatest Common Divisor/Highest Common Factor
// GCD(20, 15) => 5 -> 1, 5
int gcd(int n, int b = 15)
{
    int gcd = 1;
    for (int i = 1; i <= min(n, b); i++) // O(min(n, b))
    {
        // if both the numbers are divisible by i then we update the gcd
        if (n % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}

// Eculedean Algorithm -> Optimized for GCD/HCF
// gcd(n1, n2) = gcd(n1-n2, n2) -> if n1 > n2 // gcd(20,15) -> gcd(5,15) -> gcd(5,10) -> gcd(5,5) -> gcd(0,5) -> if one become 0 then the other is the gcd // 5

// gcd(n1, n2) = gcd(n1, n2-n1) -> if n2 > n1 // gcd(15,5) -> gcd(10,5) -> gcd(5,5) -> gcd(0,5) -> if one become 0 then the other is the gcd

// gcd(a,b) = gcd(a-b, b) -> if a > b
// gcd(a,b) = gcd(a, b-a) -> if b > a

// Optimized Eculedean Algorithm
// gcd(n1,n2) = gcd(n1%n2, n2) -> if n1 > n2 // gcd(52,10) -> gcd(2,10) -> gcd(2,2) -> gcd(0,2) -> 2

// gcd(a,b) => gcd(greater % smaller, smaller) -> if a > b


// O(log base phi min(a,b)) -> where phi is the golden ratio -> 1.618
int gcd1(int a, int b = 15)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    return a;
}

int main()
{
    int n;
    cin >> n;
    cout << count1(n) << endl;
    cout << reverse(n) << endl;
    cout << palindrome(n) << endl;
    cout << isArmstrong(n) << endl;
    printDivisors1(n);
    cout << isPrime(n) << endl;
    cout << gcd(n) << endl;
    cout << gcd1(n) << endl;
    return 0;
}
