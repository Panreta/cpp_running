![[Pasted image 20260818141105.png]]


### Speed and capacity per layer

| Layer                       | Typical capacity                                                | Typical access latency                                 |
| --------------------------- | --------------------------------------------------------------- | ------------------------------------------------------ |
| **CPU Registers**           | tens of bytes total (a handful of 32/64-bit registers per core) | ~0 cycles — effectively instantaneous (sub-nanosecond) |
| **L1 Cache**                | 32–64 KB per core                                               | ~1 ns (~4 CPU cycles)                                  |
| **L2 Cache**                | 256 KB – 1 MB per core                                          | ~3–10 ns (~10–20 cycles)                               |
| **L3 Cache**                | a few MB – tens of MB, shared across cores                      | ~10–20 ns (~30–50 cycles)                              |
| **Main Memory (DRAM)**      | 8 GB – 128+ GB (typical modern machines)                        | ~50–100 ns                                             |
| **Permanent Storage (SSD)** | hundreds of GB – several TB                                     | ~50–150 **microseconds** (μs)                          |
| **Permanent Storage (HDD)** | 1 TB – 20+ TB                                                   | ~5–10 **milliseconds** (ms)                            |

**Main Memory (DRAM)** : Where C is working on


```text
高地址 |-----------------|
      |      栈(Stack)  | ← 局部变量、函数调用（向下增长）
      |-----------------|
      |      ...        | ← 未分配区域
      |-----------------|
      |      堆(Heap)   | ← 动态内存分配（向上增长） ← malloc管理的区域
      |-----------------|
      | 未初始化数据(BSS)| ← 全局/静态变量（初始为0）
      |-----------------|
      | 初始化数据(Data)| ← 全局/静态变量（有初始值）
      |-----------------|
      |  代码段(Text)   | ← 程序指令
低地址 |-----------------|
```