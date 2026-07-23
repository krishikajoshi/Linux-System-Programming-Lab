# Question 4 - Command Explanations

### Command:
```bash
cd Question4
```
**Explanation:** Changed the current directory to the Question4 folder where the required files are stored.

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
touch pipeline.txt
```
**Explanation:** Created a text file to store the command pipeline.

### Command:
```bash
nano pipeline.txt
```
**Explanation:** Opened the pipeline file in the Nano text editor to write the command.

### Command:
```bash
cat pipeline.txt
```
**Explanation:** Displayed the contents of the pipeline file to verify that it was saved correctly.

### Command:
```bash
nano system.log
```
**Explanation:** Created and edited a sample log file containing normal and ERROR log entries.

### Command:
```bash
tail -f system.log | grep "ERROR" > error_report.txt 2>/dev/null
```
**Explanation:** Continuously monitored the log file, filtered only ERROR messages, stored them in `error_report.txt`, and suppressed unnecessary error messages by redirecting them to `/dev/null`.

### Command:
```bash
grep "ERROR" system.log > error_report.txt
```
**Explanation:** Extracted all existing ERROR messages from the log file and saved them into the report file.

### Command:
```bash
cat error_report.txt
```
**Explanation:** Displayed the contents of the generated report file to verify that only ERROR messages were extracted successfully.

### Command:
```bash
ls
```
**Explanation:** Listed the files in the current directory to verify that the required files were created successfully.
