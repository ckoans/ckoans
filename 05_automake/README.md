## Finally, automake

After using `autoscan`, `autoheader` and `autoconf` to implement source code portability, we now focus our attention on using `automake` to update our `Makefile` into a portable form as well.

In short, we want our source code to be portable and we want our Makefile to be portable, so users of our program or library can install it easily.

3 steps to arrive at a portable `Makefile`:

1. Create `Makefile.am`
2. `Makefile.am` will be used by Automake to create `Makefile.in`
3. `Makefile.in` will be used by `configure` to create `Makefile`.
