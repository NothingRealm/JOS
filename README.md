# Advanced OS labs-fall 2021

## Useful Links
- [x86 Architecture](https://en.wikibooks.org/wiki/X86_Assembly/X86_Architecture)
- [x86 Instruction](https://en.wikibooks.org/wiki/X86_Assembly/X86_Instructions)
- [GDB cheat-sheat](https://cs.brown.edu/courses/cs033/docs/guides/gdb.pdf)
- [Inilne Assembly](https://www.ibiblio.org/gferg/ldp/GCC-Inline-Assembly-HOWTO.html)

## Useful Books
- RHEL 3, Using as, the Gnu Assembler

## Useful Notes

### Keyboard Controller
Refrences: https://stanislavs.org/helppc/8042.html

    `0x64` is the IO port of the `keyboard controller` which has two ports `0x64(Command port)` and `0x60(Data port)`,
    Status Register - PS/2 Controller

	8042 Status Register (port 64h read)

	|7|6|5|4|3|2|1|0|  8042 Status Register
	 | | | | | | | `---- output register (60h) has data for system
	 | | | | | | `----- input register (60h/64h) has data for 8042
	 | | | | | `------ system flag (set to 0 after power on reset)
	 | | | | `------- data in input register is command (1) or data (0)
	 | | | `-------- 1=keyboard enabled, 0=keyboard disabled (via switch)
	 | | `--------- 1=transmit timeout (data transmit not complete)
	 | `---------- 1=receive timeout (data transmit not complete)
	 `----------- 1=even parity rec'd, 0=odd parity rec'd (should be odd)




