# Question 1 - Command Explanations

### Command:
```bash
cd ~/Desktop/Linux-System-Programming-Lab
```
**Explanation:** Changed the current directory to the GitHub repository where all the assignment files will be stored.

### Command:
```bash
pwd
```
**Explanation:** Displayed the current working directory to verify that I was in the correct project folder.

### Command:
```bash
ls
```
**Explanation:** Listed the files and folders in the current directory to check its contents.

### Command:
```bash
mkdir Question1 Question2 Question3 Question4 Question5
```
**Explanation:** Created separate folders for each question to organize the assignment properly.

### Command:
```bash
cd Question1
```
**Explanation:** Entered the Question1 folder to begin working on the first task.

### Command:
```bash
mkdir screenshots
```
**Explanation:** Created a folder named `screenshots` to store all screenshots for Question 1.

### Command:
```bash
touch explanation.md
```
**Explanation:** Created a Markdown file to record explanations for all commands used in Question 1.

### Command:
```bash
mkdir submissions backup
```
**Explanation:** Created folders to store the original student submissions and the backup folder for unique files.

### Command:
```bash
echo "Operating Systems" > submissions/student1.txt
echo "Linux Lab" > submissions/student2.txt
cp submissions/student1.txt submissions/student3.txt
```
**Explanation:** Created sample student submission files. The third file is a duplicate of the first file to test duplicate detection.

### Command:
```bash
touch backup.sh
chmod +x backup.sh
nano backup.sh
```
**Explanation:** Created the shell script, made it executable, and edited it to implement duplicate detection, backup creation, report generation, and error logging.

### Command:
```bash
./backup.sh
```
**Explanation:** Executed the shell script to process the submission files, detect duplicate files, copy only unique files into the backup folder, and generate the required report.

### Command:
```bash
ls backup
```
**Explanation:** Verified that only the unique submission files were copied into the backup folder.

### Command:
```bash
cat report.txt
```
**Explanation:** Displayed the generated report showing the number of processed files, duplicate files, and backed-up files.

### Command:
```bash
cat errors.txt
```
**Explanation:** Displayed the error log to verify that no errors occurred during script execution.
