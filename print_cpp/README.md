# Python-Style `print()` for C++

This is a simple C++ utility that mimics Python’s versatile `print()` function.
This can print array, vector 1D, 2D, vector pair, pair, map 


---

## Features

- Supports printing multiple arguments of mixed types in one call.
- Works with fundamental types (`int`, `char`, `double`, `string`, etc.).
- Prints STL containers:
  - 1D and 2D `vector`
  - `pair` and `vector` of `pair`
  - `map`
  - C-style arrays
- Automatically adds spaces between arguments and a newline at the end.

---

## How to Use

Include the code and call the `print` function like this:

```cpp
print('a', "hello", 1, 10.4);

int a[] = {3, 4, 5, 6};
string b[] = {"hello", "world!", "Hi"};
print(a, "\n", b);

vector<char> c = {'1', 'D', 'v', 'e', 'c', 't', 'o', 'r'};
print(c);

vector<vector<char>> d = {{'2', 'D'}, {'v', 'e', 'c', 't', 'o', 'r'}};
print(d);

vector<pair<string, int>> e = {{"vector pair", 1}, {"vector pair", 2}};
print(e);

pair<string, int> p = {"Pyarelal", 1};
print(p);

map<int, string> f = {{1, "map start"}, {2, "ending map"}};
print(f);

```
```cpp
a hello 1 10.4 
3 4 5 6 
hello world! Hi 
1 D v e c t o r 
2 D 
v e c t o r 

vector pair 1 
vector pair 2 

Pyarelal 1 

1 map start 
2 ending map 

