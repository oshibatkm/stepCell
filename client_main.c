#include "client_func.h"
#include "common.h"

int main(int argc, char *argv[])
{
    if(InitOprWindows() == -1){
        fprintf(stderr, "setup failed : InitWindows\n");
        return -1;
    }

    return 0;
}