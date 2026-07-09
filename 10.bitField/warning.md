## 1. If not enough space, spills to next unit

```c
struct bs {
    unsigned a : 6;    // 6 bits used in first byte
    unsigned b : 6;    // only 2 bits left in first byte — not enough!
                       // so b spills to second byte, takes 6 bits there
    unsigned c : 4;    // continues in second byte
};
```

```
byte 1:  [ a a a a a a | - - ]   6 bits used, 2 wasted
byte 2:  [ b b b b b b | c c c c ]
byte 3:  (padding to align to 4 bytes)
byte 4:  (padding)
```

b couldn't fit in the remaining 2 bits of byte 1, so it jumped to byte 2.

---

## 2. Width can't exceed the type size

```c
struct bs {
    unsigned int a : 33;   // ❌ int is 32 bits, can't exceed that
    unsigned int b : 32;   // ✅ exactly fits
    unsigned char c : 9;   // ❌ char is 8 bits, 9 exceeds it
    unsigned char d : 8;   // ✅ exactly fits
};
```

The type tells you the maximum:
```
unsigned char  → max : 8
unsigned short → max : 16
unsigned int   → max : 32
```

---

## 3. Unnamed bit field — just a spacer

```c
struct k {
    int a : 1;    // 1 bit, usable
    int   : 2;    // 2 bits, wasted on purpose — no name, can't access
    int b : 3;    // 3 bits, usable
    int c : 2;    // 2 bits, usable
};

struct k x;
x.a = 1;    // ✅
x.b = 5;    // ✅
// x.??? = 1  ❌ no way to access the 2 unnamed bits
```

```
[ c c | b b b | - - | a ]
   ↑      ↑      ↑    ↑
  2bits  3bits  2bits  1bit
                 ↑
            unnamed, just padding
```

Used when you need your fields to align to specific bit positions — common in hardware registers where certain bits are reserved.