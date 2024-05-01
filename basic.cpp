#include <bits/stdc++.h>
using namespace std;

// Shift + alt + F; -> Format the code

// Functions
void printName(string name)
{
    cout << "Hello, " << name << endl;
}

int sum(int num1=0, int num2=0)
{
    int num3 = num1 + num2;
    return num3;
}

int maxx(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    return num2;
}

// Pass by value
void doSomething(int a){
    cout<<a<<endl;
    a+=5;
    cout<<a<<endl;
    a+=10;
    cout<<a<<endl;
}

// Pass by reference
void saySomething(int &b){
    cout<<b<<endl;
    b+=5;
    cout<<b<<endl;
    b+=10;
    cout<<b<<endl;
}

// Arrays are always passed by reference
int sumOfArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main()
{
    /*
    // Input/Output
    int x, y;
    cin >> x >> y;

    cout << "Value of x: " << x << "\n";
    cout << "Value of y: " << y;
    */

    /*

    // Data Types

    // int, long, long long, float, double, char, bool

    // int -> -10^9 to 10^9
    // long -> -10^12 to 10^12
    // long long -> -10^18 to 10^18

    // int
    int a = 10;
    // long
    long b = 15;
    // long long
    long long c = 150000000000;
    // float
    float d = 15.15;
    // double
    double e = 30.30;
    // char
    char f = 'A';
    // bool
    bool g = true;

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << e << "\n";
    cout << f << "\n";
    cout << g << "\n";

    // string and getline
    // string s;
    // cin>>s;
    // cout<<s<<endl; // only print the first word

    string str;
    getline(cin, str);

    cout<<str; // print the whole line

    */

    /*
    // If-else
    int age;
    cin >> age;

    if (age < 18)
    {
        cout << "You are too young for a job." << endl;
    }
    else if (age >= 18 && age < 60)
    {
        cout << "You are eligible for a job." << endl;
    }
    else
    {
        cout << "You are eligible for retirement.";
    }

    */

    /*
    // Switch
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid day";
    }
    */

    /*
    // Arrays
    // 1D
    int arr[] = {1, 2, 3, 4, 5};
    arr[1] = 10;
    cout << arr << endl;
    cout << arr[1] << endl;

    // 2D
    int arr2[2][3] = {1, 2, 3, 4, 5, 6};
    arr2[1][3] = 20;

    cout << arr2[1][3] << endl;

    // Strings
    string str = "Hello";
    int len = str.size();

    cout<<str<<endl;
    cout << "First Letter: " << str[0] << endl;
    cout << "Length of string: " << str.length() << endl;
    cout << "Last letter: " << str[len - 1]<<endl;

    str[len-1] = 'p';
    cout<<str<<endl;

    */

    /*
    // for loop
    cout << "for loop" << endl;
    for (int i = 1; i <= 3; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << endl;
    }

    cout << "while loop" << endl;

    // while loop
    int i = 1;
    while (i <= 3)
    {
        cout << i << endl;
        i++;
    }

    cout << "do while loop" << endl;

    // do while loop
    int j = 1;
    do
    {
        cout << j << endl;
        j++;
    } while (j <= 3);

    */

    // Functions
    // void -> which does not returns anything
    // int -> which returns an integer
    // float -> which returns a float
    // double -> which returns a double
    // char -> which returns a char
    // string -> which returns a string

    // string name;
    // cin >> name;
    // printName(name);

    int num1, num2;
    cin>>num1>>num2;
    int res = sum(num1, num2);
    cout << res << endl;

    // User defined functions
    int num3 = maxx(num1, num2);
    cout << num3 << endl;

    cout<<"Inbuilt functions"<<endl;

    // Inbuilt functions
    int maximum = max(num1, num2);
    int minimum = min(num1, num2);
    cout<<maximum<<endl;
    cout<<minimum<<endl;

    cout<<"Pass by value"<<endl;
    int a = 10;
    doSomething(a);
    cout<<a<<endl;

    cout<<"Pass by reference"<<endl;
    int b = 10;
    saySomething(b);
    cout<<b<<endl;

    cout<<"Arrays are always passed by reference"<<endl;
    int arr[] = {1,2,3,4,5};
    int sum = sumOfArray(arr, 5);
    cout<<sum<<endl;

    return 0;
}