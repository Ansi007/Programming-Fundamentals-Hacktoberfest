def isperfectSquare(n):
    i = 1
    if n > 0:
        while i < n:
            if i*i == n:
                return True
            i = i + 1
        return False
def main():
    print(isperfectSquare(4))
    print(isperfectSquare(70))
    print(isperfectSquare(99))
    print(isperfectSquare(41.5))
main()
