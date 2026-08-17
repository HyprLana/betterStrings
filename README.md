## Dynamic String lib for C

its a smol dynamic string library, compatible with `string.h` and whatnot char* function works, all this means that this lib is compatible with all string functions

enjoy :3

the lenght is stored in the *back* of the string, when creating the string i store its original lenght inside the malloc-ed space then move the pointer 4 bytes to the right, and write the string

remember that it will not reduce its size if u write a smaller string to it, the only way to get a smaller string is to free the string and make a new one.
