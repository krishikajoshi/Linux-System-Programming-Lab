# Question 5

When editing a file in **vi**, several recovery mechanisms help prevent data loss after a crash.

### 1. Swap Files
A swap file is automatically created while editing. If the system crashes, vi detects the swap file when the file is reopened and allows the user to recover unsaved changes using the recovery option.

### 2. Undo History
Undo history allows recently made changes to be reversed during the editing session. However, after a system crash, undo history is generally lost unless persistent undo is enabled.

### 3. Registers
Registers temporarily store copied or deleted text. They are useful during editing but are not intended for recovering work after a crash.

### 4. Backup Files
Backup files store the previous version of the file before modifications are made. They protect the original file but usually do not contain the latest unsaved edits.

### 5. Auto-Recovery
The recovery feature uses the swap file to restore unsaved changes after an unexpected shutdown. This is the primary recovery mechanism in vi.

## Most Reliable Recovery Strategy

The most reliable recovery strategy is to use the **swap file and the auto-recovery feature**. After restarting, the user can recover the unsaved changes using the recovery option provided by vi. Backup files help preserve the original version, while swap files recover the latest editing session, making them the best solution after a crash.
