

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>


std::string get_file();
char* read_file(const std::string& file,int &size);
void write_file(char* inlist, int size);

#endif
