## Summary

1. Create sources and a simple `Makefile`.
2. `autoscan`
3. mv `configure.scan` `configure.ac`
4. `autoheader`
5. Make source portable by looking at `config.h.in`.
6. Create `Makefile.am`.
7. `automake`
8. `aclocal`
9. `autoconf`
10. `./configure`
11. `make`
12. Run our program.

All these doesn't guarantee 100% portability.  Bug reports when users install these libraries will provide us with the information to tweak `configure.ac` so that we make it more portable.

To be able to tweak `configure.ac` well, we have to learn how to write custom macros, run tests, etc.

Intermediate files like `configure.scan`, `autoscan.log`, `configure.ac` are not needed when we distribute our program though people do keep them around.

Autoconf macros use a program called M4 to expand the macros into shell scripts.  So these macros are also referred to as M4 macros.  Many files that we have walked through - like `configure.ac`, `aclocal.m4` are M4 macros.  These macros are expanded to create `configure`, which is a shell script.  To learn more about M4 macros, go do some tutorials.

## Other notes

Other useful programs when we use Autoconf and Automake are `ifnames` and `autoreconf`.

`ifnames` is a program that identifies constants that we use in our C program.  It is useful if we want to know what constants we used in our program to make it portable. For example, we we run `ifnames hello.c`, we will be informed that we have used two constants `HAVE_GETTIMEOFDAY` and `HAVE_SYS_TIME_H`.

`autoreconf` is a program that runs Autoconf programs for us automatically so we don;t have to remember which Autoconf programs to run and in which order.  But it only works after we have gone through our compilation once.

Other useful files that we may create in more advanced configurations are `acinclude.m4` and `autogen.sh`.  These are files we create ourselves.

If we want to create our own M4 macros or use someone else's macors, we should put these new macros in `acinclude.m4`. Then, this file will be read by `aclocal` to generate a new `aclocal.m4` file so Autoconf can use the new Macros in generating the `configure` script.

`autogen.sh` is a shell script people often use to automatically reconfigure everything.  It is similar to `autoreconf` but is a custom version that also works with Automake and do other extra stuff we want.  `autogen.sh` is just a convention; we can name it anything though it's a good idea to name it as `autogen.sh` so others understand that this is our custom shell script.
