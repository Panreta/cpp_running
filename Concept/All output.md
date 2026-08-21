**Integers**

| Specifier    | Meaning                                              |
| ------------ | ---------------------------------------------------- |
| `%d` or `%i` | signed `int`, decimal                                |
| `%u`         | unsigned `int`, decimal                              |
| `%ld`        | signed `long`                                        |
| `%lu`        | unsigned `long`                                      |
| `%lld`       | signed `long long`                                   |
| `%llu`       | unsigned `long long`                                 |
| `%zu`        | `size_t` (unsigned) — result of `sizeof`, `strlen`   |
| `%x` / `%X`  | unsigned int, hexadecimal (lower/upper case letters) |
| `%o`         | unsigned int, octal                                  |

**Floating point**

|Specifier|Meaning|
|---|---|
|`%f`|`double`, fixed decimal notation (e.g. `3.140000`)|
|`%e` / `%E`|`double`, scientific notation (e.g. `3.14e+00`)|
|`%g` / `%G`|`double`, shortest of `%f` or `%e`|

**Characters & strings**

|Specifier|Meaning|
|---|---|
|`%c`|a single `char`|
|`%s`|a C string (`char*`, null-terminated)|

**Pointers**

|Specifier|Meaning|
|---|---|
|`%p`|prints a pointer's address (in an implementation-defined format, usually hex like `0x7ffee3a1b2c8`)|

**Misc**

|Specifier|Meaning|
|---|---|
|`%%`|prints a literal `%` character|