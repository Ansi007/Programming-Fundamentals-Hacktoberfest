"""You can move to a specific position in file before reading or writing using seek(). 
You can pass a single parameter to seek() and it will move to that position, 
relative to the beginning of the file."""

# offset --> cursor or pointer in reading writing.
# Seek can be called one of two ways:
#   x.seek(offset)
#   x.seek(offset, starting_point)

# starting_point can be 0, 1, or 2
# 0 - Default. Offset relative to beginning of file
# 1 - Start from the current position in the file
# 2 - Start from the end of a file (will require a negative offset)

with open("test.txt", "rb") as binary_file:
    # Seek a specific position in the file and read N bytes
    binary_file.seek(-10, 2)  # Go to beginning of the file
    couple_bytes = binary_file.read(2)
    print(couple_bytes)
