#include "iobench.h"
#include <stdio.h>

int main() {
    // opens a file called `data` with the O_SYNC
    FILE* fd = fopen("data", "w");
    
    if (!fd) {
        perror("popen");
        exit(1);
    }

    // writes the characer '6' to the file
    size_t size = 5120000;
    const char* buf = "6";
    double start = tstamp();

    size_t n = 0;
    while (n < size) {
        size_t r = fwrite(buf, sizeof(char), 1, fd);
        if (r != 1) {
            perror("pwrite");
            exit(1);
        }

        // with some frequency (defined in iobench.h), prints out
        // how long it takes to complete the write.
        n += r;
        if (n % PRINT_FREQUENCY == 0) {
            report(n, tstamp() - start);
        }
    }

    fclose(fd);
    report(n, tstamp() - start);
    fprintf(stderr, "\n");
}
