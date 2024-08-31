# Roman to Integer Conversion 🏛️➡️🔢

## Overview ✨
The `romanToInt` function is designed to convert a Roman numeral string into its corresponding integer value. This problem is a common task when dealing with ancient numeral systems, where understanding the order and combinations of letters like **I**, **V**, **X**, etc., is crucial.

## How It Works ⚙️
- The function uses an unordered map to store the integer values of Roman numeral characters: **I** (1), **V** (5), **X** (10), **L** (50), **C** (100), **D** (500), and **M** (1000).
- It iterates through the string `s`, checking if the current Roman numeral is smaller than the next one. This checks for special cases like **IV** (4), **IX** (9), **XL** (40), etc.
- If a smaller numeral precedes a larger one, it subtracts the smaller value from the result. Otherwise, it adds the value.

## Usage Example 💡
To use this function, pass a string containing the Roman numeral you want to convert into an integer. The function will return the corresponding integer value.

### Example:
- Input: `"XIV"` 
- Output: `14`

## Key Points to Remember 📝
- Roman numerals are usually written from largest to smallest from left to right.
- When a smaller numeral precedes a larger one, it must be subtracted rather than added.
- The function handles edge cases where subtraction is necessary, ensuring accurate conversions.

---

🚀 **Tip:** Understanding the Roman numeral system and how subtraction works is essential for mastering this conversion technique!
