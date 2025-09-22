# Programming Syntax and Semantics
Programming Syntax and Semantics

This repository contains code and outputs for my assignment on analyzing syntax and semantics across multiple programming languages.

📂 Contents

Python (py_error.py, py_fixed.py, py_output.txt)

JavaScript (js_error.js, js_fixed.js, js_output.txt)

C++ (cpp_error.cpp, cpp_fixed.cpp, cpp_output.txt)

Rust (rust_memory.rs, rust_output.txt)

Report (APA-style writeup explaining results and differences)

🖥️ Steps Performed in Terminal
1. Python
python3 py_error.py     # run file with syntax errors
python3 py_fixed.py     # run corrected file
python3 py_fixed.py > py_output.txt

2. JavaScript
node js_error.js        # run file with syntax errors
node js_fixed.js        # run corrected file
node js_fixed.js > js_output.txt

3. C++
g++ cpp_error.cpp -o cpp_error    # compile error file
./cpp_error                       # run (shows error message)
g++ cpp_fixed.cpp -o cpp_fixed    # compile corrected file
./cpp_fixed > cpp_output.txt

4. Rust
rustc rust_memory.rs              # compile
./rust_memory > rust_output.txt   # run and save output
