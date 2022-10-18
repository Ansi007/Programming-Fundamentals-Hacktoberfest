class TextPGM:
	pass
f = open("sample.ppm","w")
img = TextPGM()
img.header = "P3"
img.width = "100"
img.height = "200"
img.shades = "255"
img.width = int(img.width)
img.height = int(img.height)
img.shades = int(img.shades)
img.data = []
l = (img.height * img.width)//2
for i in range(l):
    img.data.append(int("255"))
    img.data.append(int("0"))
    img.data.append(int("0"))
for j in range(l):
    img.data.append(int("0"))
    img.data.append(int(255/2))
    img.data.append(int(255/2))
f.write(img.header + "\n")
f.write(str(img.width) + " " + str(img.height) + "\n")
f.write(str(img.shades) + "\n")

line = 0
for num in img.data:
    f.write(str(num))
    line += 1
    if line % 15 == 0:
        f.write("\n")
    else:
        f.write(" ")

f.close()


