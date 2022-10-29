def add_binary(a,b):
    return bin(int(a, 2) + int(b, 2))

def main(): 
    a = "110111"
    b = "100"
    sum = add_binary(a,b)
    print(sum[2:])
    
main()