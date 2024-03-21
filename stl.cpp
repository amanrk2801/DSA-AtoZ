#include <bits/stdc++.h>
using namespace std;

// Pairs
void explainPair()
{
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 3}, {3, 4}};
    cout << arr[1].second << endl;
}

void explainVector()
{

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(2, 3);

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin();

    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    // vector<int>::iterator it = v.rend();
    // vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);

    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for (auto it : v)
    {
        cout << it << " ";
    }

    // {10, 20, 12, 23}
    v.erase(v.begin() + 1);

    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10, 20, 35} [start, end]

    // Insert function
    vector<int> v(2, 100);          // {100, 100}
    v.insert(v.begin(), 200);       // {200, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {200, 10, 10, 100, 100}

    vector<int> copy(2, 100);                      // {100,100}
    v.insert(v.begin(), copy.begin(), copy.end()); // {100, 100, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size(); // 2

    // {10, 20}
    v.pop_back(); // {10}

    // v1 -> {10, 20}
    // v2 -> {30, 40}
    v1.swap(v2); // v1 -> {30, 40} v2 -> {10, 20}

    v.clear(); // erase the entire vector
    cout << v.empty();
}

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4} // use ls.push_front() instead of v.insert in vector because it is O(1) in list and in vector it is O(n). In list it implement double linked list and in vector it implement singly linked list.

    ls.emplace_front(5); // {5,5,2,4}

    // rest functions are same as vectors
    // begin, end, rbegin, rend, clear, erase, insert, size, remove, reverse, sort, unique
}

void explainDeque()
{
    deque<int> dq;

    dq.push_back(1);    // {1}
    dq.emplace_back(2); // {1,2}

    dq.push_front(3);    // {3,1,2}
    dq.emplace_front(4); // {4,3,1,2}

    dq.pop_back();  // {4,3,1}
    dq.pop_front(); // {3,1}

    dq.front(); // 3
    dq.back();  // 1

    dq.size();  // 2
    dq.empty(); // false

    dq.clear(); // erase the entire deque

    // rest function are same as vector
    // begin, end, rbegin, rend, clear, erase, insert, size, remove, reverse, sort, unique
}

void explainStack()
{
    stack<int> st;

    st.push(1);    // {1}
    st.push(2);    // {1,2}
    st.push(3);    // {1,2,3}
    st.emplace(4); // {1,2,3,4}

    st.top(); // 4
    st.pop(); // {1,2,3}

    st.size();  // 3
    st.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2); // swap the elements of st1 and st2
}

void explainQueue()
{
    queue<int> q;

    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.push(3);    // {1,2,3}
    q.emplace(4); // {1,2,3,4}

    q.front(); // 1
    q.back();  // 4
    q.pop();   // {2,3,4}

    q.size();  // 3
    q.empty(); // false

    queue<int> q1, q2;
    q1.swap(q2); // swap the elements of q1 and q2

    // size swap empty same as stack
}

void explainPriorityQueue()
{
    // Max Heap
    priority_queue<int> pq;

    pq.push(1);    // {1}
    pq.push(2);    // {2,1}
    pq.push(3);    // {3,2,1}
    pq.emplace(4); // {4,3,2,1}

    pq.top(); // 4
    pq.pop(); // {3,2,1}

    pq.size();  // 3
    pq.empty(); // false

    priority_queue<int> pq1, pq2;
    pq1.swap(pq2); // swap the elements of pq1 and pq2

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     // {5}
    pq.push(2);     // {2,5}
    pq.push(8);     // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top() << endl; // prints 2
}

void explainSet()
{
    // Set stores unique values and arrange them in ascending order
    set<int> s;
    s.insert(1);  // {1}
    s.emplace(2); // {1,2}
    s.insert(2);  // {1,2}
    s.insert(4);  // {1,2,4}
    s.insert(3);  // {1,2,3,4}

    // Functionality of insert in vector can be used also, that only increases efficiency
    // begin, end, rbegin, rend, clear, erase, insert, size, empty, find, count, lower_bound, upper_bound, equal_range

    // {1,2,3,4,5}
    auto it = s.find(3);

    // {1,2,3,4,5}
    auto it = s.find(6);

    // {1,4,5}
    s.erase(5);

    int cnt = s.count(1);

    auto it = s.find(3);
    s.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2); // after erase {1,4,5} {first, last}

    // lower_bound and upper_bound function works in the same way
    // as a vector it does

    // This is the syntax
    auto it = s.lower_bound(2);
    auto it = s.upper_bound(3);

    // continue from STL video description video lower and upper bound
    // Q1: Check if X exists int the sorted array or not?

    // A[] = {1,4,5,8,9}

    // bool res = binary_search(a, a + n, 3);

    // bool res = binary_search(a, a + n, 4);

    // lower_bound function: ideally returns iterator to get index we want to do  - a;

    // a[] = {1,4,5,6,9,9}

    // int ind = lower_bound(a, a + n, X) - a;

    // int ind = lower_bound(a, a + n, 4) - a;  // 1
    // int ind = lower_bound(a, a+n, 7) - a; // 4
    // int ind = lower_bound(a, a+n, 10) - a;  // 6

    // For vector

    // int ind = lower_bound(a.begin(), a.end(), X) - a.begin();

    // int ind = lower_bound(a.begin(), a.end(), 4) - a.begin();
    // int ind = lower_bound(a.begin(), a.end(), 7) - a.begin();
    // int ind = lower_bound(a.begin(), a.end(), 10) - a.begin();

    // upper_bound function: ideally returns iterator to get index we want to do  - a;
    // a[] = {1,4,5,6,9,9}

    // int ind = upper_bound(a, a + n, X) - a;

    // int ind = upper_bound(a, a + n, 4) - a;  // 1
    // int ind = upper_bound(a, a+n, 7) - a; // 4
    // int ind = upper_bound(a, a+n, 10) - a;  // 6

    // For vector

    // int ind = upper_bound(a.begin(), a.end(), X) - a.begin();

    // int ind = upper_bound(a.begin(), a.end(), 4) - a.begin();
    // int ind = upper_bound(a.begin(), a.end(), 7) - a.begin();
    // int ind = upper_bound(a.begin(), a.end(), 10) - a.begin();

    // Q2: Find the first occurrences of X in the sorted array?
    // if not exists then print -1

    // A[] = {1,4,4,4,4,9,9,10,11}

    // int ind = lower_bound(a, a + n, X) - a;

    // if(ind != n && a[ind] == X)-a;
    // else cout << -1 << endl;

    // Check array and then mark 1 or -1
    // X=4; // 1
    // X=2; // -1
    // X=12; // -1

    // Q3: Find the last occurrences of X in the sorted array
    // if not exists then print -1
    // A[] = {1,4,4,4,4,9,9,10,11}

    // int ind = upper_bound(a, a + n, X) - a;
    // ind--;

    // if(ind >= n && a[ind] == X) cout<<ind;
    // else cout << -1;

    // Check array and then mark 1 or -1
    // X=4; // 1
    // X=2; // -1
    // X=0; // -1

    // Q4: Find the largest number smaller than X in the sorted array.
    // If no number exists print -1

    // A[] = {1,4,4,4,4,9,9,10,11}

    // int ind = lower_bound(a, a + n, X) - a;
    // ind--;

    // if(ind >= 0) cout<<a[ind];
    // else cout << -1;

    // X=4; // 1
    // X=2; // 1
    // X=1; // -1

    // Q5: Find the smallest number greater than X in the sorted array.
    // If no number exists print -1

    // A[] = {1,4,4,4,4,9,9,10,11}

    // int ind = upper_bound(a, a + n, X) - a;

    // if(ind < n) cout<<a[ind];
    // else cout << -1;

    // X=4; // 9
    // X=2; // 4
    // X=1; // 4
    // X=11; // -1
}

