# Simple Python Youtube Downloader using the Tkinter Python GUI Library

"""
* Name: Ani Peter Benjamin
* Project: Python Yotube Downloader using Tkinter and pytube
* GUI Program
* Find instructions for use in the repo README file
*NB: This is open source, feel free to contribute

"""
"""
* Pseudocodes
- Create the Gui
- Create a function to download the video
"""

# programs starts
# importing modules
from tkinter import *
from pytube import YouTube as YT

# Crating the window using TKinter
root = Tk()
root.geometry('550x400') # This is the size of our display
root.resizable(1,1) # Make it resizable for all screentypes
root.title('Vortex Youtube Downloader')



## Create the entry page for input


Label(root, text="Download Youtube Video", font="san-serif 14 bold").pack()
link = StringVar() # The variable type is a string
Label(root, text="Paste The Video URL", font="san-serif 14 bold").place(x=150, y=56)
link_holder = Entry(root, width=60, textvariable=link).place(x=30, y=86)


## Download button and Download function


# Download Function
"""
* We will be creating a function and 
* passing it the same command given to the button
* to allow it to download the video and display a success message after
"""
def Download():
    try:
        url = YT(str(link.get())) # Gets the particular video in context
        video = url.streams.get_by_itag(22) # It targets the first available stream
        video.download() # Downloads the video
        Label(root, text="You've Successfully Download the video", font="serif 16").place(x=100, y=180)
    except:
        print("Error Downloading")
        Label(root, text="Error Encountered 404", font="serif 16 ", bg='blue').place(x=100, y=180)

# Download button
Button(root, text="Download", font="san-serif 16 bold", padx=2, pady=0.5, command=Download).place(x=200, y=150)

"""
* Follow my socials for more 
* Github: https://github.com/vortex-hue
* Twitter: @ben_pete#
* Linkedlin: Peter Ani
"""
#KeepCoding()
root.mainloop() # program terminator