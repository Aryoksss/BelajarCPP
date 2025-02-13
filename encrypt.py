flag = "CTF{belajar_cpp_kang_ini_aryok}"
encrypted = []

for i, c in enumerate(flag):
    enc = ord(c)
    enc ^= 0x35
    enc ^= (i * 3) & 0xFF
    enc ^= 0x42
    encrypted.append(enc)

print("Encrypted bytes:")
print("{" + ", ".join(f"0x{x:02x}" for x in encrypted) + ", 0x00}")