"""
#string concatenation (aka how to put two strings together)

#calling a string variable --> str_name
str_name="Tauseef"

#a few ways to do it
print("My name is " + str_name)
print("My name is {}".format(str_name))
print(f"My name is {str_name}")
"""

"""
from pytube import YouTube
from sys import argv

link = argv[1]
yt = YouTube(link)

print("Title: ", yt.title)

print("View: ", yt.views)

yd = yt.streams.get_highest_resolution()

yd.download('D:\Downloads')

"""


from pytube import YouTube
from sys import argv

link = argv[1]
yt = YouTube(link)

print("Title: ", yt.title)

print("View: ", yt.views)

yd = yt.streams.get_highest_resolution()

# ADD FOLDER HERE
yd.download('D:\Downloads')

#https://www.youtube.com/watch?v=7eT9D63amz0&list=RD7eT9D63amz0&start_radio=1