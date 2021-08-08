# convert an integer to a hex string
def to_hex( value ):
    HEX_DIGITS = '0123456789abcdef'
    s = ''
    if (value < 0):
        value += (1 << 32)  # 32-bit value
    while True:
        d = HEX_DIGITS[ value & 0xf ]
        s = d + s
        value >>= 4
        if value == 0:
            break
    s = '0x' + s
    return s

if __name__ == "__main__": # some test code
    print (to_hex(33))  # 0x21
    print (to_hex(-1))  # 0xffffffff