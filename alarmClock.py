##########
#Alarm Clock
#By Tom Biju
##########
import pygame
import time
import datetime
alarmAudio=input('Enter the name of the audio for the alarm(ex: glory.mp3)')
file = alarmAudio
pygame.init()
pygame.mixer.init()
pygame.mixer.music.load(file)
option=input("Would you like to enter an amount of time (press 1 and enter) or have the alarm go off at a certain time? (press 2 and enter)")
if option=='1':
    alarmTimeFormat=input('Enter the format of the timing you want, exactly: seconds minutes hourse')
    alarmTime=int(input('Enter the amount of time as an integer'))
    if alarmTimeFormat=='minutes':
        alarmTime=60*alarmTime   #converts minutes to seconds, which is the argument the time library takes for time delay
    elif alarmTimeFormat=='hours':
        alarmTime=3600*alarmTime #converts hours to seconds
    time.sleep(alarmTime)
    pygame.mixer.music.play()
elif option=='2':
    setTime=input('What time do you want the alarm to go off? ex: 10:30(space)AM')
    playingWithTime=setTime.split(':')
    playingWithTimeSomeMore=playingWithTime[1].split(" ")
    hourTime=playingWithTime[0]
    hourTime=int(hourTime)
    minuteTime=playingWithTimeSomeMore[0]
    minuteTime=int(minuteTime)
    dayNight=playingWithTimeSomeMore[1]
    if(dayNight=='PM'):
       hourTime=hourTime+12
    check=False
    while check==False:
        test = datetime.datetime.now().replace(hour=hourTime,minute=minuteTime,second=0,microsecond=0)
        if datetime.datetime.now() > test:
           check=True
           pygame.mixer.music.play()       
userInput='play'
while userInput=='play':
    userInput=input('Press enter to stop alarm')
pygame.mixer.music.stop()
