cmd_/home/anjali/devicedriver/exportsymbol/add.ko := ld -r -m elf_x86_64  -z max-page-size=0x200000  --build-id  -T ./scripts/module-common.lds -o /home/anjali/devicedriver/exportsymbol/add.ko /home/anjali/devicedriver/exportsymbol/add.o /home/anjali/devicedriver/exportsymbol/add.mod.o;  true
