def outer_function():
    #global a
    a = 20

    def inner_function():
        nonlocal a  # nonlocal
        a = 30
        print('a =', a)

    inner_function()
    print('a =', a)

a = 10
outer_function()
print('a =', a)