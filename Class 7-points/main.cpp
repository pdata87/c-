#include <iostream>

#include <fcntl.h>
#include "File.h"
int main() {
    File f {"/tmp/testFile", O_WRONLY | O_APPEND};

    File f2 { f } ;

    File f3 = f2;

    File f4;

       f = f3;


    return 0;
}