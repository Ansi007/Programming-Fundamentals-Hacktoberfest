def move(data,FROM,here,count):
    i = here
    c = i+count
    while i < c:
        k = data[i]
        data.append(k)
        i = i + 1
    i = FROM
    c = i + count
    j = here
    while i < c:
        data[j] = data[i]
        i = i + 1
        j = j + 1
    i = FROM
    c = i+count
    while i < c:
        del(data[i])
        i = i + 1
    return data
def main():
    a = [1,2,3,4,5,6,7,8,9,10,11,12,13]
    print(move(a,3,10,3))
main()


