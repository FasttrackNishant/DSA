#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    for (auto it2 : v)
    {
        cout << it2 << " ";
    }
    cout << endl;
}
void explainPair()
{
    pair<int, int> p = {1, 3};

    // to access elements
    cout << p.first << " " << p.second << endl;

    // nested pair

    pair<int, pair<int, int>> p1 = {1, {3, 4}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // array using pairs

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[0].second << endl;
}

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);

    // vector of pair datatype
    vector<pair<int, int>> vec;

    vec.push_back({3, 4});
    vec.emplace_back(2, 7);

    // eisa vector jo alreday define ho
    vector<int> v1(5, 100);
    // copy one vector to another
    vector<int> v2(v1);

    // accessing elemetns in the vector
    cout << "elements in vector v ";
    cout << v[0] << " " << v.at(0) << endl;

    // using iterator

    vector<int>::iterator it = v.begin();
    cout << *(it) << endl; // this will print address
    it++;
    cout << *(it) << endl;

    //--> printing vector using iterators

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << *(it1) << " ";
    }
    cout << endl;

    for (auto it2 : v2)
    {
        cout << it2 << " ";
    }
    cout << endl;

    //--> deletion in vector
    // erase single element
    v2.erase(v2.begin());
    printVec(v2);
    // erase multiple elements
    v2.erase(v2.begin(), v2.begin() + 2);
    printVec(v2);
    cout << endl;

    //-->insert Functions
    cout << "Insert Function " << endl;
    printVec(v);
    v.insert(v.begin(), 10); // this willinsert at begin
    printVec(v);
    v.insert(v.begin(), 2, 5);
    printVec(v);

    // one vector into another
    vector<int> copy(2, 50);
    v.insert(v.begin(), copy.begin(), copy.end());
    printVec(v);
}

void explainList()
{
    list<int> ls;

    ls.push_back(2);
    ls.push_back(4);
    ls.emplace_back(4);

    // at front
    ls.push_front(5);
    ls.emplace_front(); // by default 0 is passed

    for (auto it : ls)
    {
        cout << it << " ";
    }
}

void explainDeque()
{

    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    dq.pop_back();
    dq.pop_front();

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;
    dq.back();
    dq.front();

    // rest are same
}

void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);

    cout << st.top(); // 6

    st.pop(); // 6 chala gaya

    cout << st.top();
    cout << st.size();
    cout << st.empty();

    // swapping stack

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{

    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(6); // 2,4,6

    cout << q.back();
    q.back() += 3; // 2,4,9

    cout << q.back();
    cout << q.front();

    q.pop();

    cout << q.front();
}

void explainPQ()
{ // largest element statys at the top
    priority_queue<int> pq;

    pq.push(2);
    pq.push(10);
    pq.push(6);
    pq.push(16);

    cout << pq.top();
    pq.pop();

    // to store smallest elemtn at the top

    priority_queue<int, vector<int>, greater<int>> pql;
    pql.push(2);
    pql.push(10);
    pql.push(6);
    pql.push(16);

    cout << pql.top();
}

void explainSet()
{
    // stores in sorted and unique
    set<int> st;
    st.insert(1);
    st.insert(3);
    st.insert(1);
    st.insert(5);
    st.insert(4);

    //{1,3,4,5}4

    //  auto it = st.find(5); // it will return an iterator which points to the 5

    // auto it = st.find(19); // it will return end iterator

    st.erase(5);

    int cnt = st.count(1);
    cout << cnt;

    auto it3 = st.find(3);
    // st.erase(it);

    // read it
    //  auto it3 = st.lower_bound(3);
    //  auto it3 = st.upper_bound(5);
}

void explainMultiset()
{

    // only sorted

    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // ms.erase(1); //--> all occurrenced of 1 will erased

    int cnt = ms.count(1);
    cout << cnt;

    // if erase function is used then it erases all the occurreneces but if we want to delete specifitc then address is used

    ms.erase(ms.find(1));
    ms.erase(ms.find(1), ms.find(2));
}

void explainUnorderedSet()
{
    // it will store in randomized order

    unordered_set<int> set;
}

void explainMap()
{
    // map works like a key value pair

    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;

    map<pair<int, int>, int> mpp2;

    // assigning values
    mpp[1] = 2;
    mpp.insert({3, 1});
    mpp.insert({2, 4});
    // mpp[{2, 3}] = 10;

    for (auto it : mpp)
    {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto it = mpp.find(3);
    // cout << *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
}

int main()
{
    int a;
    // explainPair();
    // explainVector();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue();
    // explainPQ();
    // explainSet();
    // explainMultiset();
    // explainUnorderedSet();
    explainMap();

    cout << endl;
    return 0;
}