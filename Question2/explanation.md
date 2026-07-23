# Question 2 - Command Explanations

### Command:
```bash
cd ~/Desktop/Linux-System-Programming-Lab/Question2
```
**Explanation:** Changed the current directory to the Question2 folder to begin working on the second task.

### Command:
```bash
mkdir screenshots
touch explanation.md
touch process.c
```
**Explanation:** Created a screenshots folder to store execution screenshots and created the required files for the program and documentation.

### Command:
```bash
nano process.c
```
**Explanation:** Opened the source code file in the Nano text editor to write the C program.

### Command:
```bash
cat process.c
```
**Explanation:** Displayed the contents of the C source file to verify that the program was written correctly.

### Command:
```bash
gcc process.c -o process
```
**Explanation:** Compiled the C source file and generated an executable file named `process`.

### Command:
```bash
./process
```
**Explanation:** Executed the compiled program. The program created a child process using `fork()`, registered a signal handler, terminated the child process using `kill()`, and used `wait()` to allow the parent process to wait for the child to finish.

### Command:
```bash
ls
```
**Explanation:** Listed the files in the current directory to verify that the source file, executable file, explanation file, and screenshots folder were created successfully.
