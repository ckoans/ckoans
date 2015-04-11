##  Without Makefile

Simplest compilation step without Makefile.

```
cc -o main main.c hellofunc.c -I.
```

`-I.` tells `cc` to look in the current directory for the include file `hellofunc.h`.

## With Makefile

Try compiling with different `Makefile` examples below.  Use `make -f [themakefile]` to use a specific `Makefile`.

* `Makefile1` is the simplest form.
* `Makefile2` adds in `CC` and `CFLAGS` constants and uses `.o` object files so it is more efficient, compiling only the latest changes.
* `Makefile3` is like `Makefile2` but handles changes in dependencies as well.
* `Makefile4` abstracts the object files into a single place and so gives us a general compilation statement
* `Makefile5` allows us to place our external libraries into a separate `include` directory for header files and a `lib` source directory
    * It also shows us how to include other libraries as needed
    * And a `clean` statement to clean up after if we want to invoke it via `make clean -f Makefile5`
