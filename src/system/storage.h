#pragma once

extern SDIOBlockDevice bd;
extern FATFileSystem fs;

void print_dir(FileSystem *fs, const char* dirname);
