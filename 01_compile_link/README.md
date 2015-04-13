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

## utilities

### file

Determines file type.

```
$ file hello.c
hello.c: ASCII c program text

$ file hello.o
hello.o: Mach-O 64-bit object x86_64

$ file hello
hello: Mach-O 64-bit executable x86_64
```

### nm

Lists symbol table of object files.

```
$ nm hello.o
0000000000000060 s EH_frame0
0000000000000037 s L_.str
0000000000000000 T _main
0000000000000078 S _main.eh
                 U _printf
```

```
$ nm hello
0000000100000000 T __mh_execute_header
0000000100000f30 T _main
                 U _printf
                 U dyld_stub_binder
```

### ldd or otool -L

```
$ otool -L hello
hello:
    /usr/lib/libSystem.B.dylib (compatibility version 1.0.0, current version 1213.0.0)
```

