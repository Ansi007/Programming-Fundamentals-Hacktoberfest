# Pass "wb" to write a new file, or "ab" to append
with open("test.txt", "wb") as binary_file:
    # Write text or bytes to the file
    binary_file.write("Write text by encoding\n".encode('utf8'))
    num_bytes_written = binary_file.write(b'\xDE\xAD\xBE\xEF')
    print("Wrote %d bytes." % num_bytes_written)