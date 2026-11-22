# cpp-competitive-programming
Competitive programming solutions in C++ with two files per problem: a clean submission and an annotated explanation.

## About

This repository contains my solutions to competitive programming problems, starting with an advanced C++ course for high school students (grades 10–11) and expanding to other sources over time.
Problems are organized by topic and source in separate folders.

## Repository structure

Each problem is represented by **two `.cpp` files**:

- **`problem_name.cpp`** — a clean, submission-ready solution. No comments, no debug output, no user prompts. This is exactly what gets pasted into the judge system.
- **`problem_name_annotated.cpp`** — a detailed listing with comments explaining the approach, key ideas, edge cases, and complexity analysis.

This dual format lets you quickly grab a working solution or study the reasoning behind it.

## Problem requirements

When solving problems, I tried to follow the usual requirements of competitive programming:

- **Correctness** — the solution should pass the tests, including edge cases.
- **Efficiency** — algorithms should respect time limits (typically 1–5 seconds) and memory limits (typically 256–1024 MB), and handle maximum input sizes (e.g., n = 10^6).
- **Strict I/O format** — input is read from standard input (`cin`), output is written to standard output (`cout`). No prompts, no extra words, no extra spaces or blank lines. The output should match the expected answer exactly.
- **Standard C++** — programs are written in **C++17** and compiled with **g++ 14.2.0** (Debian 14.2.0-19). I aimed for code that compiles without errors or warnings.
- **Readability and reliability** — I tried to keep the structure clean, use meaningful variable names, avoid unnecessary operations, and use fast I/O where needed.

## Problem difficulty

The problems are olympiad-style: they usually require nontrivial algorithms and data structures (sorting, searching, dynamic programming, graphs, trees, hashing, greedy algorithms, and more), careful analysis of constraints, and handling of boundary cases. Simple brute force is often not enough.

## Notes

- Problems are grouped by source and topic in subfolders.
- The repository is a personal learning log and is not affiliated with any course or organization.
- AI tools are used only as a learning aid (reviewing algorithms, debugging, analyzing complexity), never to obtain ready-made solutions during a contest.

## License

MIT — see [LICENSE](LICENSE).