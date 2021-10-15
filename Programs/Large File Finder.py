ascii_banner = pyfiglet.figlet_format("Largest File Finder")
print(ascii_banner)

import pyfiglet
import os

  
# folder path input
print("Enter folder path")
path = os.path.abspath(input())
  
# for storing size of each 
# file
size = 0
  
# for storing the size of 
# the largest file
max_size = 0
  
# for storing the path to the 
# largest file
max_file =""
  
# walking through the entire folder,
# including subdirectories
  
for folder, subfolders, files in os.walk(path):
      
    # checking the size of each file
    for file in files:
        size = os.stat(os.path.join( folder, file  )).st_size
          
        # updating maximum size
        if size>max_size:
            max_size = size
            max_file = os.path.join( folder, file  )
  
print("The largest file is: "+max_file)
print('Size: '+str(max_size)+' bytes')
