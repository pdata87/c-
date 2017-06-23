//
// Created by pdata on 23.06.17.
//

#ifndef CLASS_7_POINTS_FILE_H
#define CLASS_7_POINTS_FILE_H

#include <string>
class File {
    std::string path;
    mode_t mode;
    int fileDescriptor;
    int openFile();
public :
    File(std::string path, mode_t mode);
    File& operator=( File& other);
    File(const File & file);
    File();
    ~File();

};


#endif //CLASS_7_POINTS_FILE_H
