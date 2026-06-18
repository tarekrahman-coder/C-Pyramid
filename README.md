# C Pyramid Patterns

A collection of pyramid and half-pyramid pattern programs written in C.

## Repository Structure

```text
pyramid/
├── full.c
├── full/
├── left-half.c
├── left-half/
├── left-half-inverted.c
├── lh-inverted/
├── right-half.c
├── rh/
├── right-half-Inverted.c
└── rhi/
```

## Patterns Included

### 1. Full Pyramid

**Source:** `full.c`

Example output:

```text
    *
   ***
  *****
 *******
*********
```

---

### 2. Left Half Pyramid

**Source:** `left-half.c`

Example output:

```text
*
**
***
****
*****
```

---

### 3. Left Half Inverted Pyramid

**Source:** `left-half-inverted.c`

Example output:

```text
*****
****
***
**
*
```

---

### 4. Right Half Pyramid

**Source:** `right-half.c`

Example output:

```text
    *
   **
  ***
 ****
*****
```

---

### 5. Right Half Inverted Pyramid

**Source:** `right-half-Inverted.c`

Example output:

```text
*****
 ****
  ***
   **
    *
```

## Compilation

Use GCC to compile any program:

```bash
gcc full.c -o full
```

or

```bash
gcc left-half.c -o left-half
```

## Run

```bash
./full
```

Replace `full` with the desired executable name.

## Requirements

- GCC Compiler
- Linux, macOS, or Windows (MinGW)

## Learning Objectives

These programs help practice:

- Nested loops
- Pattern printing
- Conditional statements
- Spacing and formatting logic
- Basic C programming concepts

## License

This project is open source and available under the MIT License.
