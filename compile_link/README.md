## compile only

Our object file will be created as `hello.o` by default.

```
clang -c hello.c
```

## link

Linking is performed when our input file is not a source file but an object file.

```
clang -o hello hello.o
```
