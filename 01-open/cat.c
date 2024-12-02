#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <unistd.h>


int main(int argc, char *argv[]) {
    for (int idx = 1; idx < argc; idx++) {
        int fd = open(argv[idx], O_RDONLY);
        if (fd == -1) {
            perror("open");
            continue;
        }

        char buffer[4096];
        ssize_t bytesRead;
        while ((bytesRead = read(fd, buffer, sizeof(buffer))) > 0) {
            if (write(STDOUT_FILENO, buffer, bytesRead) != bytesRead) {
                perror("write");
                close(fd);
                return 1;
            }
        }

        if (bytesRead == -1) {
            perror("read");
        }

        close(fd);
    }

    return 0;
}
