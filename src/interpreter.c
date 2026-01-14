#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "compiler.h"
#include "opcodes.h"
#include "types.h"
#include "interpreter.h"


// global ptr
int64_t code;
FILE *fp;

int main(void) {


    fp = fopen("test.scm", "r");
    if (fp == NULL) {
        printf("Error opening file for read\n");
        return -1;
    }   
    // Now create a virtual stack to push data

    fread(&code, sizeof(int64_t), 1, fp);
    interpret();



}

void interpret() {
    printf("in the interpreter");

    while (true) {
        switch (code) {
            case LOAD64:
                printf("loading 64");
                break;
            default:
                break;
        }
        break;
    } 
}

void read_word() {

    fread(&code, sizeof(int64_t), 1, fp);

}
