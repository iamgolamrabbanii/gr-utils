# Binary–Decimal Converter (C++)

This is a simple interactive C++ console application that converts between **binary** and **decimal** numbers. It supports:

- ✅ Decimal to Binary conversion (up to 64-bit)
- ✅ Binary to Decimal conversion (up to 64-bit)
- 🔁 Continuous input until you type `exit`

## 🧠 Features

- Input validation:
  - Binary input must contain only `0` and `1`
  - Decimal input must be a valid non-negative integer within 64-bit range
- Clean recursive structure
- Automatically trims leading zeros in binary output
- Allows graceful exit by typing `exit`

---

## 📦 How to Use

1. **Compile the code**:
   ```bash
   g++ -o converter main.cpp
   ```
   ```bash
   .\converter.exe
   ```

``` cpp
Write "exit" for exit 
1. Binary to Decimal
2. Decimal to Binary
1
Enter Binary number : 1000001
Decimal : 65
Enter Binary number : exit
1. Binary to Decimal
2. Decimal to Binary
2
Enter Decimal number : 1000234
Binary : 11110100001100101010
Enter Decimal number : exit
1. Binary to Decimal
2. Decimal to Binary
exit
```
