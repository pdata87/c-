//
// Created by pdata on 23.06.17.
//

#include <fcntl.h>
#include <iostream>
#include <zconf.h>
#include "File.h"

File::File(std::string path, mode_t mode):path(path),mode(mode){
    try {
        openFile();
    }catch (std::string exc){

        std::cout << exc << std::endl;
    }
}


int File::openFile() {

    fileDescriptor = open(path.c_str(),mode);
    if(fileDescriptor == -1){
        std:: string exceptionMessage = "file not exist or couldn't be opened";
        throw exceptionMessage;
    }
}

File::~File() {
    close(fileDescriptor);
}

File::File(const File &file) {
    fileDescriptor = file.fileDescriptor;
    path = file.path;
    mode = file.mode;
}

File &File::operator=( File &other) {


    return other;
}

File::File() {
    path="";
    mode = NULL;
    fileDescriptor=-1;

}

