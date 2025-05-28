#include <bits/stdc++.h>
using namespace std;

// this can print array, vector 1D, 2D, vector pair, pair, map 
template<typename... Args> void print(const Args&... args);
void print_one(const char* val) { cout << (val == "\n" ? "\n" : string(val) + " ");}
template<typename T> void print_one(const T& val) { cout << val << " "; }
template<typename T> void print_one(const vector<T>& v) { for (auto& x : v) print_one(x); }
template<typename T> void print_one(const vector<vector<T>>& v) { for (auto& x : v) { print_one(x); cout << "\n"; }}
template<typename T1, typename T2> void print_one(const pair<T1, T2>& p) { print(p.first, p.second); }
template<typename T1, typename T2> void print_one(const vector<pair<T1, T2>>& v) { for (auto& x : v) print_one(x); }
template<typename T1, typename T2> void print_one(const map<T1, T2>& m) { for (auto& [x, y] : m) print(x, y); }
template<typename T, size_t N> void print_one(const T (&v)[N]) { for (size_t i = 0; i < N; i++) print_one(v[i]); }
template<typename... Args> void print(const Args&... args) { (print_one(args), ...); cout << "\n"; }

int  main() {
    print('a', "hello",  1, 10.4); // normal variable 
    
    int a[] = {3, 4, 5, 6};
    string b[] = {"hello", "world!", "Hi"}; 
    print(a, "\n", b); // print  array


    vector<char> c = {'1', 'D' ,'v', 'e', 'c', 't', 'o', 'r'};
    print(c); // 1D vector
    
    vector<vector<char>> d = {{'2', 'D'},{'v', 'e', 'c', 't', 'o', 'r'}};
    print(d); // 2D vector 

    vector<pair<string, int>> e = {{"vector pair", 1}, {"vector pair", 2}};
    print(e); // pair vector

    pair<string, int> p = {"Pyarelal", 1};
    print(p);

    map<int, string> f;
    f[1] = "map start";
    f[2] = "ending map";

    print(f);

    return 0;
}
