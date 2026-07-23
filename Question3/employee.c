#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{
    int fd;
    char record1[] = "101 Alice Manager\n";
    char record2[] = "102 Bob Engineer\n";
    char updated[] = "102 Bob SeniorEngineer\n";
    char buffer[100];

    fd = open("employees.txt", O_CREAT | O_RDWR, 0644);

    if (fd < 0)
    {
        printf("Error opening file\n");
        return 1;
    }

    write(fd, record1, strlen(record1));
    write(fd, record2, strlen(record2));

    lseek(fd, strlen(record1), SEEK_SET);

    write(fd, updated, strlen(updated));

    lseek(fd, 0, SEEK_SET);

    int bytes = read(fd, buffer, sizeof(buffer) - 1);
    buffer[bytes] = '\0';

    printf("Employee Records:\n%s", buffer);

    close(fd);

    return 0;
}
