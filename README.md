# eficc - C compiler that works in the UEFI shell

**WORK IN PROGRESS**

This is a compiler that only runs on a UEFI shell, and it only compiles programs
to run on a UEFI shell on the x86-64 instruction set. It is purposefully
designed to be extremely simple and auditable. This project is a part of a
larger goal to be able to bootstrap the Linux kernel from a UEFI shell.

This is based off of [ChibiCC](https://github.com/rui314/chibicc). Thank you,
[Rui Ueyama](@rui314) for your great work!

## MVP To Do

- [x] Figure out why the assembly instructions are so complicated
- [x] Somehow only selectively define `__FUNCTION__` if used
- [x] Write function names as ASCII in the assembly
- [ ] Remove unneeded headers
- [ ] Remove glibc and Linux-specific headers
- [ ] Compile Itself
- [ ] Compile straplibc
- [ ] Compile TinyCC
- [ ] Write PE32+ / EFI Executable instead of assembly (or maybe hex?)
- [ ] Add debug symbols

## Notes

- Assumes ASCII C files only.
- No assembly
- No support for UTF-32 strings
- Support for wide strings (since it is required by EFI)

You will notice that generated 0-arity functions have a huge preamble of
instructions where all of the arguments are pushed to the stack. This behavior
is documented here: https://github.com/rui314/chibicc/issues/46.
