# Question 3 - Command Explanations

### Command:
```bash
cd Question3
```
**Explanation:** Changed the current directory to the Question3 folder where the program and related files are stored.

### Command:
```bash
mkdir screenshots
```
**Explanation:** Created a folder named `screenshots` to store all screenshots required for the assignment.

### Command:
```bash
touch explanation.md
```
**Explanation:** Created an empty Markdown file to document the commands used and their explanations.

### Command:
```bash
touch employee.c
```
**Explanation:** Created a C source file named `employee.c` for implementing the required file-processing program.

### Command:
```bash
nano employee.c
```
**Explanation:** Opened the C source file in the Nano text editor to write the program.

### Command:
```bash
cat employee.c
```
**Explanation:** Displayed the contents of the C source file to verify that the program was saved correctly.

### Command:
```bash
gcc employee.c -o employee
```
**Explanation:** Compiled the C source file and generated an executable file named `employee`.

### Command:
```bash
./employee
```
**Explanation:** Executed the compiled program. The program used the Linux system calls `open()`, `write()`, `lseek()`, `read()`, and `close()` to create a file, write employee records, update a specific record without rewriting the entire file, retrieve the records, and close the file.

### Command:
```bash
ls
```
**Explanation:** Listed the files in the current directory to verify that the source file, employee records file, explanation file, and screenshots folder were created successfully.
