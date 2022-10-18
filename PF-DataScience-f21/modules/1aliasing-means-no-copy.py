def justafunction(lst):
    lst[0]=999
    lst.append(777)
    print(id(lst))


def main():
    data = [2,4,9,7,3]
    print(data)

    cpdata = data
    cpdata.remove(4)
    print(data)

    justafunction(data)
    print(data)

    print(id(data))
    print(id(cpdata))

main()
