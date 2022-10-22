"""If you are working on a text file, you can read data line by line."""

with open("test.txt", "rb") as text_file:
    # One option is to call readline() explicitly
    # single_line = text_file.readline()

    # It is easier to use a for loop to iterate each line
    for line in text_file:
        print(line)