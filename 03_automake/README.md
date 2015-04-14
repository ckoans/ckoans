## Source code and Makefile

Write source code and Makefile

## Automake

1) autoscan
    `configure.scan` gets generated

2) mv configure.scan configure.ac
    we will be customizing `configure.ac` later

3) autoconf
    `configure` gets generated

4) mv Makefile Makefile.in
    `Makefile.in` will be the template for our new Makefile

## Build with ./configure and make

Now, we can run `./configure` and `make`.

It works; but there's a small error message that we can ignore, but it leads us to the next topic.

```
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables...
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... none needed
configure: creating ./config.status
config.status: creating Makefile
config.status: error: cannot find input file: `config.h.in'`
```

## Portability with config.h

5) autoheader
    `config.h.in` gets generated

If we run `./configure` now, `/config.h` will get created.

```
checking for gcc... gcc
checking whether the C compiler works... yes
checking for C compiler default output file name... a.out
checking for suffix of executables...
checking whether we are cross compiling... no
checking for suffix of object files... o
checking whether we are using the GNU C compiler... yes
checking whether gcc accepts -g... yes
checking for gcc option to accept ISO C89... none needed
configure: creating ./config.status
config.status: creating Makefile
config.status: creating config.h
```

