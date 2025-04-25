# 🌟 Pattern Printing in C++ 💻

This 📁 contains C++ 🧾 to print 🖨️ various 🎨 using 🔁 loops. Each 🎨 is 🔧 as a function 🔂, and `main` reads 🧠 the number 🔢 of test 🧪 and values of `n` to 🖨️ the 🎨.

## 📚 Table of Contents

1. [🔲 Pattern 1: Full Square](#-pattern-1-full-square)
2. [📐 Pattern 2: Right-Angled Triangle ⭐](#-pattern-2-right-angled-triangle-)
3. [🔢 Pattern 3: Increasing Number Triangle](#-pattern-3-increasing-number-triangle)
4. [🔁 Pattern 4: Repeated Number Triangle](#-pattern-4-repeated-number-triangle)
5. [🔽 Pattern 5: Inverted ⭐ Triangle](#-pattern-5-inverted-star-triangle-)
6. [🔽 Pattern 6: Inverted 🔢 Triangle](#-pattern-6-inverted-numeric-triangle-)
7. [⛰️ Pattern 7: Centered ⭐ Pyramid](#pattern-7-centered-pyramid-of-stars)
8. [🔻 Pattern 8: Inverted Centered ⭐ Pyramid](#-pattern-8-inverted-centered-pyramid-of-stars-)
9. [💎 Pattern 9: Diamond of ⭐](#-pattern-9-diamond-of-stars-)
10. [⬆️⬇️ Pattern 10: Increasing + Decreasing ⭐](#pattern-10-increasing-and-decreasing-stars)
11. [0️⃣1️⃣ Pattern 11: Alternating Binary Triangle](#pattern-11-alternating-binary-triangle)

---

## 🔲 Pattern 1: Full Square

**🎯 Goal:**
```
* * * * *
* * * * *
* * * * *
* * * * *
```

**🧠 Approach:**
- Use 🔁 loops: outer ↕️ (`i`: 0 → n-1), inner ↔️ (`j`: 0 → n-1).
- Print "* " ➕ newline 🆕 for each row.

## 📐 Pattern 2: Right-Angled Triangle ⭐

**🎯 Goal:**
```
*
* *
* * *
* * * *
```

**🧠 Approach:**
- Outer 🔁 for rows.
- Inner 🔁 (`j`: 0 → i) prints ⭐.
- Builds on Pattern 1 ➕ more ⭐.

## 🔢 Pattern 3: Increasing Number Triangle

**🎯 Goal:**
```
1
12
123
1234
```

**🧠 Approach:**
- Outer 🔁 (`i`: 1 → n).
- Inner 🔁 (`j`: 1 → i) prints 🔢.
- Shows dynamic printing 📈 over static 🔣.

## 🔁 Pattern 4: Repeated Number Triangle

**🎯 Goal:**
```
1
22
333
4444
```

**🧠 Approach:**
- Like Pattern 3 but repeat `i` 🔁 `i` times.

## 🔽 Pattern 5: Inverted Star Triangle ⭐

**🎯 Goal:**
```
* * * * *
* * * *
* * *
* *
*
```

**🧠 Approach:**
- Outer 🔁: `i` from 1 → n
- Inner 🔁 prints ⭐ from `n-i+1` → 1
- Reverse 🔁 of Pattern 2 🔄

## 🔽 Pattern 6: Inverted Numeric Triangle 🔢

**🎯 Goal:**
```
12345
1234
123
12
1
```

**🧠 Approach:**
- Outer 🔁: `i` from 1 → n
- Inner 🔁 prints 🔢 from 1 → `n-i+1`
- Mirror Pattern 3 🪞

## Pattern 7: Centered Pyramid of Stars

**🎯 Goal:**
```
    *
   ***
  *****
 *******
*********
```

**🧠 Approach:**
- Loop ↕️ levels
- Spaces: `n-i-1`, ⭐: `2*i+1`
- Print 🧊➕🌟➕🧊

## 🔻 Pattern 8: Inverted Centered Pyramid of Stars ⭐

**🎯 Goal:**
```
*********
 *******
  *****
   ***
    *
```

**🧠 Approach:**
- Outer 🔁 (`i`: 0 → n-1)
- Print `i` spaces, then ⭐: `2*(n-i)-1`, then `i` spaces.
- Upside-down ⛰️ from Pattern 7 🙃

## 💎 Pattern 9: Diamond of Stars ⭐

**🎯 Goal:**
```
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
```

**🧠 Approach:**
- Combine ⛰️ (7) + 🔻 (8)
- First ⬆️ then ⬇️

## Pattern 10: Increasing and Decreasing Stars

**🎯 Goal:**
```
*
**
***
****
*****
****
***
**
*
```

**🧠 Approach:**
- Loop `i`: 1 → `2*n-1`
- If `i <= n` → ⭐=`i`, else ⭐=`2*n-i`
- Similar to 💎 but only half ↕️

## Pattern 11: Alternating Binary Triangle
**🎯 Goal:**
```
1
01
101
0101
10101
```

**🧠 Approach:**
- Outer 🔁 (`i` rows)
- Start bit: 1️⃣ if even, 0️⃣ if odd
- Flip 🔄 after every 🔢
- Adds binary 🔀 to numeric 🎨

---

## 🔗 Pattern Connections

- 🧩 2–6 evolve from 🔲 1 by modifying row 📏 & content 📄
- ⛰️ 7 → 🔻 8 → 💎 9 form aligned & layered ⭐
- ⬆️⬇️ 10 is 💎's half 💫
- 0️⃣1️⃣ 11 plays with bits 🎭 & shows logic via flip 🔁