void explainMultiSet()
{
    // Everything is same as a set
    // only stores duplicates elements also
    multiset<int> ms;
    ms.insert(1);  // {1}
    ms.emplace(2); // {1,2}
    ms.insert(2);  // {1,2}
    ms.insert(4);  // {1,2,4}
    ms.insert(3);  // {1,2,3,4}

    ms.erase(2); // {1,3,4} erase all the 2's

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(3));

    // rest all function same as set
}

void explainUnorderedSet()
{
    // Everything is same as set
    // only it does not store elements in ascending order but stores unique elements
    unordered_set<int> s;
    s.insert(1);  // {1}
    s.emplace(2); // {1,2}
    s.insert(2);  // {1,2}
    s.insert(4);  // {1,2,4}
    s.insert(3);  // {1,2,4,3}

    // rest all function same as set
}

void explainMap()
{
    // Map : Key value pairs
    // Key can be any data type and value can be any data type
    // Map store unique keys in sorted order
    map<int, int> m;
    m[1] = 10; // {1:10}
    m[2] = 20; // {1:10, 2:20}
    m[3] = 30; // {1:10, 2:20, 3:30}

    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    mpp[1] = 2;        // {1:2}
    mpp.emplace(3, 1); // {1:2, 3:1}

    mpp.insert({2, 4}); // {1:2, 2:4, 3:1}

    mpp[2, 3] = 10; // {1:2, 2:4, 3:1, {2:3}:10}

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // 2
    cout << mpp[5]; // 0  -> no 5 found

    // auto it = mpp.find(3);
    // cout<<*(it).first<<endl;

    auto it = mpp.find(5); // it returns mpp.end() if not found

    // This is the syntax
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    // erase , swap, clear, size, empty, begin, end, rbegin, rend, insert, erase, find, count, lower_bound, upper_bound, equal_range are same as above
}

void explainMultimap()
{
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
    // duplicate keys are allowed and sorted in ascending order
    multimap<int, int> mm;
    mm.insert({1, 10}); // {1:10}
    mm.insert({2, 20}); // {1:10, 2:20}
    mm.insert({2, 20}); // {1:10, 2:20, 2:20}
    mm.insert({3, 30}); // {1:10, 2:20, 2:20, 3:30}
}

void explainUnorderedMap()
{
    // everything same as map, only it does not store elements in ascending order
    // only mpp[key] cannot be used here
    unordered_map<int, int> m;
    m[1] = 10; // {1:10}
    m[2] = 20; // {1:10, 2:20}
    m[3] = 30; // {1:10, 2:20, 3:30}
}

// Important Algorithm

bool comp(pair<int, int> &p1, pair<int, int> &p2)
{
    if (p1.second < p2.second)
        return true;
    if (p1.second > p2.second)
        return false;
    // they are same
    if (p1.first > p2.first)
        return true;
    return false;
}
void explainExtra()
{
    int a[] = {3, 2, 1, 4, 5};
    int n = sizeof(a) / sizeof(a[0]);
    vector<int> v;

    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a, a + n, greater<int>());

    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

    // sort it ascending to second element // {2,1} {4,1} {1,2}
    // if second element is same, then sort
    // it according to first element in descending order // {4,1} {2,1} {1,2}

    sort(a, a + n, comp);

    // {4,1}, {2,1}, {1,2}

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long num = 123456789;
    int cnt = __builtin_popcountll(num);

    string s = "321"; // make this string in sorted order because we want all permutations
    sort(s.begin(), s.end());

    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + n);
}

int main()
{
    // C++ STL
    // Algorithm
    // Containers
    // Iterators

    return 0;
}
