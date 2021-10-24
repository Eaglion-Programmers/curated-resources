# file reading + writng

f= open("file handling sample.txt", "r+")
content=f.read()
f.write("hey")
content1=f.read()

print(content,"\n")
print(content1)
f.close()
