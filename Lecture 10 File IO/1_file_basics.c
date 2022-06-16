/*
Random Access Memory is volatile and its content is lost when the program terminates. In order to retain the data we use files.
A file is data stored in a storage device.
C program can access the data stored in the file by reading from and writing to the file.

FILE POINTER:
    "File" is a structure which needs to be created for opening a file
    File Pointer is the pointer to this structure of the file.

        A file pointer can be created as follows:
            FILE *ptr;
            ptr = fopen("filename.extension","mode");
                    NOTE:-  filename = name of file
                            extension = .txt (or) .c (or) .jpg (or) .dat etc.
                    FILE OPENING MODES IN C:
                        "r" -- open for reading -- if file doesn't exist, fopen returns NULL
                        "rb" -- open for reading in binary -- if file doesn't exist, fopen returns NULL
                        "w" -- open for writing -- if file exist, the contents will be overwritten
                        "wb" -- open for writing in binary -- if file exist, the contents will be overwritten
                        "a" -- open for append(add data in the end of file) -- if file doesn't exist it will be crated.
    TYPES OF FILES:
        There are two types of files:
            1] Text files (.txt, .c)
            2] Binary files (.jpg, .dat)
*/


#include<stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("sample1.txt","w");
    return 0;
}